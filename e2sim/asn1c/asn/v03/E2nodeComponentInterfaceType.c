/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-ied-v03.01.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#include "E2nodeComponentInterfaceType.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_E2nodeComponentInterfaceType_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_E2nodeComponentInterfaceType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  6 }	/* (0..6,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_E2nodeComponentInterfaceType_value2enum_1[] = {
	{ 0,	2,	"ng" },
	{ 1,	2,	"xn" },
	{ 2,	2,	"e1" },
	{ 3,	2,	"f1" },
	{ 4,	2,	"w1" },
	{ 5,	2,	"s1" },
	{ 6,	2,	"x2" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_E2nodeComponentInterfaceType_enum2value_1[] = {
	2,	/* e1(2) */
	3,	/* f1(3) */
	0,	/* ng(0) */
	5,	/* s1(5) */
	4,	/* w1(4) */
	6,	/* x2(6) */
	1	/* xn(1) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_E2nodeComponentInterfaceType_specs_1 = {
	asn_MAP_E2nodeComponentInterfaceType_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_E2nodeComponentInterfaceType_enum2value_1,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	8,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_E2nodeComponentInterfaceType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_E2nodeComponentInterfaceType = {
	"E2nodeComponentInterfaceType",
	"E2nodeComponentInterfaceType",
	&asn_OP_NativeEnumerated,
	asn_DEF_E2nodeComponentInterfaceType_tags_1,
	sizeof(asn_DEF_E2nodeComponentInterfaceType_tags_1)
		/sizeof(asn_DEF_E2nodeComponentInterfaceType_tags_1[0]), /* 1 */
	asn_DEF_E2nodeComponentInterfaceType_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2nodeComponentInterfaceType_tags_1)
		/sizeof(asn_DEF_E2nodeComponentInterfaceType_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_E2nodeComponentInterfaceType_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_E2nodeComponentInterfaceType_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_E2nodeComponentInterfaceType_specs_1	/* Additional specs */
};

