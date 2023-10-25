/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "./asn/v03/e2ap-ied-v03.01.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_RICcontrolMessage_H_
#define	_RICcontrolMessage_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RICcontrolMessage */
typedef OCTET_STRING_t	 RICcontrolMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RICcontrolMessage;
asn_struct_free_f RICcontrolMessage_free;
asn_struct_print_f RICcontrolMessage_print;
asn_constr_check_f RICcontrolMessage_constraint;
ber_type_decoder_f RICcontrolMessage_decode_ber;
der_type_encoder_f RICcontrolMessage_encode_der;
xer_type_decoder_f RICcontrolMessage_decode_xer;
xer_type_encoder_f RICcontrolMessage_encode_xer;
jer_type_encoder_f RICcontrolMessage_encode_jer;
oer_type_decoder_f RICcontrolMessage_decode_oer;
oer_type_encoder_f RICcontrolMessage_encode_oer;
per_type_decoder_f RICcontrolMessage_decode_uper;
per_type_encoder_f RICcontrolMessage_encode_uper;
per_type_decoder_f RICcontrolMessage_decode_aper;
per_type_encoder_f RICcontrolMessage_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RICcontrolMessage_H_ */
#include "asn_internal.h"
