/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm-v03.01.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_E2SM_COMMON_IEs_GlobalENB_ID_H_
#define	_E2SM_COMMON_IEs_GlobalENB_ID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PLMNIdentity.h"
#include "E2SM-COMMON-IEs_ENB-ID.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* E2SM-COMMON-IEs_GlobalENB-ID */
typedef struct E2SM_COMMON_IEs_GlobalENB_ID {
	PLMNIdentity_t	 pLMNIdentity;
	E2SM_COMMON_IEs_ENB_ID_t	 eNB_ID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_COMMON_IEs_GlobalENB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_COMMON_IEs_GlobalENB_ID;
extern asn_SEQUENCE_specifics_t asn_SPC_E2SM_COMMON_IEs_GlobalENB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_E2SM_COMMON_IEs_GlobalENB_ID_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_COMMON_IEs_GlobalENB_ID_H_ */
#include "asn_internal.h"
