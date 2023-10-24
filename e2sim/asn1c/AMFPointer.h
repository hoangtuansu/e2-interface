/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm-v03.01.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D ../../`
 */

#ifndef	_AMFPointer_H_
#define	_AMFPointer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AMFPointer */
typedef BIT_STRING_t	 AMFPointer_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AMFPointer_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AMFPointer;
asn_struct_free_f AMFPointer_free;
asn_struct_print_f AMFPointer_print;
asn_constr_check_f AMFPointer_constraint;
ber_type_decoder_f AMFPointer_decode_ber;
der_type_encoder_f AMFPointer_encode_der;
xer_type_decoder_f AMFPointer_decode_xer;
xer_type_encoder_f AMFPointer_encode_xer;
jer_type_encoder_f AMFPointer_encode_jer;
oer_type_decoder_f AMFPointer_decode_oer;
oer_type_encoder_f AMFPointer_encode_oer;
per_type_decoder_f AMFPointer_decode_uper;
per_type_encoder_f AMFPointer_encode_uper;
per_type_decoder_f AMFPointer_decode_aper;
per_type_encoder_f AMFPointer_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AMFPointer_H_ */
#include "asn_internal.h"
