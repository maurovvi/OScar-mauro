/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2"
 * 	found in "Ieee1609Dot2.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -D output_v2_1_1/`
 */

#ifndef	_PduFunctionalType_H_
#define	_PduFunctionalType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PduFunctionalType */
typedef long	 PduFunctionalType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PduFunctionalType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PduFunctionalType;
asn_struct_free_f PduFunctionalType_free;
asn_struct_print_f PduFunctionalType_print;
asn_constr_check_f PduFunctionalType_constraint;
ber_type_decoder_f PduFunctionalType_decode_ber;
der_type_encoder_f PduFunctionalType_encode_der;
xer_type_decoder_f PduFunctionalType_decode_xer;
xer_type_encoder_f PduFunctionalType_encode_xer;
jer_type_encoder_f PduFunctionalType_encode_jer;
oer_type_decoder_f PduFunctionalType_decode_oer;
oer_type_encoder_f PduFunctionalType_encode_oer;
per_type_decoder_f PduFunctionalType_decode_uper;
per_type_encoder_f PduFunctionalType_encode_uper;
per_type_decoder_f PduFunctionalType_decode_aper;
per_type_encoder_f PduFunctionalType_encode_aper;
#define PduFunctionalType_tlsHandshake	((PduFunctionalType_t)1)
#define PduFunctionalType_iso21177ExtendedAuth	((PduFunctionalType_t)2)

#ifdef __cplusplus
}
#endif

#endif	/* _PduFunctionalType_H_ */
#include "asn_internal.h"
