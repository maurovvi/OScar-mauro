/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2BaseTypes"
 * 	found in "Ieee1609Dot2BaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -D output_v2_1_1/`
 */

#include "TwoDLocation.h"

asn_TYPE_member_t asn_MBR_TwoDLocation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TwoDLocation, latitude),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Latitude,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"latitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TwoDLocation, longitude),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Longitude,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"longitude"
		},
};
static const ber_tlv_tag_t asn_DEF_TwoDLocation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TwoDLocation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* latitude */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* longitude */
};
asn_SEQUENCE_specifics_t asn_SPC_TwoDLocation_specs_1 = {
	sizeof(struct TwoDLocation),
	offsetof(struct TwoDLocation, _asn_ctx),
	asn_MAP_TwoDLocation_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TwoDLocation = {
	"TwoDLocation",
	"TwoDLocation",
	&asn_OP_SEQUENCE,
	asn_DEF_TwoDLocation_tags_1,
	sizeof(asn_DEF_TwoDLocation_tags_1)
		/sizeof(asn_DEF_TwoDLocation_tags_1[0]), /* 1 */
	asn_DEF_TwoDLocation_tags_1,	/* Same as above */
	sizeof(asn_DEF_TwoDLocation_tags_1)
		/sizeof(asn_DEF_TwoDLocation_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_TwoDLocation_1,
	2,	/* Elements count */
	&asn_SPC_TwoDLocation_specs_1	/* Additional specs */
};

