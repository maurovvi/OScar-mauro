/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "/mnt/EVO/ASN1-stuff/ASN1-C-ITS/CPMv1.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "ShadowingAppliesV1.h"

/*
 * This type is implemented using BOOLEAN,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_ShadowingAppliesV1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (1 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ShadowingAppliesV1 = {
	"ShadowingAppliesV1",
	"ShadowingAppliesV1",
	&asn_OP_BOOLEAN,
	asn_DEF_ShadowingAppliesV1_tags_1,
	sizeof(asn_DEF_ShadowingAppliesV1_tags_1)
		/sizeof(asn_DEF_ShadowingAppliesV1_tags_1[0]), /* 1 */
	asn_DEF_ShadowingAppliesV1_tags_1,	/* Same as above */
	sizeof(asn_DEF_ShadowingAppliesV1_tags_1)
		/sizeof(asn_DEF_ShadowingAppliesV1_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		BOOLEAN_constraint
	},
	0, 0,	/* No members */
	0	/* No specifics */
};

