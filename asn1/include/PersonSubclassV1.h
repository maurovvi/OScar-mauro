/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "/mnt/EVO/ASN1-stuff/ASN1-C-ITS/CPMv1.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_PersonSubclassV1_H_
#define	_PersonSubclassV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PersonSubclassTypeV1.h"
#include "ClassConfidenceV1.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PersonSubclassV1 */
typedef struct PersonSubclassV1 {
	PersonSubclassTypeV1_t	 type;	/* DEFAULT 0 */
	ClassConfidenceV1_t	 confidence;	/* DEFAULT 0 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PersonSubclassV1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PersonSubclassV1;
extern asn_SEQUENCE_specifics_t asn_SPC_PersonSubclassV1_specs_1;
extern asn_TYPE_member_t asn_MBR_PersonSubclassV1_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PersonSubclassV1_H_ */
#include "asn_internal.h"
