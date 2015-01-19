/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_UE_CapabilityRAT_Container_H_
#define	_UE_CapabilityRAT_Container_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include "liblte/rrc/asn/RAT-Type.h"
#include <liblte/rrc/asn/OCTET_STRING.h>
#include <liblte/rrc/asn/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-CapabilityRAT-Container */
typedef struct UE_CapabilityRAT_Container {
	RAT_Type_t	 rat_Type;
	OCTET_STRING_t	 ueCapabilityRAT_Container;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_CapabilityRAT_Container_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_CapabilityRAT_Container;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_CapabilityRAT_Container_H_ */
#include <liblte/rrc/asn/asn_internal.h>
