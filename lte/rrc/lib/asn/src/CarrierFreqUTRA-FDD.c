/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "liblte/rrc/asn/CarrierFreqUTRA-FDD.h"

static int
memb_q_RxLevMin_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -60 && value <= -13)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_p_MaxUTRA_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -50 && value <= 33)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_q_QualMin_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -24 && value <= 0)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_q_RxLevMin_constr_6 = {
	{ APC_CONSTRAINED,	 6,  6, -60, -13 }	/* (-60..-13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_p_MaxUTRA_constr_7 = {
	{ APC_CONSTRAINED,	 7,  7, -50,  33 }	/* (-50..33) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_q_QualMin_constr_8 = {
	{ APC_CONSTRAINED,	 5,  5, -24,  0 }	/* (-24..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_threshX_Q_r9_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqUTRA_FDD__threshX_Q_r9, threshX_HighQ_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThresholdQ_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"threshX-HighQ-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqUTRA_FDD__threshX_Q_r9, threshX_LowQ_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThresholdQ_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"threshX-LowQ-r9"
		},
};
static ber_tlv_tag_t asn_DEF_threshX_Q_r9_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_threshX_Q_r9_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* threshX-HighQ-r9 at 1621 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* threshX-LowQ-r9 at 1623 */
};
static asn_SEQUENCE_specifics_t asn_SPC_threshX_Q_r9_specs_9 = {
	sizeof(struct CarrierFreqUTRA_FDD__threshX_Q_r9),
	offsetof(struct CarrierFreqUTRA_FDD__threshX_Q_r9, _asn_ctx),
	asn_MAP_threshX_Q_r9_tag2el_9,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_threshX_Q_r9_9 = {
	"threshX-Q-r9",
	"threshX-Q-r9",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_threshX_Q_r9_tags_9,
	sizeof(asn_DEF_threshX_Q_r9_tags_9)
		/sizeof(asn_DEF_threshX_Q_r9_tags_9[0]) - 1, /* 1 */
	asn_DEF_threshX_Q_r9_tags_9,	/* Same as above */
	sizeof(asn_DEF_threshX_Q_r9_tags_9)
		/sizeof(asn_DEF_threshX_Q_r9_tags_9[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_threshX_Q_r9_9,
	2,	/* Elements count */
	&asn_SPC_threshX_Q_r9_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CarrierFreqUTRA_FDD_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqUTRA_FDD, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierFreq"
		},
	{ ATF_POINTER, 1, offsetof(struct CarrierFreqUTRA_FDD, cellReselectionPriority),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionPriority,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellReselectionPriority"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqUTRA_FDD, threshX_High),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThreshold,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"threshX-High"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqUTRA_FDD, threshX_Low),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThreshold,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"threshX-Low"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqUTRA_FDD, q_RxLevMin),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_q_RxLevMin_constraint_1,
		&asn_PER_memb_q_RxLevMin_constr_6,
		0,
		"q-RxLevMin"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqUTRA_FDD, p_MaxUTRA),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_p_MaxUTRA_constraint_1,
		&asn_PER_memb_p_MaxUTRA_constr_7,
		0,
		"p-MaxUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqUTRA_FDD, q_QualMin),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_q_QualMin_constraint_1,
		&asn_PER_memb_q_QualMin_constr_8,
		0,
		"q-QualMin"
		},
	{ ATF_POINTER, 1, offsetof(struct CarrierFreqUTRA_FDD, threshX_Q_r9),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_threshX_Q_r9_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"threshX-Q-r9"
		},
};
static int asn_MAP_CarrierFreqUTRA_FDD_oms_1[] = { 1, 7 };
static ber_tlv_tag_t asn_DEF_CarrierFreqUTRA_FDD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CarrierFreqUTRA_FDD_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq at 1613 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellReselectionPriority at 1614 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* threshX-High at 1615 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* threshX-Low at 1616 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* q-RxLevMin at 1617 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* p-MaxUTRA at 1618 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* q-QualMin at 1619 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* threshX-Q-r9 at 1621 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqUTRA_FDD_specs_1 = {
	sizeof(struct CarrierFreqUTRA_FDD),
	offsetof(struct CarrierFreqUTRA_FDD, _asn_ctx),
	asn_MAP_CarrierFreqUTRA_FDD_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_CarrierFreqUTRA_FDD_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CarrierFreqUTRA_FDD = {
	"CarrierFreqUTRA-FDD",
	"CarrierFreqUTRA-FDD",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CarrierFreqUTRA_FDD_tags_1,
	sizeof(asn_DEF_CarrierFreqUTRA_FDD_tags_1)
		/sizeof(asn_DEF_CarrierFreqUTRA_FDD_tags_1[0]), /* 1 */
	asn_DEF_CarrierFreqUTRA_FDD_tags_1,	/* Same as above */
	sizeof(asn_DEF_CarrierFreqUTRA_FDD_tags_1)
		/sizeof(asn_DEF_CarrierFreqUTRA_FDD_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CarrierFreqUTRA_FDD_1,
	8,	/* Elements count */
	&asn_SPC_CarrierFreqUTRA_FDD_specs_1	/* Additional specs */
};

