/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CellChangeOrder_H_
#define	_CellChangeOrder_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include <liblte/rrc/asn/NativeEnumerated.h>
#include "liblte/rrc/asn/PhysCellIdGERAN.h"
#include "liblte/rrc/asn/CarrierFreqGERAN.h"
#include <liblte/rrc/asn/BIT_STRING.h>
#include <liblte/rrc/asn/constr_SEQUENCE.h>
#include <liblte/rrc/asn/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellChangeOrder__t304 {
	CellChangeOrder__t304_ms100	= 0,
	CellChangeOrder__t304_ms200	= 1,
	CellChangeOrder__t304_ms500	= 2,
	CellChangeOrder__t304_ms1000	= 3,
	CellChangeOrder__t304_ms2000	= 4,
	CellChangeOrder__t304_ms4000	= 5,
	CellChangeOrder__t304_ms8000	= 6,
	CellChangeOrder__t304_spare1	= 7
} e_CellChangeOrder__t304;
typedef enum CellChangeOrder__targetRAT_Type_PR {
	CellChangeOrder__targetRAT_Type_PR_NOTHING,	/* No components present */
	CellChangeOrder__targetRAT_Type_PR_geran,
	/* Extensions may appear below */
	
} CellChangeOrder__targetRAT_Type_PR;

/* Forward declarations */
struct SI_OrPSI_GERAN;

/* CellChangeOrder */
typedef struct CellChangeOrder {
	long	 t304;
	struct CellChangeOrder__targetRAT_Type {
		CellChangeOrder__targetRAT_Type_PR present;
		union CellChangeOrder__targetRAT_Type_u {
			struct CellChangeOrder__targetRAT_Type__geran {
				PhysCellIdGERAN_t	 physCellId;
				CarrierFreqGERAN_t	 carrierFreq;
				BIT_STRING_t	*networkControlOrder	/* OPTIONAL */;
				struct SI_OrPSI_GERAN	*systemInformation	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} geran;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} targetRAT_Type;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellChangeOrder_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_t304_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CellChangeOrder;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "liblte/rrc/asn/SI-OrPSI-GERAN.h"

#endif	/* _CellChangeOrder_H_ */
#include <liblte/rrc/asn/asn_internal.h>
