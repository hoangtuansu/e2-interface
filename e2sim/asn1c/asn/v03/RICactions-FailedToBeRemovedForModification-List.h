/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "e2ap-pdu-v03.01.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_RICactions_FailedToBeRemovedForModification_List_H_
#define	_RICactions_FailedToBeRemovedForModification_List_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolIE_SingleContainer;

/* RICactions-FailedToBeRemovedForModification-List */
typedef struct RICactions_FailedToBeRemovedForModification_List {
	A_SEQUENCE_OF(struct ProtocolIE_SingleContainer) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICactions_FailedToBeRemovedForModification_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RICactions_FailedToBeRemovedForModification_List;
extern asn_SET_OF_specifics_t asn_SPC_RICactions_FailedToBeRemovedForModification_List_specs_1;
extern asn_TYPE_member_t asn_MBR_RICactions_FailedToBeRemovedForModification_List_1[1];
extern asn_per_constraints_t asn_PER_type_RICactions_FailedToBeRemovedForModification_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RICactions_FailedToBeRemovedForModification_List_H_ */
#include "asn_internal.h"
