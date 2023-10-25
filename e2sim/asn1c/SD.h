/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "./asn/v03/e2sm-v03.01.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_SD_H_
#define	_SD_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SD */
typedef OCTET_STRING_t	 SD_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SD_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SD;
asn_struct_free_f SD_free;
asn_struct_print_f SD_print;
asn_constr_check_f SD_constraint;
ber_type_decoder_f SD_decode_ber;
der_type_encoder_f SD_encode_der;
xer_type_decoder_f SD_decode_xer;
xer_type_encoder_f SD_encode_xer;
jer_type_encoder_f SD_encode_jer;
oer_type_decoder_f SD_decode_oer;
oer_type_encoder_f SD_encode_oer;
per_type_decoder_f SD_decode_uper;
per_type_encoder_f SD_encode_uper;
per_type_decoder_f SD_decode_aper;
per_type_encoder_f SD_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SD_H_ */
#include "asn_internal.h"
