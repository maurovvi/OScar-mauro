/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "/mnt/EVO/ASN1-C-ITS/CAM-PDU-Descriptions-1.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "RescueContainerV1.h"

asn_TYPE_member_t asn_MBR_RescueContainerV1_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RescueContainerV1, lightBarSirenInUse),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LightBarSirenInUseV1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lightBarSirenInUse"
		},
};
static const ber_tlv_tag_t asn_DEF_RescueContainerV1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RescueContainerV1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* lightBarSirenInUse */
};
asn_SEQUENCE_specifics_t asn_SPC_RescueContainerV1_specs_1 = {
	sizeof(struct RescueContainerV1),
	offsetof(struct RescueContainerV1, _asn_ctx),
	asn_MAP_RescueContainerV1_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RescueContainerV1 = {
	"RescueContainerV1",
	"RescueContainerV1",
	&asn_OP_SEQUENCE,
	asn_DEF_RescueContainerV1_tags_1,
	sizeof(asn_DEF_RescueContainerV1_tags_1)
		/sizeof(asn_DEF_RescueContainerV1_tags_1[0]), /* 1 */
	asn_DEF_RescueContainerV1_tags_1,	/* Same as above */
	sizeof(asn_DEF_RescueContainerV1_tags_1)
		/sizeof(asn_DEF_RescueContainerV1_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RescueContainerV1_1,
	1,	/* Elements count */
	&asn_SPC_RescueContainerV1_specs_1	/* Additional specs */
};

