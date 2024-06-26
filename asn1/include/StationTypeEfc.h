/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "/mnt/EVO/ASN1-C-ITS/ISO14906(2018)EfcDsrcApplicationv6-patched.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_StationTypeEfc_H_
#define	_StationTypeEfc_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum StationTypeEfc {
	StationTypeEfc_unspecified	= 0,
	StationTypeEfc_closedEntryWithPayment	= 1,
	StationTypeEfc_closedEntryWithoutPayment	= 2,
	StationTypeEfc_closedTransit	= 3,
	StationTypeEfc_closedExit	= 4,
	StationTypeEfc_closedCredit	= 5,
	StationTypeEfc_mixed	= 6,
	StationTypeEfc_passage	= 7,
	StationTypeEfc_checkpoint	= 8,
	StationTypeEfc_reload	= 9,
	StationTypeEfc_reservedForFutureCENUse1	= 10,
	StationTypeEfc_reservedForFutureCENUse2	= 11,
	StationTypeEfc_reservedForFutureCENUse3	= 12,
	StationTypeEfc_reservedForFutureCENUse4	= 13,
	StationTypeEfc_privateUse5	= 14,
	StationTypeEfc_privateUse6	= 15
} e_StationTypeEfc;

/* StationTypeEfc */
typedef long	 StationTypeEfc_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_StationTypeEfc_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_StationTypeEfc;
extern const asn_INTEGER_specifics_t asn_SPC_StationTypeEfc_specs_1;
asn_struct_free_f StationTypeEfc_free;
asn_struct_print_f StationTypeEfc_print;
asn_constr_check_f StationTypeEfc_constraint;
ber_type_decoder_f StationTypeEfc_decode_ber;
der_type_encoder_f StationTypeEfc_encode_der;
xer_type_decoder_f StationTypeEfc_decode_xer;
xer_type_encoder_f StationTypeEfc_encode_xer;
oer_type_decoder_f StationTypeEfc_decode_oer;
oer_type_encoder_f StationTypeEfc_encode_oer;
per_type_decoder_f StationTypeEfc_decode_uper;
per_type_encoder_f StationTypeEfc_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _StationTypeEfc_H_ */
#include "asn_internal.h"
