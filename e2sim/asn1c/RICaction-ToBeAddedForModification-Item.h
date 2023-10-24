/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "e2ap-pdu-v03.01.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D ../../`
 */

#ifndef	_RICaction_ToBeAddedForModification_Item_H_
#define	_RICaction_ToBeAddedForModification_Item_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RICactionID.h"
#include "RICactionType.h"
#include "RICactionDefinition.h"
#include "RICactionExecutionOrder.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RICsubsequentAction;

/* RICaction-ToBeAddedForModification-Item */
typedef struct RICaction_ToBeAddedForModification_Item {
	RICactionID_t	 ricActionID;
	RICactionType_t	 ricActionType;
	RICactionDefinition_t	 ricActionDefinition;
	RICactionExecutionOrder_t	 ricActionExecutionOrder;
	struct RICsubsequentAction	*ricSubsequentAction;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICaction_ToBeAddedForModification_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RICaction_ToBeAddedForModification_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_RICaction_ToBeAddedForModification_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_RICaction_ToBeAddedForModification_Item_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _RICaction_ToBeAddedForModification_Item_H_ */
#include "asn_internal.h"