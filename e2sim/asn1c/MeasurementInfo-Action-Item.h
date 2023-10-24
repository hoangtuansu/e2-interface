/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm-kpm-v03.00.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D ../../`
 */

#ifndef	_MeasurementInfo_Action_Item_H_
#define	_MeasurementInfo_Action_Item_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MeasurementTypeName.h"
#include "MeasurementTypeID.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BinRangeDefinition;

/* MeasurementInfo-Action-Item */
typedef struct MeasurementInfo_Action_Item {
	MeasurementTypeName_t	 measName;
	MeasurementTypeID_t	*measID;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct BinRangeDefinition	*binRangeDef;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementInfo_Action_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementInfo_Action_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasurementInfo_Action_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementInfo_Action_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementInfo_Action_Item_H_ */
#include "asn_internal.h"
