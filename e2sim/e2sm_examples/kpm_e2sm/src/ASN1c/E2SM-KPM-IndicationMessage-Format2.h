/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm-kpmv2.0.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D ./asn_mouse`
 */

#ifndef	_E2SM_KPM_IndicationMessage_Format2_H_
#define	_E2SM_KPM_IndicationMessage_Format2_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MeasurementData.h"
#include "MeasurementCondUEidList.h"
#include "GranularityPeriod.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* E2SM-KPM-IndicationMessage-Format2 */
typedef struct E2SM_KPM_IndicationMessage_Format2 {
	MeasurementData_t	 measData;
	MeasurementCondUEidList_t	 measCondUEidList;
	GranularityPeriod_t	*granulPeriod;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_KPM_IndicationMessage_Format2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_IndicationMessage_Format2;
extern asn_SEQUENCE_specifics_t asn_SPC_E2SM_KPM_IndicationMessage_Format2_specs_1;
extern asn_TYPE_member_t asn_MBR_E2SM_KPM_IndicationMessage_Format2_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_KPM_IndicationMessage_Format2_H_ */
#include "asn_internal.h"
