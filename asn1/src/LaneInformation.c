/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "/mnt/EVO/ASN1-C-ITS/IVI-payload.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "LaneInformation.h"

asn_TYPE_member_t asn_MBR_LaneInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LaneInformation, laneNumber),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LanePosition,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"laneNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneInformation, direction),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Direction,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"direction"
		},
	{ ATF_POINTER, 1, offsetof(struct LaneInformation, validity),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InternationalSign_applicablePeriod,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"validity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneInformation, laneType),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"laneType"
		},
	{ ATF_POINTER, 1, offsetof(struct LaneInformation, laneTypeQualifier),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CompleteVehicleCharacteristics,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"laneTypeQualifier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneInformation, laneStatus),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneStatus,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"laneStatus"
		},
	{ ATF_POINTER, 6, offsetof(struct LaneInformation, laneWidth),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IviLaneWidth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"laneWidth"
		},
	{ ATF_POINTER, 5, offsetof(struct LaneInformation, detectionZoneIds),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ZoneIds,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"detectionZoneIds"
		},
	{ ATF_POINTER, 4, offsetof(struct LaneInformation, relevanceZoneIds),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ZoneIds,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"relevanceZoneIds"
		},
	{ ATF_POINTER, 3, offsetof(struct LaneInformation, laneCharacteristics),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneCharacteristics,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"laneCharacteristics"
		},
	{ ATF_POINTER, 2, offsetof(struct LaneInformation, laneSurfaceStaticCharacteristics),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RoadSurfaceStaticCharacteristics,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"laneSurfaceStaticCharacteristics"
		},
	{ ATF_POINTER, 1, offsetof(struct LaneInformation, laneSurfaceDynamicCharacteristics),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RoadSurfaceDynamicCharacteristics,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"laneSurfaceDynamicCharacteristics"
		},
};
static const int asn_MAP_LaneInformation_oms_1[] = { 2, 4, 6, 7, 8, 9, 10, 11 };
static const ber_tlv_tag_t asn_DEF_LaneInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LaneInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* laneNumber */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* direction */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* validity */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* laneType */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* laneTypeQualifier */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* laneStatus */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* laneWidth */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* detectionZoneIds */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* relevanceZoneIds */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* laneCharacteristics */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* laneSurfaceStaticCharacteristics */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* laneSurfaceDynamicCharacteristics */
};
asn_SEQUENCE_specifics_t asn_SPC_LaneInformation_specs_1 = {
	sizeof(struct LaneInformation),
	offsetof(struct LaneInformation, _asn_ctx),
	asn_MAP_LaneInformation_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_LaneInformation_oms_1,	/* Optional members */
	3, 5,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LaneInformation = {
	"LaneInformation",
	"LaneInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_LaneInformation_tags_1,
	sizeof(asn_DEF_LaneInformation_tags_1)
		/sizeof(asn_DEF_LaneInformation_tags_1[0]), /* 1 */
	asn_DEF_LaneInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_LaneInformation_tags_1)
		/sizeof(asn_DEF_LaneInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LaneInformation_1,
	12,	/* Elements count */
	&asn_SPC_LaneInformation_specs_1	/* Additional specs */
};

