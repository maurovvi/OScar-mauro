/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ITS-Container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_ItsPduHeaderV1_H_
#define	_ItsPduHeaderV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "StationIDV1.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ItsPduHeaderV1__protocolVersion {
	ItsPduHeaderV1__protocolVersion_currentVersion	= 1
} e_ItsPduHeaderV1__protocolVersion;
typedef enum ItsPduHeaderV1__messageID {
	ItsPduHeaderV1__messageID_denm	= 1,
	ItsPduHeaderV1__messageID_cam	= 2,
	ItsPduHeaderV1__messageID_poi	= 3,
	ItsPduHeaderV1__messageID_spat	= 4,
	ItsPduHeaderV1__messageID_map	= 5,
	ItsPduHeaderV1__messageID_ivi	= 6,
	ItsPduHeaderV1__messageID_ev_rsr	= 7
} e_ItsPduHeaderV1__messageID;

/* ItsPduHeaderV1 */
typedef struct ItsPduHeaderV1 {
	long	 protocolVersion;
	long	 messageID;
	StationIDV1_t	 stationID;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ItsPduHeaderV1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ItsPduHeaderV1;
extern asn_SEQUENCE_specifics_t asn_SPC_ItsPduHeaderV1_specs_1;
extern asn_TYPE_member_t asn_MBR_ItsPduHeaderV1_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ItsPduHeaderV1_H_ */
#include "asn_internal.h"