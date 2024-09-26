/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2BaseTypes"
 * 	found in "Ieee1609Dot2BaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -D output_v2_1_1/`
 */

#ifndef	_ServiceSpecificPermissions_H_
#define	_ServiceSpecificPermissions_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "BitmapSsp.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ServiceSpecificPermissions_PR {
	ServiceSpecificPermissions_PR_NOTHING,	/* No components present */
	ServiceSpecificPermissions_PR_opaque,
	/* Extensions may appear below */
	ServiceSpecificPermissions_PR_bitmapSsp
} ServiceSpecificPermissions_PR;

/* ServiceSpecificPermissions */
typedef struct ServiceSpecificPermissions {
	ServiceSpecificPermissions_PR present;
	union ServiceSpecificPermissions_u {
		OCTET_STRING_t	 opaque;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		BitmapSsp_t	 bitmapSsp;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServiceSpecificPermissions_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServiceSpecificPermissions;
extern asn_CHOICE_specifics_t asn_SPC_ServiceSpecificPermissions_specs_1;
extern asn_TYPE_member_t asn_MBR_ServiceSpecificPermissions_1[2];
extern asn_per_constraints_t asn_PER_type_ServiceSpecificPermissions_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ServiceSpecificPermissions_H_ */
#include "asn_internal.h"
