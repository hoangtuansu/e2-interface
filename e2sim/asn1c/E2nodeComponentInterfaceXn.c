/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-ied-v03.01.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D ../../`
 */

#include "E2nodeComponentInterfaceXn.h"

asn_TYPE_member_t asn_MBR_E2nodeComponentInterfaceXn_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2nodeComponentInterfaceXn, global_NG_RAN_Node_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GlobalNG_RANNode_ID,
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
		"global-NG-RAN-Node-ID"
		},
};
static const ber_tlv_tag_t asn_DEF_E2nodeComponentInterfaceXn_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2nodeComponentInterfaceXn_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* global-NG-RAN-Node-ID */
};
asn_SEQUENCE_specifics_t asn_SPC_E2nodeComponentInterfaceXn_specs_1 = {
	sizeof(struct E2nodeComponentInterfaceXn),
	offsetof(struct E2nodeComponentInterfaceXn, _asn_ctx),
	asn_MAP_E2nodeComponentInterfaceXn_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2nodeComponentInterfaceXn = {
	"E2nodeComponentInterfaceXn",
	"E2nodeComponentInterfaceXn",
	&asn_OP_SEQUENCE,
	asn_DEF_E2nodeComponentInterfaceXn_tags_1,
	sizeof(asn_DEF_E2nodeComponentInterfaceXn_tags_1)
		/sizeof(asn_DEF_E2nodeComponentInterfaceXn_tags_1[0]), /* 1 */
	asn_DEF_E2nodeComponentInterfaceXn_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2nodeComponentInterfaceXn_tags_1)
		/sizeof(asn_DEF_E2nodeComponentInterfaceXn_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E2nodeComponentInterfaceXn_1,
	1,	/* Elements count */
	&asn_SPC_E2nodeComponentInterfaceXn_specs_1	/* Additional specs */
};

