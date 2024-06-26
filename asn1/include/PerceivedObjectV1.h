/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "/mnt/EVO/ASN1-stuff/ASN1-C-ITS/CPMv1.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_PerceivedObjectV1_H_
#define	_PerceivedObjectV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "IdentifierV1.h"
#include "TimeOfMeasurementV1.h"
#include "ObjectAgeV1.h"
#include "ObjectConfidenceV1.h"
#include "ObjectDistanceWithConfidenceV1.h"
#include "SpeedExtendedV1.h"
#include "ObjectRefPointV1.h"
#include "DynamicStatusV1.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SensorIdListV1;
struct ObjectDistanceWithConfidenceV1;
struct SpeedExtendedV1;
struct LongitudinalAcceleration;
struct LateralAcceleration;
struct VerticalAcceleration;
struct CartesianAngleV1;
struct ObjectDimensionV1;
struct ObjectClassDescriptionV1;
struct MatchedPositionV1;

/* PerceivedObjectV1 */
typedef struct PerceivedObjectV1 {
	IdentifierV1_t	 objectID;
	struct SensorIdListV1	*sensorIDList;	/* OPTIONAL */
	TimeOfMeasurementV1_t	 timeOfMeasurement;
	ObjectAgeV1_t	*objectAge;	/* OPTIONAL */
	ObjectConfidenceV1_t	 objectConfidence;	/* DEFAULT 0 */
	ObjectDistanceWithConfidenceV1_t	 xDistance;
	ObjectDistanceWithConfidenceV1_t	 yDistance;
	struct ObjectDistanceWithConfidenceV1	*zDistance;	/* OPTIONAL */
	SpeedExtendedV1_t	 xSpeed;
	SpeedExtendedV1_t	 ySpeed;
	struct SpeedExtendedV1	*zSpeed;	/* OPTIONAL */
	struct LongitudinalAcceleration	*xAcceleration;	/* OPTIONAL */
	struct LateralAcceleration	*yAcceleration;	/* OPTIONAL */
	struct VerticalAcceleration	*zAcceleration;	/* OPTIONAL */
	struct CartesianAngleV1	*yawAngle;	/* OPTIONAL */
	struct ObjectDimensionV1	*planarObjectDimension1;	/* OPTIONAL */
	struct ObjectDimensionV1	*planarObjectDimension2;	/* OPTIONAL */
	struct ObjectDimensionV1	*verticalObjectDimension;	/* OPTIONAL */
	ObjectRefPointV1_t	 objectRefPoint;	/* DEFAULT 0 */
	DynamicStatusV1_t	*dynamicStatus;	/* OPTIONAL */
	struct ObjectClassDescriptionV1	*classification;	/* OPTIONAL */
	struct MatchedPositionV1	*matchedPosition;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PerceivedObjectV1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PerceivedObjectV1;
extern asn_SEQUENCE_specifics_t asn_SPC_PerceivedObjectV1_specs_1;
extern asn_TYPE_member_t asn_MBR_PerceivedObjectV1_1[22];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SensorIdListV1.h"
#include "ObjectDistanceWithConfidenceV1.h"
#include "SpeedExtendedV1.h"
#include "LongitudinalAcceleration.h"
#include "LateralAcceleration.h"
#include "VerticalAcceleration.h"
#include "CartesianAngleV1.h"
#include "ObjectDimensionV1.h"
#include "ObjectClassDescriptionV1.h"
#include "MatchedPositionV1.h"

#endif	/* _PerceivedObjectV1_H_ */
#include "asn_internal.h"
