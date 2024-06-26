/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/mnt/EVO/ASN1-C-ITS/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_RoadworksSubCauseCodeV1_H_
#define	_RoadworksSubCauseCodeV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RoadworksSubCauseCodeV1 {
	RoadworksSubCauseCodeV1_unavailable	= 0,
	RoadworksSubCauseCodeV1_majorRoadworks	= 1,
	RoadworksSubCauseCodeV1_roadMarkingWork	= 2,
	RoadworksSubCauseCodeV1_slowMovingRoadMaintenance	= 3,
	RoadworksSubCauseCodeV1_shortTermStationaryRoadworks	= 4,
	RoadworksSubCauseCodeV1_streetCleaning	= 5,
	RoadworksSubCauseCodeV1_winterService	= 6
} e_RoadworksSubCauseCodeV1;

/* RoadworksSubCauseCodeV1 */
typedef long	 RoadworksSubCauseCodeV1_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RoadworksSubCauseCodeV1_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RoadworksSubCauseCodeV1;
asn_struct_free_f RoadworksSubCauseCodeV1_free;
asn_struct_print_f RoadworksSubCauseCodeV1_print;
asn_constr_check_f RoadworksSubCauseCodeV1_constraint;
ber_type_decoder_f RoadworksSubCauseCodeV1_decode_ber;
der_type_encoder_f RoadworksSubCauseCodeV1_encode_der;
xer_type_decoder_f RoadworksSubCauseCodeV1_decode_xer;
xer_type_encoder_f RoadworksSubCauseCodeV1_encode_xer;
oer_type_decoder_f RoadworksSubCauseCodeV1_decode_oer;
oer_type_encoder_f RoadworksSubCauseCodeV1_encode_oer;
per_type_decoder_f RoadworksSubCauseCodeV1_decode_uper;
per_type_encoder_f RoadworksSubCauseCodeV1_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RoadworksSubCauseCodeV1_H_ */
#include "asn_internal.h"
