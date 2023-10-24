/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "./asn/v03/e2sm-kpm-v03.00.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#include "MatchingUeCondPerSubList.h"

#include "MatchingUeCondPerSubItem.h"
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_MatchingUeCondPerSubList_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..32768)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_MatchingUeCondPerSubList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 15,  15,  1,  32768 }	/* (SIZE(1..32768)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_MatchingUeCondPerSubList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_MatchingUeCondPerSubItem,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_MatchingUeCondPerSubList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_MatchingUeCondPerSubList_specs_1 = {
	sizeof(struct MatchingUeCondPerSubList),
	offsetof(struct MatchingUeCondPerSubList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_MatchingUeCondPerSubList = {
	"MatchingUeCondPerSubList",
	"MatchingUeCondPerSubList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_MatchingUeCondPerSubList_tags_1,
	sizeof(asn_DEF_MatchingUeCondPerSubList_tags_1)
		/sizeof(asn_DEF_MatchingUeCondPerSubList_tags_1[0]), /* 1 */
	asn_DEF_MatchingUeCondPerSubList_tags_1,	/* Same as above */
	sizeof(asn_DEF_MatchingUeCondPerSubList_tags_1)
		/sizeof(asn_DEF_MatchingUeCondPerSubList_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_MatchingUeCondPerSubList_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_MatchingUeCondPerSubList_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_MatchingUeCondPerSubList_1,
	1,	/* Single element */
	&asn_SPC_MatchingUeCondPerSubList_specs_1	/* Additional specs */
};

