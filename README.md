# OScar - the Open Source car ETSI C-ITS implementation

<img height="191.1" src="logo/OScar_logo_v1.png" width="511.5"/>

This repository contains _OScar_, an ongoing C++ open implementation of the ETSI C-ITS stack for vehicular communications, to be used for deployement into real hardware, running, for instance, [OpenWrt-V2X](https://github.com/francescoraves483/OpenWrt-V2X).

OScar is designed to be an efficient, lightweight, single-executable, self-contained implementation of the ETSI C-ITS standards.

This project is based on **OCABS**, the "Open CA Basic Service", of which it represents the evolution (with the removal of the proposed enhanced CAMs). OCABS is available [here](https://github.com/francescoraves483/OCABS-project).
For the reception and Local Dynamic Map (LDM) part, it relies instead on an enhancement and evolution of the code of **AIM**, the "Automotive Integrated Map" (i.e., a vehicle LDM implementation), available [here](https://github.com/francescoraves483/AIM-AutomotiveIntegratedMap).

This project includes a full open source implementation of the **ETSI CA Basic Service**, with reference to the standard [ETSI EN 302 637-2 V1.4.1](https://www.etsi.org/deliver/etsi_en/302600_302699/30263702/01.04.01_60/en_30263702v010401p.pdf), including the **BTP** and **GeoNetworking** layers. CAMs **version 2** are currently being managed (there is no official support for the older CAMs version 1).

It also include an implementation of the **ETSI VRU awareness Basic Service (VBS)**, with reference to the standard [ETSI TS 103 300-3 V2.1.1](https://www.etsi.org/deliver/etsi_ts/103300_103399/10330003/02.01.01_60/ts_10330003v020101p.pdf). The implementation is complete except for the clustering feature.

OScar thus supports the following message types:
- CAM
- VAM
- DENM (partial)

The support to other relevant message types is also planned for the near future:
- IVIM
- CPM
- EVCSN
- [CEM (proposal)](https://github.com/francescoraves483/ms-van3t-CAM2CEM)

As OScar is still work-in-progress, it does not support yet secured messages.

**Important**: OScar needs a source of PVT (Position-Velocity-Time) GNSS data through `gpsd`. Thus, a GNSS device must be available (either real, or emulated, for instance thanks to tools like `gpsfake` or the Cohda Wireless `vsim`) and it must be connected to a `gpsd` instance.

The OScar main help, with all the possibile options, can be displayed with `./OScar --help`, after compiling the OScar binary.

# Compiling OScar

OScar can be easily compiled on the same device in which it will be run thanks to `make`.

As the only pre-requisite, `libgps-dev` must be installed and available.

To download and build the latest version of OScar, first, clone this repository:
```
git clone https://github.com/francescoraves483/OScar
``` 
Then, `cd` into the newly created directory:
```
cd OScar
```
Finally, build OScar:
```
make
```

The OScar binary file will be called `OScar`.

Then, make sure that a GNSS data provider is active and `gpsd` is running (you can use the `gpsmon` tool to check if GNSS PVT data is actively being received), with `gpsmon -n <gpsd IP>:<gpsd port>`.

Considering the transmission of CAMs, you can then launch OScar with (a stationID should be specified all the times with the `-v` option):
```
./OScar -C -v <unsigned 32-bit integer stationID> -D <IP or URL of the device where gpsd is being run - usually localhost/127.0.0.1> -P <port to use for the connection to gpsd> -L <log file name> -I <interface from which CAMs will be disseminated> -x -m
```

If you get a permission denied error (as OScar is internally using *raw sockets*), you can try launching again OScar with `sudo` or from the `root` user.

# Cross-compiling OScar for OpenWrt

OScar is also though to be easily cross-compiled for any embedded platform or router running OpenWrt.

Cross-compilation also leverages `make`. However, it requires a few additional steps, after cloning the repository.

First of all, an OpenWrt toolchain must be available in the device used for cross-compilation, with the `PATH` and `STAGING_DIR` environment variables being properly set. You can find additional information on how to set up the OpenWrt toolchain [here](https://openwrt.org/docs/guide-developer/toolchain/crosscompile). When performing the build procedure steps, select the `libgps` package with `make menuconfig`.

Then, open the OScar `Makefile` and update lines 8 and 10 (this needs to be done only once per development PC):
- Line 8 (`OPENWRT_LIBGPS_VER`) should be updated with the libgps version which came with the OpenWrt toolchain installation (currently, it should be kept to `3.23`, but it may change in the future)
- Line 10 (`OPENWRT_INCLUDE_DIR`) should be updated to point to the directory where the OpenWrt toolchain `./usr/include` is located (you can start from the already available path to properly update this line)

If you want to compile for a target architecture different than x86_x64 update also lines 3 to 7 with the proper directories and compilers/linkers.


After performing these modifications, `cd` into the OScar project main directory:
```
cd OScar
```
Finally, build OScar with the `compileAPU` target:
```
make compileAPU
```
As in the previous case, a binary file named `OScar` will be generated. The executable can be then transferred to the device running OpenWrt and launched like described earlier.

You can also make OScar run as a service, by creating two new files inside OpenWrt: 
- `/etc/init.d/OScar`, to create a new service
- `/etc/config/OScar`, to configure the OScar service

A sample of the two files is reported below:

## `/etc/init.d/OScar` sample

This sample shows how to create the OScar service through an `init.d` script. More details are available [here](https://openwrt.org/docs/techref/initscripts) and [here](https://openwrt.org/docs/guide-developer/procd-init-script-example).

For a basic working service setup for the transmission of CAMs only (plus the reception of CAMs and VAMs), you can freely copy the whole content reported below. This sample `init.d` assumes that the OScar executable has been placed inside a directory named `/root/OScar` (see the `procd_set_param command` line).

```
#!/bin/sh /etc/rc.common
 
USE_PROCD=1
 
START=99
STOP=01
 
CONFIGURATION=OScar
 
start_service() {
    # Reading configuration parameters (i.e. interface and port)
    config_load "${CONFIGURATION}"
    local name
    local every
 
    config_get interface OScar interface
	config_get gnssport OScar gnssport
	config_get vehicleID OScar vehicleID
	config_get gpsdaddress OScar gpsdaddress
 
    procd_open_instance
 
    # pass config to script on start
    procd_set_param command /bin/bash -c "cd /root/OScar && ./OScar -C -v $vehicleID -D $gpsdaddress -P $gnssport -L stdout -I $interface -x -m

    procd_set_param file /etc/config/OScar
    procd_set_param stdout 1
    procd_set_param stderr 1
	procd_set_param respawn ${respawn_threshold:-3600} ${respawn_timeout:-60} ${respawn_retry:-0}
    procd_close_instance
}
```

## `/etc/config/OScar` sample

This sample shows how to create an OScar configuration file, after setting up the proper `init.d` script.

The configuration file options should match the ones reported in the `config_get` lines of the `init.d` script.

```
config myservice 'OScar'
	option interface 'wlan1'
	option gnssport '2947'
	option vehicleID '3000112'
	option gpsdaddress '127.0.0.1'
```

In general, this sample allows the user to set the dissemination interface (`interface` option), the gpsd service address (`gpsdaddress` option), to retrieve the PVT data from, the port at which the gpsd address is available (`gnssport` option) and the device station ID (`vehicleID` option). This sample is related to an OScar service set to disseminate CAMs only, and receive both CAMs and VAMs.

## Starting and stopping the OpenWrt service

After setting up the OScar OpenWrt service, you can start it with:
```
service OScar start
```
And stop it with:
```
service OScar stop
```
The service can also be enabled to run at start-up with:
```
service OScar enable
```
The execution at start-up can be disabled, instead, with:
```
service OScar disable
```

When running as a service, the output of OScar is not directly available, but it can be retrieved with:
```
logread
```


# Contact and License information

This project is licensed under a GPL-2.0 License. Please see also the `LICENSE` file for more details.

For any question, please write to:
- Francesco Raviglione: francescorav.es483@gmail.com
- Marco Rapelli: rapelli.m@libero.it
- Alessandro Genovese: s303384@studenti.polito.it

Thanks!


# Used libraries

This project uses internally the _TCLAP - Templatized Command Line Argument Parser_ library (v1.2), available [here](https://tclap.sourceforge.net/), and included in the `tclap` directory.

It also includes a porting and C adaptation of a part of [_GeographicLib_](https://geographiclib.sourceforge.io/) for the computation of Transverse Mercator projections, included in the `geographiclib-port` directory.
