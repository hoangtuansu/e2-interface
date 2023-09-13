/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm-kpmv2.0.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-example -D ./asn`
 */

#ifndef	_NRFrequencyBandItem_H_
#define	_NRFrequencyBandItem_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "SupportedSULBandList.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* NRFrequencyBandItem */
typedef struct NRFrequencyBandItem {
	long	 freqBandIndicatorNr;
	SupportedSULBandList_t	 supportedSULBandList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NRFrequencyBandItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NRFrequencyBandItem;
extern asn_SEQUENCE_specifics_t asn_SPC_NRFrequencyBandItem_specs_1;
extern asn_TYPE_member_t asn_MBR_NRFrequencyBandItem_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NRFrequencyBandItem_H_ */
#include "asn_internal.h"
