/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-ied-v03.01.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_E2nodeComponentInterfaceE1_H_
#define	_E2nodeComponentInterfaceE1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "E2AP-IEs_GNB-CU-UP-ID.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* E2nodeComponentInterfaceE1 */
typedef struct E2nodeComponentInterfaceE1 {
	E2AP_IEs_GNB_CU_UP_ID_t	 gNB_CU_UP_ID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2nodeComponentInterfaceE1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2nodeComponentInterfaceE1;
extern asn_SEQUENCE_specifics_t asn_SPC_E2nodeComponentInterfaceE1_specs_1;
extern asn_TYPE_member_t asn_MBR_E2nodeComponentInterfaceE1_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _E2nodeComponentInterfaceE1_H_ */
#include "asn_internal.h"
