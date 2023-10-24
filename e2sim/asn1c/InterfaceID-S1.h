/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm-v03.01.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D ../../`
 */

#ifndef	_InterfaceID_S1_H_
#define	_InterfaceID_S1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "GUMMEI.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* InterfaceID-S1 */
typedef struct InterfaceID_S1 {
	GUMMEI_t	 gUMMEI;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterfaceID_S1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterfaceID_S1;
extern asn_SEQUENCE_specifics_t asn_SPC_InterfaceID_S1_specs_1;
extern asn_TYPE_member_t asn_MBR_InterfaceID_S1_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _InterfaceID_S1_H_ */
#include "asn_internal.h"
