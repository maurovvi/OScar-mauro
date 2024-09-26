/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2"
 * 	found in "Ieee1609Dot2.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -D output_v2_1_1/`
 */

#ifndef	_SubjectPermissions_H_
#define	_SubjectPermissions_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SequenceOfPsidSspRange.h"
#include "NULL.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SubjectPermissions_PR {
	SubjectPermissions_PR_NOTHING,	/* No components present */
	SubjectPermissions_PR_explicit,
	SubjectPermissions_PR_all
	/* Extensions may appear below */
	
} SubjectPermissions_PR;

/* SubjectPermissions */
typedef struct SubjectPermissions {
	SubjectPermissions_PR present;
	union SubjectPermissions_u {
		SequenceOfPsidSspRange_t	 Explicit;
		NULL_t	 all;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SubjectPermissions_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SubjectPermissions;
extern asn_CHOICE_specifics_t asn_SPC_SubjectPermissions_specs_1;
extern asn_TYPE_member_t asn_MBR_SubjectPermissions_1[2];
extern asn_per_constraints_t asn_PER_type_SubjectPermissions_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SubjectPermissions_H_ */
#include "asn_internal.h"
