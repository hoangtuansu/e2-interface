/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm-kpmv2.0.asn"
 * 	`asn1c -fcompound-names -D asn_mouse/`
 */

#ifndef	_UEID_NG_ENB_DU_H_
#define	_UEID_NG_ENB_DU_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGENB-CU-UE-W1AP-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UEID-NG-ENB-DU */
typedef struct UEID_NG_ENB_DU {
	NGENB_CU_UE_W1AP_ID_t	 ng_eNB_CU_UE_W1AP_ID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEID_NG_ENB_DU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEID_NG_ENB_DU;
extern asn_SEQUENCE_specifics_t asn_SPC_UEID_NG_ENB_DU_specs_1;
extern asn_TYPE_member_t asn_MBR_UEID_NG_ENB_DU_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _UEID_NG_ENB_DU_H_ */
#include <asn_internal.h>
