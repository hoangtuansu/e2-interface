/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm-kpm-v03.00.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#include "E2SM-KPM-IndicationMessage-Format1.h"

#include "MeasurementInfoList.h"
asn_TYPE_member_t asn_MBR_E2SM_KPM_IndicationMessage_Format1_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_IndicationMessage_Format1, measData),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementData,
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
		"measData"
		},
	{ ATF_POINTER, 2, offsetof(struct E2SM_KPM_IndicationMessage_Format1, measInfoList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementInfoList,
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
		"measInfoList"
		},
	{ ATF_POINTER, 1, offsetof(struct E2SM_KPM_IndicationMessage_Format1, granulPeriod),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GranularityPeriod,
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
		"granulPeriod"
		},
};
static const int asn_MAP_E2SM_KPM_IndicationMessage_Format1_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_E2SM_KPM_IndicationMessage_Format1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_KPM_IndicationMessage_Format1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measData */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measInfoList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* granulPeriod */
};
asn_SEQUENCE_specifics_t asn_SPC_E2SM_KPM_IndicationMessage_Format1_specs_1 = {
	sizeof(struct E2SM_KPM_IndicationMessage_Format1),
	offsetof(struct E2SM_KPM_IndicationMessage_Format1, _asn_ctx),
	asn_MAP_E2SM_KPM_IndicationMessage_Format1_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_E2SM_KPM_IndicationMessage_Format1_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_IndicationMessage_Format1 = {
	"E2SM-KPM-IndicationMessage-Format1",
	"E2SM-KPM-IndicationMessage-Format1",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_KPM_IndicationMessage_Format1_tags_1,
	sizeof(asn_DEF_E2SM_KPM_IndicationMessage_Format1_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_IndicationMessage_Format1_tags_1[0]), /* 1 */
	asn_DEF_E2SM_KPM_IndicationMessage_Format1_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_KPM_IndicationMessage_Format1_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_IndicationMessage_Format1_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E2SM_KPM_IndicationMessage_Format1_1,
	3,	/* Elements count */
	&asn_SPC_E2SM_KPM_IndicationMessage_Format1_specs_1	/* Additional specs */
};

