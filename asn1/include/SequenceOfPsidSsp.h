/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2BaseTypes"
 * 	found in "Ieee1609Dot2BaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -D output_v2_1_1/`
 */

#ifndef	_SequenceOfPsidSsp_H_
#define	_SequenceOfPsidSsp_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PsidSsp;

/* SequenceOfPsidSsp */
typedef struct SequenceOfPsidSsp {
	A_SEQUENCE_OF(struct PsidSsp) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SequenceOfPsidSsp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SequenceOfPsidSsp;
extern asn_SET_OF_specifics_t asn_SPC_SequenceOfPsidSsp_specs_1;
extern asn_TYPE_member_t asn_MBR_SequenceOfPsidSsp_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PsidSsp.h"

#endif	/* _SequenceOfPsidSsp_H_ */
#include "asn_internal.h"
