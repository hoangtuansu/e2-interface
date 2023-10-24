/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm-kpm-v03.00.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_MeasurementCondUEidList_H_
#define	_MeasurementCondUEidList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasurementCondUEidItem;

/* MeasurementCondUEidList */
typedef struct MeasurementCondUEidList {
	A_SEQUENCE_OF(struct MeasurementCondUEidItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementCondUEidList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementCondUEidList;
extern asn_SET_OF_specifics_t asn_SPC_MeasurementCondUEidList_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementCondUEidList_1[1];
extern asn_per_constraints_t asn_PER_type_MeasurementCondUEidList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementCondUEidList_H_ */
#include "asn_internal.h"
