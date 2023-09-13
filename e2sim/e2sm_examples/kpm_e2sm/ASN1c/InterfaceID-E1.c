/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm-kpmv2.0.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-example -D ./asn`
 */

#include "InterfaceID-E1.h"

asn_TYPE_member_t asn_MBR_InterfaceID_E1_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InterfaceID_E1, globalGNB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GlobalGNB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"globalGNB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterfaceID_E1, gNB_CU_UP_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNB_CU_UP_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gNB-CU-UP-ID"
		},
};
static const ber_tlv_tag_t asn_DEF_InterfaceID_E1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_InterfaceID_E1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* globalGNB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* gNB-CU-UP-ID */
};
asn_SEQUENCE_specifics_t asn_SPC_InterfaceID_E1_specs_1 = {
	sizeof(struct InterfaceID_E1),
	offsetof(struct InterfaceID_E1, _asn_ctx),
	asn_MAP_InterfaceID_E1_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_InterfaceID_E1 = {
	"InterfaceID-E1",
	"InterfaceID-E1",
	&asn_OP_SEQUENCE,
	asn_DEF_InterfaceID_E1_tags_1,
	sizeof(asn_DEF_InterfaceID_E1_tags_1)
		/sizeof(asn_DEF_InterfaceID_E1_tags_1[0]), /* 1 */
	asn_DEF_InterfaceID_E1_tags_1,	/* Same as above */
	sizeof(asn_DEF_InterfaceID_E1_tags_1)
		/sizeof(asn_DEF_InterfaceID_E1_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_InterfaceID_E1_1,
	2,	/* Elements count */
	&asn_SPC_InterfaceID_E1_specs_1	/* Additional specs */
};

