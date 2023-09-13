/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm-kpmv2.0.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-example -D ./asn`
 */

#ifndef	_InterfaceID_NG_H_
#define	_InterfaceID_NG_H_


#include "asn_application.h"

/* Including external dependencies */
#include "GUAMI.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* InterfaceID-NG */
typedef struct InterfaceID_NG {
	GUAMI_t	 guami;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterfaceID_NG_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterfaceID_NG;
extern asn_SEQUENCE_specifics_t asn_SPC_InterfaceID_NG_specs_1;
extern asn_TYPE_member_t asn_MBR_InterfaceID_NG_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _InterfaceID_NG_H_ */
#include "asn_internal.h"
