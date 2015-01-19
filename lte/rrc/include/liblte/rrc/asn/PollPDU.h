/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_PollPDU_H_
#define	_PollPDU_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include <liblte/rrc/asn/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PollPDU {
	PollPDU_p4	= 0,
	PollPDU_p8	= 1,
	PollPDU_p16	= 2,
	PollPDU_p32	= 3,
	PollPDU_p64	= 4,
	PollPDU_p128	= 5,
	PollPDU_p256	= 6,
	PollPDU_pInfinity	= 7
} e_PollPDU;

/* PollPDU */
typedef long	 PollPDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PollPDU;
asn_struct_free_f PollPDU_free;
asn_struct_print_f PollPDU_print;
asn_constr_check_f PollPDU_constraint;
ber_type_decoder_f PollPDU_decode_ber;
der_type_encoder_f PollPDU_encode_der;
xer_type_decoder_f PollPDU_decode_xer;
xer_type_encoder_f PollPDU_encode_xer;
per_type_decoder_f PollPDU_decode_uper;
per_type_encoder_f PollPDU_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PollPDU_H_ */
#include <liblte/rrc/asn/asn_internal.h>
