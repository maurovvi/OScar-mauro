/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "/mnt/EVO/ASN1-C-ITS/IVI-payload.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_DriverCharacteristicsIVI_H_
#define	_DriverCharacteristicsIVI_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DriverCharacteristicsIVI {
	DriverCharacteristicsIVI_unexperiencedDrivers	= 0,
	DriverCharacteristicsIVI_experiencedDrivers	= 1,
	DriverCharacteristicsIVI_rfu1	= 2,
	DriverCharacteristicsIVI_rfu2	= 3
} e_DriverCharacteristicsIVI;

/* DriverCharacteristicsIVI */
typedef long	 DriverCharacteristicsIVI_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DriverCharacteristicsIVI_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DriverCharacteristicsIVI;
asn_struct_free_f DriverCharacteristicsIVI_free;
asn_struct_print_f DriverCharacteristicsIVI_print;
asn_constr_check_f DriverCharacteristicsIVI_constraint;
ber_type_decoder_f DriverCharacteristicsIVI_decode_ber;
der_type_encoder_f DriverCharacteristicsIVI_encode_der;
xer_type_decoder_f DriverCharacteristicsIVI_decode_xer;
xer_type_encoder_f DriverCharacteristicsIVI_encode_xer;
oer_type_decoder_f DriverCharacteristicsIVI_decode_oer;
oer_type_encoder_f DriverCharacteristicsIVI_encode_oer;
per_type_decoder_f DriverCharacteristicsIVI_decode_uper;
per_type_encoder_f DriverCharacteristicsIVI_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DriverCharacteristicsIVI_H_ */
#include "asn_internal.h"
