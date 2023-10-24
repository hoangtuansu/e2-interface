/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-ied-v03.01.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_RICsubscriptionTime_H_
#define	_RICsubscriptionTime_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RICsubscriptionTime */
typedef OCTET_STRING_t	 RICsubscriptionTime_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RICsubscriptionTime_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RICsubscriptionTime;
asn_struct_free_f RICsubscriptionTime_free;
asn_struct_print_f RICsubscriptionTime_print;
asn_constr_check_f RICsubscriptionTime_constraint;
ber_type_decoder_f RICsubscriptionTime_decode_ber;
der_type_encoder_f RICsubscriptionTime_encode_der;
xer_type_decoder_f RICsubscriptionTime_decode_xer;
xer_type_encoder_f RICsubscriptionTime_encode_xer;
jer_type_encoder_f RICsubscriptionTime_encode_jer;
oer_type_decoder_f RICsubscriptionTime_decode_oer;
oer_type_encoder_f RICsubscriptionTime_encode_oer;
per_type_decoder_f RICsubscriptionTime_decode_uper;
per_type_encoder_f RICsubscriptionTime_encode_uper;
per_type_decoder_f RICsubscriptionTime_decode_aper;
per_type_encoder_f RICsubscriptionTime_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RICsubscriptionTime_H_ */
#include "asn_internal.h"
