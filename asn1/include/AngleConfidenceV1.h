/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "/mnt/EVO/ASN1-stuff/ASN1-C-ITS/CPMv1.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_AngleConfidenceV1_H_
#define	_AngleConfidenceV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AngleConfidenceV1 {
	AngleConfidenceV1_zeroPointOneDegree	= 1,
	AngleConfidenceV1_oneDegree	= 10,
	AngleConfidenceV1_outOfRange	= 126,
	AngleConfidenceV1_unavailable	= 127
} e_AngleConfidenceV1;

/* AngleConfidenceV1 */
typedef long	 AngleConfidenceV1_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AngleConfidenceV1_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AngleConfidenceV1;
asn_struct_free_f AngleConfidenceV1_free;
asn_struct_print_f AngleConfidenceV1_print;
asn_constr_check_f AngleConfidenceV1_constraint;
ber_type_decoder_f AngleConfidenceV1_decode_ber;
der_type_encoder_f AngleConfidenceV1_encode_der;
xer_type_decoder_f AngleConfidenceV1_decode_xer;
xer_type_encoder_f AngleConfidenceV1_encode_xer;
oer_type_decoder_f AngleConfidenceV1_decode_oer;
oer_type_encoder_f AngleConfidenceV1_encode_oer;
per_type_decoder_f AngleConfidenceV1_decode_uper;
per_type_encoder_f AngleConfidenceV1_encode_uper;
per_type_decoder_f AngleConfidenceV1_decode_aper;
per_type_encoder_f AngleConfidenceV1_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AngleConfidenceV1_H_ */
#include "asn_internal.h"
