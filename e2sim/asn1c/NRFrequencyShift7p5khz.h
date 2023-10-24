/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "./asn/v03/e2sm-v03.01.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_NRFrequencyShift7p5khz_H_
#define	_NRFrequencyShift7p5khz_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NRFrequencyShift7p5khz {
	NRFrequencyShift7p5khz_false	= 0,
	NRFrequencyShift7p5khz_true	= 1
	/*
	 * Enumeration is extensible
	 */
} e_NRFrequencyShift7p5khz;

/* NRFrequencyShift7p5khz */
typedef long	 NRFrequencyShift7p5khz_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NRFrequencyShift7p5khz_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NRFrequencyShift7p5khz;
extern const asn_INTEGER_specifics_t asn_SPC_NRFrequencyShift7p5khz_specs_1;
asn_struct_free_f NRFrequencyShift7p5khz_free;
asn_struct_print_f NRFrequencyShift7p5khz_print;
asn_constr_check_f NRFrequencyShift7p5khz_constraint;
ber_type_decoder_f NRFrequencyShift7p5khz_decode_ber;
der_type_encoder_f NRFrequencyShift7p5khz_encode_der;
xer_type_decoder_f NRFrequencyShift7p5khz_decode_xer;
xer_type_encoder_f NRFrequencyShift7p5khz_encode_xer;
jer_type_encoder_f NRFrequencyShift7p5khz_encode_jer;
oer_type_decoder_f NRFrequencyShift7p5khz_decode_oer;
oer_type_encoder_f NRFrequencyShift7p5khz_encode_oer;
per_type_decoder_f NRFrequencyShift7p5khz_decode_uper;
per_type_encoder_f NRFrequencyShift7p5khz_encode_uper;
per_type_decoder_f NRFrequencyShift7p5khz_decode_aper;
per_type_encoder_f NRFrequencyShift7p5khz_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NRFrequencyShift7p5khz_H_ */
#include "asn_internal.h"
