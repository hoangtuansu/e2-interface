/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "./asn/v03/e2sm-kpm-v03.00.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_UEMeasurementReportItem_H_
#define	_UEMeasurementReportItem_H_


#include "asn_application.h"

/* Including external dependencies */
#include "UEID.h"
#include "E2SM-KPM-IndicationMessage-Format1.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* UEMeasurementReportItem */
typedef struct UEMeasurementReportItem {
	UEID_t	 ueID;
	E2SM_KPM_IndicationMessage_Format1_t	 measReport;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEMeasurementReportItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEMeasurementReportItem;
extern asn_SEQUENCE_specifics_t asn_SPC_UEMeasurementReportItem_specs_1;
extern asn_TYPE_member_t asn_MBR_UEMeasurementReportItem_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UEMeasurementReportItem_H_ */
#include "asn_internal.h"
