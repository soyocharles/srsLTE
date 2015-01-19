/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MBMSCountingResponse_r10_IEs_H_
#define	_MBMSCountingResponse_r10_IEs_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include <liblte/rrc/asn/NativeInteger.h>
#include <liblte/rrc/asn/OCTET_STRING.h>
#include <liblte/rrc/asn/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CountingResponseList_r10;

/* MBMSCountingResponse-r10-IEs */
typedef struct MBMSCountingResponse_r10_IEs {
	long	*mbsfn_AreaIndex_r10	/* OPTIONAL */;
	struct CountingResponseList_r10	*countingResponseList_r10	/* OPTIONAL */;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct MBMSCountingResponse_r10_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMSCountingResponse_r10_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMSCountingResponse_r10_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "liblte/rrc/asn/CountingResponseList-r10.h"

#endif	/* _MBMSCountingResponse_r10_IEs_H_ */
#include <liblte/rrc/asn/asn_internal.h>
