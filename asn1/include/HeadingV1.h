/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/mnt/EVO/ASN1-C-ITS/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_HeadingV1_H_
#define	_HeadingV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "HeadingValueV1.h"
#include "HeadingConfidenceV1.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* HeadingV1 */
typedef struct HeadingV1 {
	HeadingValueV1_t	 headingValue;
	HeadingConfidenceV1_t	 headingConfidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HeadingV1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HeadingV1;
extern asn_SEQUENCE_specifics_t asn_SPC_HeadingV1_specs_1;
extern asn_TYPE_member_t asn_MBR_HeadingV1_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _HeadingV1_H_ */
#include "asn_internal.h"
