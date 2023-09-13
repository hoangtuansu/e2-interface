/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm-kpmv2.0.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-example -D ./asn`
 */

#ifndef	_EUTRACellIdentity_H_
#define	_EUTRACellIdentity_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EUTRACellIdentity */
typedef BIT_STRING_t	 EUTRACellIdentity_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_EUTRACellIdentity_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_EUTRACellIdentity;
asn_struct_free_f EUTRACellIdentity_free;
asn_struct_print_f EUTRACellIdentity_print;
asn_constr_check_f EUTRACellIdentity_constraint;
ber_type_decoder_f EUTRACellIdentity_decode_ber;
der_type_encoder_f EUTRACellIdentity_encode_der;
xer_type_decoder_f EUTRACellIdentity_decode_xer;
xer_type_encoder_f EUTRACellIdentity_encode_xer;
oer_type_decoder_f EUTRACellIdentity_decode_oer;
oer_type_encoder_f EUTRACellIdentity_encode_oer;
per_type_decoder_f EUTRACellIdentity_decode_uper;
per_type_encoder_f EUTRACellIdentity_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRACellIdentity_H_ */
#include "asn_internal.h"
