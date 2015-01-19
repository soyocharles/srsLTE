/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_NeighCellSI_AcquisitionParameters_r9_H_
#define	_NeighCellSI_AcquisitionParameters_r9_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include <liblte/rrc/asn/NativeEnumerated.h>
#include <liblte/rrc/asn/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NeighCellSI_AcquisitionParameters_r9__intraFreqSI_AcquisitionForHO_r9 {
	NeighCellSI_AcquisitionParameters_r9__intraFreqSI_AcquisitionForHO_r9_supported	= 0
} e_NeighCellSI_AcquisitionParameters_r9__intraFreqSI_AcquisitionForHO_r9;
typedef enum NeighCellSI_AcquisitionParameters_r9__interFreqSI_AcquisitionForHO_r9 {
	NeighCellSI_AcquisitionParameters_r9__interFreqSI_AcquisitionForHO_r9_supported	= 0
} e_NeighCellSI_AcquisitionParameters_r9__interFreqSI_AcquisitionForHO_r9;
typedef enum NeighCellSI_AcquisitionParameters_r9__utran_SI_AcquisitionForHO_r9 {
	NeighCellSI_AcquisitionParameters_r9__utran_SI_AcquisitionForHO_r9_supported	= 0
} e_NeighCellSI_AcquisitionParameters_r9__utran_SI_AcquisitionForHO_r9;

/* NeighCellSI-AcquisitionParameters-r9 */
typedef struct NeighCellSI_AcquisitionParameters_r9 {
	long	*intraFreqSI_AcquisitionForHO_r9	/* OPTIONAL */;
	long	*interFreqSI_AcquisitionForHO_r9	/* OPTIONAL */;
	long	*utran_SI_AcquisitionForHO_r9	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NeighCellSI_AcquisitionParameters_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_intraFreqSI_AcquisitionForHO_r9_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_interFreqSI_AcquisitionForHO_r9_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_utran_SI_AcquisitionForHO_r9_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NeighCellSI_AcquisitionParameters_r9;

#ifdef __cplusplus
}
#endif

#endif	/* _NeighCellSI_AcquisitionParameters_r9_H_ */
#include <liblte/rrc/asn/asn_internal.h>
