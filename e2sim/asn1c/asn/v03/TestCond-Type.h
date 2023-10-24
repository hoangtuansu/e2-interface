/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm-kpm-v03.00.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example`
 */

#ifndef	_TestCond_Type_H_
#define	_TestCond_Type_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TestCond_Type_PR {
	TestCond_Type_PR_NOTHING,	/* No components present */
	TestCond_Type_PR_gBR,
	TestCond_Type_PR_aMBR,
	TestCond_Type_PR_isStat,
	TestCond_Type_PR_isCatM,
	TestCond_Type_PR_rSRP,
	TestCond_Type_PR_rSRQ,
	/* Extensions may appear below */
	TestCond_Type_PR_ul_rSRP,
	TestCond_Type_PR_cQI,
	TestCond_Type_PR_fiveQI,
	TestCond_Type_PR_qCI,
	TestCond_Type_PR_sNSSAI
} TestCond_Type_PR;
typedef enum TestCond_Type__gBR {
	TestCond_Type__gBR_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_TestCond_Type__gBR;
typedef enum TestCond_Type__aMBR {
	TestCond_Type__aMBR_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_TestCond_Type__aMBR;
typedef enum TestCond_Type__isStat {
	TestCond_Type__isStat_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_TestCond_Type__isStat;
typedef enum TestCond_Type__isCatM {
	TestCond_Type__isCatM_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_TestCond_Type__isCatM;
typedef enum TestCond_Type__rSRP {
	TestCond_Type__rSRP_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_TestCond_Type__rSRP;
typedef enum TestCond_Type__rSRQ {
	TestCond_Type__rSRQ_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_TestCond_Type__rSRQ;
typedef enum TestCond_Type__ul_rSRP {
	TestCond_Type__ul_rSRP_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_TestCond_Type__ul_rSRP;
typedef enum TestCond_Type__cQI {
	TestCond_Type__cQI_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_TestCond_Type__cQI;
typedef enum TestCond_Type__fiveQI {
	TestCond_Type__fiveQI_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_TestCond_Type__fiveQI;
typedef enum TestCond_Type__qCI {
	TestCond_Type__qCI_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_TestCond_Type__qCI;
typedef enum TestCond_Type__sNSSAI {
	TestCond_Type__sNSSAI_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_TestCond_Type__sNSSAI;

/* TestCond-Type */
typedef struct TestCond_Type {
	TestCond_Type_PR present;
	union TestCond_Type_u {
		long	 gBR;
		long	 aMBR;
		long	 isStat;
		long	 isCatM;
		long	 rSRP;
		long	 rSRQ;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		long	 ul_rSRP;
		long	 cQI;
		long	 fiveQI;
		long	 qCI;
		long	 sNSSAI;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TestCond_Type_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_gBR_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_aMBR_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_isStat_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_isCatM_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rSRP_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rSRQ_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_rSRP_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cQI_24;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_fiveQI_27;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_qCI_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sNSSAI_33;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_TestCond_Type;
extern asn_CHOICE_specifics_t asn_SPC_TestCond_Type_specs_1;
extern asn_TYPE_member_t asn_MBR_TestCond_Type_1[11];
extern asn_per_constraints_t asn_PER_type_TestCond_Type_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _TestCond_Type_H_ */
#include "asn_internal.h"
