/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm-kpmv2.0.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-example -D ./asn`
 */

#include "MeasurementInfoItem.h"

asn_TYPE_member_t asn_MBR_MeasurementInfoItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementInfoItem, measType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasurementType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementInfoItem, labelInfoList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LabelInfoList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"labelInfoList"
		},
};
static const ber_tlv_tag_t asn_DEF_MeasurementInfoItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasurementInfoItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* labelInfoList */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasurementInfoItem_specs_1 = {
	sizeof(struct MeasurementInfoItem),
	offsetof(struct MeasurementInfoItem, _asn_ctx),
	asn_MAP_MeasurementInfoItem_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasurementInfoItem = {
	"MeasurementInfoItem",
	"MeasurementInfoItem",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasurementInfoItem_tags_1,
	sizeof(asn_DEF_MeasurementInfoItem_tags_1)
		/sizeof(asn_DEF_MeasurementInfoItem_tags_1[0]), /* 1 */
	asn_DEF_MeasurementInfoItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasurementInfoItem_tags_1)
		/sizeof(asn_DEF_MeasurementInfoItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasurementInfoItem_1,
	2,	/* Elements count */
	&asn_SPC_MeasurementInfoItem_specs_1	/* Additional specs */
};

