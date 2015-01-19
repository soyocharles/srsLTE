/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_InterRAT_BandInfo_H_
#define	_InterRAT_BandInfo_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include <liblte/rrc/asn/BOOLEAN.h>
#include <liblte/rrc/asn/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* InterRAT-BandInfo */
typedef struct InterRAT_BandInfo {
	BOOLEAN_t	 interRAT_NeedForGaps;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRAT_BandInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterRAT_BandInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _InterRAT_BandInfo_H_ */
#include <liblte/rrc/asn/asn_internal.h>
