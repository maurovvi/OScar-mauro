/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/mnt/EVO/ASN1-C-ITS/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_TimestampItsV1_H_
#define	_TimestampItsV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "INTEGER.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TimestampItsV1 {
	TimestampItsV1_utcStartOf2004	= 0,
	TimestampItsV1_oneMillisecAfterUTCStartOf2004	= 1
} e_TimestampItsV1;

/* TimestampItsV1 */
typedef INTEGER_t	 TimestampItsV1_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TimestampItsV1_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TimestampItsV1;
asn_struct_free_f TimestampItsV1_free;
asn_struct_print_f TimestampItsV1_print;
asn_constr_check_f TimestampItsV1_constraint;
ber_type_decoder_f TimestampItsV1_decode_ber;
der_type_encoder_f TimestampItsV1_encode_der;
xer_type_decoder_f TimestampItsV1_decode_xer;
xer_type_encoder_f TimestampItsV1_encode_xer;
oer_type_decoder_f TimestampItsV1_decode_oer;
oer_type_encoder_f TimestampItsV1_encode_oer;
per_type_decoder_f TimestampItsV1_decode_uper;
per_type_encoder_f TimestampItsV1_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TimestampItsV1_H_ */
#include "asn_internal.h"
