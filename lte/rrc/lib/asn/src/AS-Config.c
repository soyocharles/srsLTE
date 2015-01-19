/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "EUTRA-InterNodeDefinitions.asn"
 */

#include "liblte/rrc/asn/AS-Config.h"

static int
memb_sourceSystemInformationBlockType1_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

static int
memb_sourceSystemInformationBlockType1Ext_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_memb_sourceSystemInformationBlockType1_constr_7 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sourceSystemInformationBlockType1Ext_constr_12 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_AS_Config_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceMeasConfig),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sourceMeasConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceRadioResourceConfig),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicated,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sourceRadioResourceConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceSecurityAlgorithmConfig),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityAlgorithmConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sourceSecurityAlgorithmConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceUE_Identity),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sourceUE-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceMasterInformationBlock),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MasterInformationBlock,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sourceMasterInformationBlock"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceSystemInformationBlockType1),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType1,
		memb_sourceSystemInformationBlockType1_constraint_1,
		&asn_PER_memb_sourceSystemInformationBlockType1_constr_7,
		0,
		"sourceSystemInformationBlockType1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceSystemInformationBlockType2),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sourceSystemInformationBlockType2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, antennaInfoCommon),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoCommon,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"antennaInfoCommon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceDl_CarrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sourceDl-CarrierFreq"
		},
	{ ATF_POINTER, 2, offsetof(struct AS_Config, sourceSystemInformationBlockType1Ext),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		memb_sourceSystemInformationBlockType1Ext_constraint_1,
		&asn_PER_memb_sourceSystemInformationBlockType1Ext_constr_12,
		0,
		"sourceSystemInformationBlockType1Ext"
		},
	{ ATF_POINTER, 1, offsetof(struct AS_Config, sourceOtherConfig_r9),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OtherConfig_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sourceOtherConfig-r9"
		},
};
static const int asn_MAP_AS_Config_oms_1[] = { 9, 10 };
static const ber_tlv_tag_t asn_DEF_AS_Config_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AS_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sourceMeasConfig */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sourceRadioResourceConfig */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sourceSecurityAlgorithmConfig */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sourceUE-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sourceMasterInformationBlock */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sourceSystemInformationBlockType1 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* sourceSystemInformationBlockType2 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* antennaInfoCommon */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* sourceDl-CarrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* sourceSystemInformationBlockType1Ext */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* sourceOtherConfig-r9 */
};
static asn_SEQUENCE_specifics_t asn_SPC_AS_Config_specs_1 = {
	sizeof(struct AS_Config),
	offsetof(struct AS_Config, _asn_ctx),
	asn_MAP_AS_Config_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_AS_Config_oms_1,	/* Optional members */
	0, 2,	/* Root/Additions */
	8,	/* Start extensions */
	12	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_AS_Config = {
	"AS-Config",
	"AS-Config",
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
	asn_DEF_AS_Config_tags_1,
	sizeof(asn_DEF_AS_Config_tags_1)
		/sizeof(asn_DEF_AS_Config_tags_1[0]), /* 1 */
	asn_DEF_AS_Config_tags_1,	/* Same as above */
	sizeof(asn_DEF_AS_Config_tags_1)
		/sizeof(asn_DEF_AS_Config_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_AS_Config_1,
	11,	/* Elements count */
	&asn_SPC_AS_Config_specs_1	/* Additional specs */
};

