/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/mnt/EVO/ASN1-C-ITS/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_PtActivationV1_H_
#define	_PtActivationV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PtActivationTypeV1.h"
#include "PtActivationDataV1.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PtActivationV1 */
typedef struct PtActivationV1 {
	PtActivationTypeV1_t	 ptActivationType;
	PtActivationDataV1_t	 ptActivationData;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PtActivationV1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PtActivationV1;
extern asn_SEQUENCE_specifics_t asn_SPC_PtActivationV1_specs_1;
extern asn_TYPE_member_t asn_MBR_PtActivationV1_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PtActivationV1_H_ */
#include "asn_internal.h"
