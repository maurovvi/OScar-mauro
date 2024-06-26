/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/mnt/EVO/ASN1-C-ITS/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_StationaryVehicleSubCauseCodeV1_H_
#define	_StationaryVehicleSubCauseCodeV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum StationaryVehicleSubCauseCodeV1 {
	StationaryVehicleSubCauseCodeV1_unavailable	= 0,
	StationaryVehicleSubCauseCodeV1_humanProblem	= 1,
	StationaryVehicleSubCauseCodeV1_vehicleBreakdown	= 2,
	StationaryVehicleSubCauseCodeV1_postCrash	= 3,
	StationaryVehicleSubCauseCodeV1_publicTransportStop	= 4,
	StationaryVehicleSubCauseCodeV1_carryingDangerousGoods	= 5
} e_StationaryVehicleSubCauseCodeV1;

/* StationaryVehicleSubCauseCodeV1 */
typedef long	 StationaryVehicleSubCauseCodeV1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_StationaryVehicleSubCauseCodeV1;
asn_struct_free_f StationaryVehicleSubCauseCodeV1_free;
asn_struct_print_f StationaryVehicleSubCauseCodeV1_print;
asn_constr_check_f StationaryVehicleSubCauseCodeV1_constraint;
ber_type_decoder_f StationaryVehicleSubCauseCodeV1_decode_ber;
der_type_encoder_f StationaryVehicleSubCauseCodeV1_encode_der;
xer_type_decoder_f StationaryVehicleSubCauseCodeV1_decode_xer;
xer_type_encoder_f StationaryVehicleSubCauseCodeV1_encode_xer;
oer_type_decoder_f StationaryVehicleSubCauseCodeV1_decode_oer;
oer_type_encoder_f StationaryVehicleSubCauseCodeV1_encode_oer;
per_type_decoder_f StationaryVehicleSubCauseCodeV1_decode_uper;
per_type_encoder_f StationaryVehicleSubCauseCodeV1_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _StationaryVehicleSubCauseCodeV1_H_ */
#include "asn_internal.h"
