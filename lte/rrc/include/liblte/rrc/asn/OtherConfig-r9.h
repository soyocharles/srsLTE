/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_OtherConfig_r9_H_
#define	_OtherConfig_r9_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include <liblte/rrc/asn/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReportProximityConfig_r9;

/* OtherConfig-r9 */
typedef struct OtherConfig_r9 {
	struct ReportProximityConfig_r9	*reportProximityConfig_r9	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OtherConfig_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OtherConfig_r9;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "liblte/rrc/asn/ReportProximityConfig-r9.h"

#endif	/* _OtherConfig_r9_H_ */
#include <liblte/rrc/asn/asn_internal.h>
