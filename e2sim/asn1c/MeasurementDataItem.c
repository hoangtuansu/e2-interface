/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "./asn/v03/e2sm-kpm-v03.00.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#include "MeasurementDataItem.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_incompleteFlag_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_incompleteFlag_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_incompleteFlag_value2enum_3[] = {
	{ 0,	4,	"true" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_incompleteFlag_enum2value_3[] = {
	0	/* true(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_incompleteFlag_specs_3 = {
	asn_MAP_incompleteFlag_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_incompleteFlag_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_incompleteFlag_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_incompleteFlag_3 = {
	"incompleteFlag",
	"incompleteFlag",
	&asn_OP_NativeEnumerated,
	asn_DEF_incompleteFlag_tags_3,
	sizeof(asn_DEF_incompleteFlag_tags_3)
		/sizeof(asn_DEF_incompleteFlag_tags_3[0]) - 1, /* 1 */
	asn_DEF_incompleteFlag_tags_3,	/* Same as above */
	sizeof(asn_DEF_incompleteFlag_tags_3)
		/sizeof(asn_DEF_incompleteFlag_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_incompleteFlag_constr_3,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_incompleteFlag_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_incompleteFlag_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasurementDataItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementDataItem, measRecord),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementRecord,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"measRecord"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasurementDataItem, incompleteFlag),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_incompleteFlag_3,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"incompleteFlag"
		},
};
static const int asn_MAP_MeasurementDataItem_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_MeasurementDataItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasurementDataItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measRecord */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* incompleteFlag */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasurementDataItem_specs_1 = {
	sizeof(struct MeasurementDataItem),
	offsetof(struct MeasurementDataItem, _asn_ctx),
	asn_MAP_MeasurementDataItem_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MeasurementDataItem_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasurementDataItem = {
	"MeasurementDataItem",
	"MeasurementDataItem",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasurementDataItem_tags_1,
	sizeof(asn_DEF_MeasurementDataItem_tags_1)
		/sizeof(asn_DEF_MeasurementDataItem_tags_1[0]), /* 1 */
	asn_DEF_MeasurementDataItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasurementDataItem_tags_1)
		/sizeof(asn_DEF_MeasurementDataItem_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_MeasurementDataItem_1,
	2,	/* Elements count */
	&asn_SPC_MeasurementDataItem_specs_1	/* Additional specs */
};

