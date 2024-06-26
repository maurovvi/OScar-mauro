/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "/mnt/EVO/ASN1-stuff/ASN1-C-ITS/CPMv1.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_CPMV1_H_
#define	_CPMV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ItsPduHeader.h"
#include "CollectivePerceptionMessageV1.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CPMV1 */
typedef struct CPMV1 {
	ItsPduHeader_t	 header;
	CollectivePerceptionMessageV1_t	 cpm;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CPMV1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CPMV1;

#ifdef __cplusplus
}
#endif

#endif	/* _CPMV1_H_ */
#include "asn_internal.h"
