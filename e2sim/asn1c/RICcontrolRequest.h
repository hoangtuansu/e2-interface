/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "./asn/v03/e2ap-pdu-v03.01.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_RICcontrolRequest_H_
#define	_RICcontrolRequest_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RICcontrolRequest */
typedef struct RICcontrolRequest {
	ProtocolIE_Container_85P14_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICcontrolRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RICcontrolRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_RICcontrolRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_RICcontrolRequest_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RICcontrolRequest_H_ */
#include "asn_internal.h"
