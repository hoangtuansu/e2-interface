/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm-kpmv2.0.asn"
 * 	`asn1c -fcompound-names -D asn_mouse/`
 */

#ifndef	_UEID_GNB_H_
#define	_UEID_GNB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AMF-UE-NGAP-ID.h"
#include "GUAMI.h"
#include "RANUEID.h"
#include "NG-RANnodeUEXnAPID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UEID_GNB_CU_F1AP_ID_List;
struct UEID_GNB_CU_CP_E1AP_ID_List;
struct GlobalGNB_ID;
struct GlobalNGRANNodeID;

/* UEID-GNB */
typedef struct UEID_GNB {
	AMF_UE_NGAP_ID_t	 amf_UE_NGAP_ID;
	GUAMI_t	 guami;
	struct UEID_GNB_CU_F1AP_ID_List	*gNB_CU_UE_F1AP_ID_List;	/* OPTIONAL */
	struct UEID_GNB_CU_CP_E1AP_ID_List	*gNB_CU_CP_UE_E1AP_ID_List;	/* OPTIONAL */
	RANUEID_t	*ran_UEID;	/* OPTIONAL */
	NG_RANnodeUEXnAPID_t	*m_NG_RAN_UE_XnAP_ID;	/* OPTIONAL */
	struct GlobalGNB_ID	*globalGNB_ID;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct GlobalNGRANNodeID	*globalNG_RANNode_ID;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEID_GNB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEID_GNB;
extern asn_SEQUENCE_specifics_t asn_SPC_UEID_GNB_specs_1;
extern asn_TYPE_member_t asn_MBR_UEID_GNB_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UEID-GNB-CU-F1AP-ID-List.h"
#include "UEID-GNB-CU-CP-E1AP-ID-List.h"
#include "GlobalGNB-ID.h"
#include "GlobalNGRANNodeID.h"

#endif	/* _UEID_GNB_H_ */
#include <asn_internal.h>
