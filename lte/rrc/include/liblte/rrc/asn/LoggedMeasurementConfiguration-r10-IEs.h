/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_LoggedMeasurementConfiguration_r10_IEs_H_
#define	_LoggedMeasurementConfiguration_r10_IEs_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include "liblte/rrc/asn/TraceReference-r10.h"
#include <liblte/rrc/asn/OCTET_STRING.h>
#include "liblte/rrc/asn/AbsoluteTimeInfo-r10.h"
#include "liblte/rrc/asn/LoggingDuration-r10.h"
#include "liblte/rrc/asn/LoggingInterval-r10.h"
#include <liblte/rrc/asn/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AreaConfiguration_r10;

/* LoggedMeasurementConfiguration-r10-IEs */
typedef struct LoggedMeasurementConfiguration_r10_IEs {
	TraceReference_r10_t	 traceReference_r10;
	OCTET_STRING_t	 traceRecordingSessionRef_r10;
	OCTET_STRING_t	 tce_Id_r10;
	AbsoluteTimeInfo_r10_t	 absoluteTimeInfo_r10;
	struct AreaConfiguration_r10	*areaConfiguration_r10	/* OPTIONAL */;
	LoggingDuration_r10_t	 loggingDuration_r10;
	LoggingInterval_r10_t	 loggingInterval_r10;
	struct LoggedMeasurementConfiguration_r10_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LoggedMeasurementConfiguration_r10_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LoggedMeasurementConfiguration_r10_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "liblte/rrc/asn/AreaConfiguration-r10.h"

#endif	/* _LoggedMeasurementConfiguration_r10_IEs_H_ */
#include <liblte/rrc/asn/asn_internal.h>
