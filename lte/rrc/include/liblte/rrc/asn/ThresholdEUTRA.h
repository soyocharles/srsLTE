/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_ThresholdEUTRA_H_
#define	_ThresholdEUTRA_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include "liblte/rrc/asn/RSRP-Range.h"
#include "liblte/rrc/asn/RSRQ-Range.h"
#include <liblte/rrc/asn/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ThresholdEUTRA_PR {
	ThresholdEUTRA_PR_NOTHING,	/* No components present */
	ThresholdEUTRA_PR_threshold_RSRP,
	ThresholdEUTRA_PR_threshold_RSRQ
} ThresholdEUTRA_PR;

/* ThresholdEUTRA */
typedef struct ThresholdEUTRA {
	ThresholdEUTRA_PR present;
	union ThresholdEUTRA_u {
		RSRP_Range_t	 threshold_RSRP;
		RSRQ_Range_t	 threshold_RSRQ;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ThresholdEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ThresholdEUTRA;

#ifdef __cplusplus
}
#endif

#endif	/* _ThresholdEUTRA_H_ */
#include <liblte/rrc/asn/asn_internal.h>
