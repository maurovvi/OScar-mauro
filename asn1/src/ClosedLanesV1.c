/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ITS-Container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#include "ClosedLanesV1.h"

asn_TYPE_member_t asn_MBR_ClosedLanesV1_1[] = {
	{ ATF_POINTER, 1, offsetof(struct ClosedLanesV1, hardShoulderStatus),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HardShoulderStatusV1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hardShoulderStatus"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ClosedLanesV1, drivingLaneStatus),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DrivingLaneStatusV1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drivingLaneStatus"
		},
};
static const int asn_MAP_ClosedLanesV1_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ClosedLanesV1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ClosedLanesV1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hardShoulderStatus */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* drivingLaneStatus */
};
asn_SEQUENCE_specifics_t asn_SPC_ClosedLanesV1_specs_1 = {
	sizeof(struct ClosedLanesV1),
	offsetof(struct ClosedLanesV1, _asn_ctx),
	asn_MAP_ClosedLanesV1_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_ClosedLanesV1_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ClosedLanesV1 = {
	"ClosedLanesV1",
	"ClosedLanesV1",
	&asn_OP_SEQUENCE,
	asn_DEF_ClosedLanesV1_tags_1,
	sizeof(asn_DEF_ClosedLanesV1_tags_1)
		/sizeof(asn_DEF_ClosedLanesV1_tags_1[0]), /* 1 */
	asn_DEF_ClosedLanesV1_tags_1,	/* Same as above */
	sizeof(asn_DEF_ClosedLanesV1_tags_1)
		/sizeof(asn_DEF_ClosedLanesV1_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ClosedLanesV1_1,
	2,	/* Elements count */
	&asn_SPC_ClosedLanesV1_specs_1	/* Additional specs */
};
