
unsigned int rpu_eth0[] = {
    0x00f40401, 0x915fdb81, 0x01e7fffd, 0x915fdb82, 0x01e3fffd, 0x915fdb83, 0x012bff01, 0x915fdb84, 0x01240001,
    0x915fdb85, 0x00ac17bd, 0x915fdb86, 0x00dc0000, 0x001be686, 0x20dc0000, 0x001c1c87, 0x0137f811, 0x91561ca4,
    0x20c000c9, 0x8d9e1ca4, 0x0137fe41, 0x91481b8d, 0x00dc0000, 0x001be689, 0x00001800, 0x01dfdbac, 0x20700021,
    0x82b61ca4, 0x007000c9, 0x859fdb8f, 0x20dc0000, 0x001e1ca4, 0x1c700020, 0xf2bfdb91, 0x20dc0000, 0x001e1ca4,
    0x20dc0000, 0x001e1ca4, 0x1c700020, 0xf2be1911, 0x00ac17cd, 0x91485b95, 0x20dc0000, 0x001c1c9b, 0x00dc0000,
    0x00185cab, 0x00000c00, 0x01c91aac, 0x20dc0000, 0x001c1ca8, 0x18dc0000, 0x00185cab, 0x04700020, 0xf2ba1c95,
    0x00dc0000, 0x001be524, 0x00000c00, 0x01c91aac, 0x00000400, 0x01ce1b9f, 0x00001c00, 0x01c8c81f, 0x0137feb1,
    0x915fdba0, 0x00020000, 0x01d08820, 0x00dc0000, 0x001fdba2, 0x00000001, 0x9153c022, 0x00dc0000, 0x001fdb81,
    0x00c8005a, 0x52305cab, 0x00001400, 0x01c89b2c, 0x00001000, 0x01ca1bac, 0x00001400, 0x01dfdb9f, 0x00dc0000,
    0x001be524, 0x00000800, 0x01ce1b9f, 0x00dc0000, 0x001fdb9e, 0x00000400, 0x01dfdbac, 0x00dc0000, 0x00181cac,
    0x00dc0000, 0x001fdb9f,
};

unsigned int rpu_eth0_patch[] = {
    0x00160844, 0x00000000, 0x0016089c, 0x0000dd7b, 0x001608a0, 0x0000c704, 0x001608f0, 0x00000280, 0x00160934,
    0x00000000, 0x0016093c, 0x0000ff00, 0x00160940, 0x0000d500, 0x00160944, 0x0000ffff, 0x00160948, 0x00000081,
    0x001609d8, 0x00001db7, 0x001609dc, 0x000004c1, 0x001609e8, 0x000003f8,
};

unsigned int tpu_eth0[] = {
    0x010c0041, 0x915fdb81, 0x01fbfffd, 0x915fdb82, 0x01f7fffd, 0x915fdb83, 0x012ffdfd, 0x915fdb84, 0x00dc0000,
    0x001bc82d, 0x01380001, 0x91489c86, 0x01390001, 0x914ba707, 0x00dc0000, 0x001bc82d, 0x00b00020, 0xea97c085,
    0x00b000b0, 0xeddfdb8a, 0x01300001, 0x627fdb8b, 0x00dc0000, 0x001b8093, 0x01380001, 0x91489c8d, 0x00c80102,
    0x727fdb8e, 0x00dc0000, 0x00199b10, 0x00dc0000, 0x001fdb8c, 0x00c80182, 0x727fdb91, 0x00dc0000, 0x00199b16,
    0x00dc0000, 0x001fdb90, 0x00a40020, 0xea918813, 0x00a400a4, 0xedd18814, 0x00ec0005, 0x9157d995, 0x20855555,
    0x915fdb97, 0x00ec0005, 0x915fdb98, 0x013bff11, 0x915fdb99, 0x28dc0000, 0x0018dcd3, 0x00840035, 0x91565919,
    0x280800c5, 0x955fdb9c, 0x00048000, 0x09d8dcd7, 0x048400c8, 0xed9fdb9e, 0x28dc0000, 0x0018dcdd, 0x3cc800c9,
    0x0d58dcdd, 0x00dc0000, 0x001d881d, 0x008401f5, 0x94bfdba2, 0x28dc0000, 0x0018dcdd, 0x00041000, 0x09cfd924,
    0x28dc0000, 0x0018dcdd, 0x28dc0000, 0x0018dcdd, 0x288401f9, 0x94b0dcdd, 0x28dc0000, 0x0018dcdd, 0x28dc0000,
    0x0018dcdd, 0x28dc0000, 0x0018dcdd, 0x0084000d, 0x08cfd92b, 0x28ec0001, 0x9150dcdd, 0x0087fffd, 0x915bd96d,
    0x01390001, 0x914ba72e, 0x00dc0000, 0x001fc805, 0x00b00020, 0xea97c0ad, 0x00b000b0, 0xeddfdbb1, 0x01300001,
    0x627fdbb2, 0x00dc0000, 0x001b80b6, 0x00c80182, 0x727fdbb4, 0x00dc0000, 0x00199b39, 0x00dc0000, 0x001fdbb3,
    0x00a40020, 0xea918836, 0x00a400a4, 0xedd18837, 0x00ec0005, 0x9157d9b8, 0x20855555, 0x915fdbba, 0x00ec0005,
    0x915fdbbb, 0x013bff11, 0x915fdbbc, 0x20dc0000, 0x001fdbbd, 0x00840035, 0x9156593c, 0x200800c5, 0x955fdbbf,
    0x00048000, 0x09dfdbc0, 0x048400c8, 0xed9fdbc1, 0x20dc0000, 0x001fdbc2, 0x34c800c9, 0x0d5fdbc3, 0x00dc0000,
    0x001d8840, 0x008401f5, 0x94bfdbc5, 0x20dc0000, 0x001fdbc6, 0x00041000, 0x09cfd947, 0x20dc0000, 0x001fdbc8,
    0x20dc0000, 0x001fdbc9, 0x20dc0000, 0x001fdbca, 0x008401f9, 0x94bfdbcb, 0x20dc0000, 0x001fdbcc, 0x20dc0000,
    0x001fdbcd, 0x20dc0000, 0x001fdbce, 0x0084000d, 0x08cfd94f, 0x20ec0001, 0x915fdbd0, 0x0087fffd, 0x915bd96d,
    0x01380001, 0x915fdbd2, 0x0005fffc, 0x091fdb81, 0x00840035, 0x914a5956, 0x20dc0000, 0x001fdbd5, 0x00840035,
    0x91565953, 0x20040400, 0x09dfdbd8, 0x00040400, 0x09dfdbd8, 0x013bff81, 0x915fdbd9, 0x0086aaab, 0xe8dfdbda,
    0x20dc0000, 0x001fdbdb, 0x00ec0001, 0x9156595a, 0x0087fffd, 0x915fdbd1, 0x013bff81, 0x915fdbde, 0x0086aaab,
    0xe8dfdbdf, 0x20040400, 0x09cbe5e0, 0x00ec0001, 0x9156595e, 0x0087fffd, 0x915fdbe2, 0x00040800, 0x09cfe5e3,
    0x00dc0000, 0x001fdbd1, 0x20ec000d, 0x915fdbe5, 0x00dc0000, 0x001fdbe6, 0x013bffd1, 0x915fdbe9, 0x013bffc1,
    0x915fdbe8, 0x00855557, 0xe8dfdbe9, 0x213bffc1, 0x91565969, 0x00855557, 0xf0dfdbeb, 0x20dc0000, 0x001e596b,
    0x00ec0001, 0x915fdbd1, 0x00040c00, 0x09cf086e, 0x00dc0000, 0x001fdbd1,
};

unsigned int tpu_eth0_patch[] = {
    0x00160884, 0x0000ffff, 0x00160888, 0x00000000, 0x001608a8, 0x0000ffff, 0x00160938, 0x00000000, 0x001609ec,
    0x00001db7, 0x001609f0, 0x000004c1, 0x001609fc, 0x000002f9,
};

unsigned int xpec_eth0_mac[] = {
    0x0a00c2df, 0x0a28e2e0, 0x0580c2e1, 0x3400c000, 0x0400c813, 0x1080c813, 0x2800c000, 0x3480c000, 0x3500c000,
    0x0480c813, 0x1100c813, 0x2880c000, 0x1c70e2e2, 0x0000c2e3, 0x00b9b838, 0x40810000, 0x09f042e4, 0xa6000014,
    0x1c70e2e5, 0xbe000015, 0x1c7022e5, 0x09f042e6, 0xa6000019, 0x1c70e2e7, 0xbe00001a, 0x1c7022e7, 0x0e80c2e8,
    0x0f00c2e9, 0x0e00c2ea, 0x0f80c2eb, 0x0a80c2ec, 0x0b00c2ed, 0x2700c3e8, 0xc0fff000, 0x0d00c826, 0x0d80c824,
    0x30c28001, 0x30c26001, 0x0011a83c, 0x0001083c, 0x00b682ee, 0x013682ef, 0x09810801, 0x9600002e, 0x0180c2f0,
    0x01071802, 0x0080c2f1, 0x0100e802, 0x410100c1, 0x0080c2f2, 0x09b70530, 0x92000035, 0x0d3502f3, 0x4d0100c1,
    0x0e80c2f4, 0x2800c000, 0xaf1e0038, 0x29cb0000, 0x8e00003e, 0x30c2e004, 0x042702e7, 0xbe000049, 0xaf00003e,
    0x044ae2e7, 0x001082f5, 0x002db800, 0x008172f6, 0x001082f7, 0x0021b800, 0x21817618, 0x0100c2f8, 0x00870801,
    0x408100c2, 0x29c24001, 0xa6000059, 0x29c24004, 0xa6000053, 0x0100c2f9, 0x2080c003, 0x0183052e, 0x418100c2,
    0x0180c2fa, 0x418102c2, 0x0d00c2fb, 0x0d80c2fc, 0x0080c2fd, 0x0300c2fe, 0x2680c008, 0x430180c1, 0x29c24004,
    0xa6000061, 0x0100c2ff, 0x2080c003, 0x0183052e, 0x418100c2, 0x0180c300, 0x418102c2, 0x0d00c301, 0x0d80c302,
    0x0080c2fd, 0x0380c303, 0x2680c008, 0x438180c1, 0x21a11006, 0x8e00006b, 0x0687a803, 0xc0fff000, 0x0081852f,
    0x0000c304, 0x61010141, 0x41010140, 0x61010141, 0x41010140, 0x61010141, 0x41010140, 0x49810040, 0x29c24004,
    0xa600007d, 0x0100c305, 0x2080c001, 0x20830600, 0x0183052e, 0x418100c2, 0x0180c306, 0x418102c2, 0x0e80c307,
    0x2680c008, 0xc0fff000, 0x0000c304, 0x0180c308, 0x0080c813, 0x00826d00, 0x00826d00, 0x00826d00, 0x00826d00,
    0x00826d00, 0x00826d00, 0x408100c3, 0x0100c309, 0x0007b801, 0x400100c2, 0x0100c30a, 0x20028007, 0x20012001,
    0x400100c2, 0x0e80c30b, 0x2680c008, 0xc0fff000, 0x2180c001, 0x01868558, 0xa6000099, 0x30c2e010, 0xbe0000b5,
    0x00270528, 0x29808001, 0xa60000ad, 0x00270528, 0x098102f3, 0x860000a5, 0x00270529, 0x098102ee, 0x860000a5,
    0x30c2e400, 0x30c2e010, 0xbe0000b5, 0x30c2e200, 0x0080c30c, 0x00830533, 0x00270534, 0x09808c01, 0xa60000b5,
    0x30c2e010, 0xbe0000b5, 0x30c2e100, 0x00270528, 0x09810559, 0x860000b5, 0x00270529, 0x0981055a, 0x860000b5,
    0x30c2e010, 0x0e80c30d, 0x2680c008, 0xc0fff000, 0x21a1100c, 0x8e0000bc, 0x0687a803, 0xc0fff000, 0x008d852f,
    0x0000c30e, 0x61010141, 0x41010140, 0x61010141, 0x41010140, 0x61010141, 0x41010140, 0x49810040, 0x0e80c30f,
    0x2680c008, 0xc0fff000, 0x0000c30e, 0x0180c310, 0x00a66d00, 0x00826d00, 0x00826d00, 0x00826d00, 0x00826d00,
    0x00826d00, 0x408100c3, 0x0100c311, 0x0007b801, 0x400100c2, 0x0100c312, 0x20028007, 0x20012001, 0x400100c2,
    0x0027052a, 0x29808001, 0xa60000e5, 0x0027052a, 0x098102f3, 0x860000e3, 0x0027052b, 0x098102ee, 0x860000e3,
    0x10c2e2e7, 0xbe0000e6, 0x10c2e313, 0xbe0000e6, 0x10c2e2e5, 0x0e80c314, 0x2680c008, 0xc0fff000, 0x21a11012,
    0x8e0000ed, 0x0687a803, 0xc0fff000, 0x0099852f, 0x0e80c2ee, 0x610101c1, 0x018482ee, 0x29870081, 0x820000f7,
    0x0000c315, 0x041022f6, 0x30c22002, 0x41018040, 0x0000c316, 0x0410e2f6, 0x410100c0, 0x01048317, 0x012bb802,
    0x0000c318, 0x00008558, 0x0021b800, 0x09810802, 0x96000103, 0x30c22002, 0xbe000104, 0x30c2e002, 0x0000c315,
    0x61010041, 0x410180c0, 0x5e018106, 0x098d0303, 0x82000115, 0x09f08319, 0xa600010e, 0x2600c008, 0xbe000110,
    0x2680c050, 0xbe000110, 0x09a7080d, 0x86000110, 0x09f0831a, 0xa6000115, 0x5e010106, 0x230d0020, 0x0080c2f8,
    0x20270020, 0x0001052e, 0x400100c1, 0x30c26001, 0x0380c303, 0x0d00c301, 0x0d80c302, 0x29c24004, 0xa6000021,
    0x0100c2ff, 0x2080c003, 0x0183052e, 0x418100c2, 0x0180c300, 0x418182c2, 0x5e018107, 0x098f031b, 0x82000134,
    0x09f08319, 0xa600012d, 0x2680c008, 0xbe00012f, 0x2680c050, 0xbe00012f, 0x09a7080d, 0x8600012f, 0x09f0831a,
    0xa6000134, 0x5e010107, 0x238f0020, 0x0080c2f8, 0x20270020, 0x0001052e, 0x400100c1, 0x30c26001, 0x0300c2fe,
    0x0d00c2fb, 0x0d80c2fc, 0x29c24004, 0xa6000021, 0x0100c2f9, 0x2080c003, 0x0183052e, 0x418100c2, 0x0180c2fa,
    0x418182c2, 0x01d082df, 0x145022f6, 0x3c70e400, 0x0e80c2e8, 0x0d00c2ee, 0x0d80c2ee, 0x3c702400, 0x00899810,
    0x0410e801, 0x0100c31c, 0x0011b803, 0x00b9a800, 0x0402e808, 0x0300c2f3, 0x690400d0, 0x0380c2f3, 0x0080c31d,
    0x00038561, 0x400100c1, 0xbe000159, 0x29c28004, 0xa600015f, 0x0080c31e, 0x00038568, 0x400100c1, 0xc0fff000,
    0x29c28010, 0xa600019f, 0x29c28002, 0xa600016d, 0x29c28010, 0xa6000021, 0x81808000, 0x1280c808, 0xae000167,
    0x00270558, 0x0980831f, 0xa6000021, 0x31c6e002, 0xc0fff000, 0x29c28010, 0xa6000021, 0x81810000, 0x1280c808,
    0xae000171, 0x00270558, 0x09808320, 0xa6000021, 0x31c6e008, 0xc0fff000, 0x0080c321, 0x00038562, 0x400100c1,
    0x0410e2e0, 0xbe00019a, 0x0080c322, 0x00038563, 0x400100c1, 0x0410e323, 0xbe00019a, 0x0080c324, 0x00038564,
    0x400100c1, 0x0410e325, 0xbe00019a, 0x0080c326, 0x00038565, 0x400100c1, 0x0410e327, 0xbe00019a, 0x0080c328,
    0x00038566, 0x400100c1, 0x0410e329, 0xbe00019a, 0x0080c32a, 0x00038567, 0x400100c1, 0x0410e32b, 0xbe00019a,
    0x0080c32c, 0x00038569, 0x400100c1, 0x0410e32d, 0xbe00019a, 0x29c24004, 0xa6000021, 0x00270558, 0x29804002,
    0xa600015f, 0x81800000, 0x1290832e, 0xae0001a1, 0xc0fff000, 0xaf0181a3, 0x0480c825, 0x3144e008, 0xbe0001ab,
    0xaf0201a7, 0x0480c825, 0x31442008, 0xbe0001ab, 0x0e00c2ee, 0x0f80c2ee, 0x0000c32f, 0x0100c330, 0x009282f5,
    0x00adb801, 0x008372f6, 0x019282f7, 0x01a1b803, 0x21877618, 0x00870801, 0x408100c0, 0x408100c2, 0x0100c331,
    0x201287ff, 0x400100c2, 0x0180c332, 0x00c19800, 0x408100c3, 0x2981003c, 0x8a0001e1, 0x099282f6, 0xa60001c4,
    0x298105ee, 0x920001e1, 0x298105ea, 0x920001e1, 0x0f80c333, 0x31446002, 0x2880c000, 0x1e11b800, 0x3e0080ff,
    0x29c44002, 0xa60001d7, 0x0280c334, 0x0500c335, 0x0e00c336, 0x31442001, 0x0100c337, 0x2080c000, 0x01830500,
    0x418100c2, 0x0180c338, 0x418182c2, 0x0280c339, 0x0500c33a, 0x0e00c33b, 0x3144e001, 0x0100c33c, 0x2080c000,
    0x01830500, 0x418100c2, 0x0180c33d, 0x418182c2, 0x0039b327, 0xbe0002b2, 0x14a702f6, 0x0b80c2ee, 0x0c00c33e,
    0x0c80c33f, 0xbe00020f, 0x14a702f6, 0x0b80c2ee, 0x0c00c33e, 0x0c80c33f, 0xbe00022a, 0x0b80c826, 0x0c80c824,
    0x005482ee, 0x00b282ee, 0x013282ef, 0x09810801, 0x960001f6, 0x0180c2f0, 0x01071802, 0x0080c340, 0x0100e802,
    0x410100c1, 0x0080c341, 0x09b30506, 0x920001fd, 0x0baf02f3, 0x4b8100c1, 0x0c80c342, 0x0b80c343, 0x0100c344,
    0x2080c001, 0x20830600, 0x01830500, 0x418100c2, 0x0180c345, 0x418182c2, 0x29c48001, 0xa600020b, 0x2600c020,
    0xc0fff000, 0x29c48004, 0xa600020f, 0x0e00c2ee, 0xc0fff000, 0x2180c020, 0x0100c330, 0x00870501, 0x408100c2,
    0x0000c332, 0x09870503, 0x8a000218, 0x498100c0, 0xbe00021a, 0x00871503, 0x408100c0, 0x0e00c346, 0x3144e002,
    0x0100c33c, 0x2080c000, 0x01830501, 0x418100c2, 0x0180c33d, 0x418182c2, 0x29c44001, 0xa6000226, 0x2600c020,
    0xc0fff000, 0x29c48004, 0xa600022a, 0x0e00c2ee, 0xc0fff000, 0x2180c020, 0x0100c330, 0x00870501, 0x408100c2,
    0x0000c332, 0x09870503, 0x8a000233, 0x498100c0, 0xbe000235, 0x00871503, 0x408100c0, 0x0e00c347, 0x31442002,
    0x0100c337, 0x2080c000, 0x01830501, 0x418100c2, 0x0180c338, 0x418182c2, 0x7e018105, 0x0021b80a, 0x00008348,
    0x098b0800, 0x82000021, 0x0c80c349, 0x09a60813, 0xc0fff000, 0x7e010105, 0x0c80c342, 0xc0fff000, 0x29c44004,
    0xa6000268, 0x0000c331, 0x2100c020, 0x00851502, 0x408100c0, 0x09850502, 0x8a00025e, 0x3144e004, 0x01270502,
    0x29c44001, 0xa6000259, 0x0280c339, 0x010b0802, 0x0521a802, 0x3144e001, 0xc0fff000, 0x0280c334, 0x010b0802,
    0x0521a802, 0x31442001, 0xc0fff000, 0x29c44001, 0xa6000264, 0x0280c339, 0x0500c33a, 0x3144e001, 0xc0fff000,
    0x0280c334, 0x0500c335, 0x31442001, 0xc0fff000, 0x31442004, 0x0c00c2ee, 0x0c80c2ee, 0x0b80c2ee, 0xc0fff000,
    0x0c00c2ee, 0x0c80c2ee, 0x0b80c2ee, 0x0100c34a, 0x005282df, 0x0091b800, 0x1c70e34b, 0x690400d1, 0x1c70234b,
    0x0080c34c, 0x0003855b, 0x400100c1, 0x09818504, 0x8600027d, 0x2492e000, 0xbe0002b2, 0x0492e2e4, 0xbe0002b2,
    0x09818504, 0x86000285, 0x0080c34d, 0x0003855c, 0x400100c1, 0xbe00028c, 0x0080c34e, 0x0003855d, 0x400100c1,
    0x099f8504, 0x9200028c, 0x0492e325, 0xbe0002b2, 0x0000c34f, 0x00838504, 0x408100c0, 0x09958504, 0x8a000293,
    0x00a70504, 0xbe000294, 0x20a7000a, 0x0180c350, 0x00486351, 0x008302f3, 0x20832002, 0x008302f3, 0x00028800,
    0x20017200, 0x09f04319, 0xa600029e, 0x2001700a, 0x400100c3, 0x0f80c352, 0x0e00c2ee, 0x06158505, 0xc0fff000,
    0x0080c353, 0x0003855e, 0x400100c1, 0x0492e2e0, 0xbe0002b2, 0x0080c354, 0x0003855f, 0x400100c1, 0x0492e323,
    0xbe0002b2, 0x0080c355, 0x00038560, 0x400100c1, 0x0492e32b, 0xbe0002b2, 0x29c48008, 0xa60002bc, 0x81828000,
    0x1280c809, 0xae0002b6, 0x00270558, 0x09808356, 0xa60002c3, 0x31c6e001, 0xbe0002c3, 0x81830000, 0x1280c809,
    0xae0002be, 0x00270558, 0x09808357, 0xa60002c3, 0x31c6e004, 0x0000c34f, 0x0f80c2ea, 0x0e00c2eb, 0x498180c0,
    0x0000c2e3, 0x00b9b838, 0x40810000, 0x09f042e4, 0xa60002ce, 0x1c70e2e5, 0xbe0002cf, 0x1c7022e5, 0x00270558,
    0x09808358, 0xa6000021, 0x31c6e010, 0xc0fff000, 0x0000c2e3, 0x00b9b838, 0x40810000, 0x09f042e6, 0xa60002db,
    0x1c70e2e7, 0xbe0002dc, 0x1c7022e7, 0x2700c3e8, 0xc0fff000, 0xc0000fff, 0x00000f00, 0x80000000, 0x15601540,
    0x0000a000, 0x000015b4, 0x10000000, 0x00001000, 0x20000000, 0x00004000, 0x8022ffb6, 0x8145ff47, 0x89a3ffc1,
    0x89a7ffc2, 0xdac70c0c, 0x92d4ff42, 0x0000ffff, 0xffff0000, 0x00010000, 0x000014c0, 0x000014c4, 0xffffffff,
    0x9067ff41, 0x03c00000, 0x00008000, 0x003f0000, 0x000014b8, 0x00001ffc, 0x0854877e, 0x0107b4b6, 0x9908ffb4,
    0x000014bc, 0x00001520, 0x00001ff4, 0x085507fd, 0x0126b5b6, 0x9927ffb5, 0x00001540, 0x000014a0, 0x00001fdc,
    0x0253047a, 0x9080ff41, 0x000014c8, 0x000014cc, 0x000014d0, 0x9094ff41, 0x000015e0, 0x90b8ff41, 0x000014a8,
    0x90c8ff41, 0x000014d4, 0x000014d8, 0x000014dc, 0x00002000, 0x90e9ff41, 0x000014b0, 0x000014b4, 0x00e00000,
    0x000f0000, 0x40000000, 0x00040000, 0x00001560, 0x000014e0, 0x00001584, 0x000015a0, 0x00100000, 0x00200000,
    0x00001588, 0x0000158c, 0x90000000, 0x00001590, 0xa0000000, 0x00001594, 0xb0000000, 0x00001598, 0xc0000000,
    0x0000159c, 0xd0000000, 0x000015a4, 0xe0000000, 0x03ff0000, 0x00001400, 0x00001404, 0x00001408, 0x0000140c,
    0x9a6dff4b, 0x00001460, 0x14800000, 0x91e3ff86, 0x00001fec, 0x08518c7c, 0x00001480, 0x14a00000, 0x91e8ff87,
    0x00001fe4, 0x08520c7b, 0x023db3ba, 0x91edff49, 0x00001418, 0x0000141c, 0x023eabba, 0x2a48abb3, 0x00001fd4,
    0x0250647f, 0xd2224087, 0xd2074086, 0x00001fff, 0x8245ff04, 0x00001420, 0x00000800, 0x0000156c, 0x00001570,
    0x00001574, 0x00001410, 0x00001414, 0x55555555, 0x91abff40, 0x00001578, 0x0000157c, 0x00001580, 0x00400000,
    0x00800000, 0x01000000,
};

unsigned int xpec_eth0_mac_patch[] = {
    0x00170054, 0x0000ffff, 0x00170058, 0x0000ffff, 0x0017005c, 0x0000ffff, 0x00170060, 0x0000ffff, 0x00170064,
    0x0000ffff, 0x00170068, 0x0000ffff, 0x0017006c, 0x0000ffff, 0x00170070, 0x0000ffff, 0x00170074, 0x0000ffff,
    0x00170078, 0x0000ffff, 0x0017007c, 0x0000ffff, 0x00170080, 0x0000ffff, 0x00173400, 0x00000000, 0x00173404,
    0x00000000, 0x00173408, 0x00000000, 0x0017340c, 0x00000000, 0x00173410, 0x00000000, 0x00173414, 0x00000000,
    0x00173418, 0x00000000, 0x0017341c, 0x00000000, 0x00173420, 0x00000276, 0x00173424, 0x0000027f, 0x00173428,
    0x000002a3, 0x0017342c, 0x000002a8, 0x00173430, 0x000002ad, 0x00173434, 0x000002de, 0x00173438, 0x000002de,
    0x0017343c, 0x000002de, 0x00173440, 0x000002de, 0x00173444, 0x000002de, 0x00173448, 0x000002de, 0x0017344c,
    0x000002de, 0x00173450, 0x000002de, 0x00173454, 0x000002de, 0x00173458, 0x000002de, 0x0017345c, 0x000002de,
    0x00173460, 0x00000000, 0x00173464, 0x00000000, 0x00173468, 0x00000000, 0x0017346c, 0x00000000, 0x00173470,
    0x00000000, 0x00173474, 0x00000000, 0x00173478, 0x00000000, 0x0017347c, 0x00000000, 0x00173480, 0x00000000,
    0x00173484, 0x00000000, 0x00173488, 0x00000000, 0x0017348c, 0x00000000, 0x00173490, 0x00000000, 0x00173494,
    0x00000000, 0x00173498, 0x00000000, 0x0017349c, 0x00000000, 0x001734a0, 0x00000000, 0x001734a4, 0x00000000,
    0x001734a8, 0x00000000, 0x001734ac, 0x00000000, 0x001734b0, 0x00000000, 0x001734b4, 0x00000000, 0x001734b8,
    0x00000000, 0x001734bc, 0x00000000, 0x001734c0, 0x00000000, 0x001734c4, 0x00000000, 0x001734c8, 0x00000000,
    0x001734cc, 0x00000000, 0x001734d0, 0x00000000, 0x001734d4, 0x00000000, 0x001734d8, 0x00000000, 0x001734dc,
    0x00000000, 0x001734e0, 0x00000155, 0x001734e4, 0x00000177, 0x001734e8, 0x0000017c, 0x001734ec, 0x00000181,
    0x001734f0, 0x00000186, 0x001734f4, 0x0000018b, 0x001734f8, 0x00000190, 0x001734fc, 0x00000195, 0x00173500,
    0x000002de, 0x00173504, 0x000002de, 0x00173508, 0x000002de, 0x0017350c, 0x000002de, 0x00173510, 0x000002de,
    0x00173514, 0x000002de, 0x00173518, 0x000002de, 0x0017351c, 0x000002de, 0x00173520, 0x00000000, 0x00173524,
    0x00000000, 0x00173528, 0x00000000, 0x0017352c, 0x00000000, 0x00173530, 0x00000000, 0x00173534, 0x00000000,
    0x00173538, 0x00000000, 0x0017353c, 0x00000000, 0x00173540, 0x00000000, 0x00173544, 0x00000000, 0x00173548,
    0x00000000, 0x0017354c, 0x00000000, 0x00173550, 0x00000000, 0x00173554, 0x00000000, 0x00173558, 0x00000000,
    0x0017355c, 0x00000000, 0x00173560, 0x00080000, 0x00173564, 0x03020100, 0x00173568, 0x00000504, 0x0017356c,
    0x00000000, 0x00173570, 0x00000000, 0x00173574, 0x00000000, 0x00173578, 0x00000000, 0x0017357c, 0x00000000,
    0x00173580, 0x00000000, 0x00173584, 0x00000000, 0x00173588, 0x00000000, 0x0017358c, 0x00000000, 0x00173590,
    0x00000000, 0x00173594, 0x00000000, 0x00173598, 0x00000000, 0x0017359c, 0x00000000, 0x001735a0, 0x00000000,
    0x001735a4, 0x00000000, 0x001735a8, 0x00000000, 0x001735ac, 0x00000000, 0x001735b0, 0x00000000, 0x001735e0,
    0x00000000, 0x001735e4, 0x00000000, 0x001735e8, 0x00000000, 0x001735ec, 0x00000000, 0x001735f0, 0x00000000,
    0x001735f4, 0x00000000, 0x001735f8, 0x00000000, 0x001735fc, 0x00000000, 0x00173fd0, 0x0250607f, 0x00173fd8,
    0x0253007a, 0x00173fe0, 0x0852087b, 0x00173fe8, 0x0851887c, 0x00173ff0, 0x085503fd, 0x00173ff8, 0x0854837e,
};

static unsigned int rpu_eth1[] = {
    0x00f40401, 0x915fdb81, 0x01e7fffd, 0x915fdb82, 0x01e3fffd, 0x915fdb83, 0x012bff01, 0x915fdb84, 0x01240001,
    0x915fdb85, 0x00ac17bd, 0x915fdb86, 0x00dc0000, 0x001be686, 0x20dc0000, 0x001c1c87, 0x0137f811, 0x91561ca4,
    0x20c000c9, 0x8d9e1ca4, 0x0137fe41, 0x91481b8d, 0x00dc0000, 0x001be689, 0x00101800, 0x21dfdbac, 0x20700021,
    0x82b61ca4, 0x007000c9, 0x859fdb8f, 0x20dc0000, 0x001e1ca4, 0x1c700020, 0xf2bfdb91, 0x20dc0000, 0x001e1ca4,
    0x20dc0000, 0x001e1ca4, 0x1c700020, 0xf2be1911, 0x00ac17cd, 0x91485b95, 0x20dc0000, 0x001c1c9b, 0x00dc0000,
    0x00185cab, 0x00100c00, 0x21c91aac, 0x20dc0000, 0x001c1ca8, 0x18dc0000, 0x00185cab, 0x04700020, 0xf2ba1c95,
    0x00dc0000, 0x001be524, 0x00100c00, 0x21c91aac, 0x00100400, 0x21ce1b9f, 0x00101c00, 0x21c8c91f, 0x0137feb1,
    0x915fdba0, 0x00120000, 0x21d08920, 0x00dc0000, 0x001fdba2, 0x00100001, 0x9153c222, 0x00dc0000, 0x001fdb81,
    0x00c8005a, 0x52305cab, 0x00101400, 0x21c89b2c, 0x00101000, 0x21ca1bac, 0x00101400, 0x21dfdb9f, 0x00dc0000,
    0x001be524, 0x00100800, 0x21ce1b9f, 0x00dc0000, 0x001fdb9e, 0x00100400, 0x21dfdbac, 0x00dc0000, 0x00181cac,
    0x00dc0000, 0x001fdb9f,
};

static unsigned int rpu_eth1_patch[] = {
    0x0016184c, 0x00000000, 0x0016189c, 0x0000dd7b, 0x001618a0, 0x0000c704, 0x001618f0, 0x00000200, 0x00161934,
    0x00000000, 0x0016193c, 0x0000ff00, 0x00161940, 0x0000d500, 0x00161944, 0x0000ffff, 0x00161948, 0x00000081,
    0x001619d8, 0x00001db7, 0x001619dc, 0x000004c1, 0x001619e8, 0x000003f8,
};

static unsigned int tpu_eth1[] = {
    0x010c0041, 0x915fdb81, 0x01fbfffd, 0x915fdb82, 0x01f7fffd, 0x915fdb83, 0x012ffdfd, 0x915fdb84,
    0x00dc0000, 0x001bc92d, 0x01380001, 0x91489c86, 0x01390001, 0x914ba707, 0x00dc0000, 0x001bc92d, 0x00b00020,
    0xea97c285, 0x00b000b0, 0xeddfdb8a, 0x01300001, 0x627fdb8b, 0x00dc0000, 0x001b8293, 0x01380001, 0x91489c8d,
    0x00c80102, 0x727fdb8e, 0x00dc0000, 0x00199b10, 0x00dc0000, 0x001fdb8c, 0x00c80182, 0x727fdb91, 0x00dc0000,
    0x00199b16, 0x00dc0000, 0x001fdb90, 0x00a40020, 0xea918913, 0x00a400a4, 0xedd18914, 0x00ec0005, 0x9157d995,
    0x20855555, 0x915fdb97, 0x00ec0005, 0x915fdb98, 0x013bff11, 0x915fdb99, 0x28dc0000, 0x0018dcd3, 0x00840035,
    0x91565919, 0x281800c5, 0x955fdb9c, 0x00148000, 0x29d8dcd7, 0x048400c8, 0xed9fdb9e, 0x28dc0000, 0x0018dcdd,
    0x3cc800c9, 0x0d58dcdd, 0x00dc0000, 0x001d891d, 0x008401f5, 0x94bfdba2, 0x28dc0000, 0x0018dcdd, 0x00141000,
    0x29cfd924, 0x28dc0000, 0x0018dcdd, 0x28dc0000, 0x0018dcdd, 0x288401f9, 0x94b0dcdd, 0x28dc0000, 0x0018dcdd,
    0x28dc0000, 0x0018dcdd, 0x28dc0000, 0x0018dcdd, 0x0084000d, 0x08cfd92b, 0x28ec0001, 0x9150dcdd, 0x0087fffd,
    0x915bd96d, 0x01390001, 0x914ba72e, 0x00dc0000, 0x001fc905, 0x00b00020, 0xea97c2ad, 0x00b000b0, 0xeddfdbb1,
    0x01300001, 0x627fdbb2, 0x00dc0000, 0x001b82b6, 0x00c80182, 0x727fdbb4, 0x00dc0000, 0x00199b39, 0x00dc0000,
    0x001fdbb3, 0x00a40020, 0xea918936, 0x00a400a4, 0xedd18937, 0x00ec0005, 0x9157d9b8, 0x20855555, 0x915fdbba,
    0x00ec0005, 0x915fdbbb, 0x013bff11, 0x915fdbbc, 0x20dc0000, 0x001fdbbd, 0x00840035, 0x9156593c, 0x201800c5,
    0x955fdbbf, 0x00148000, 0x29dfdbc0, 0x048400c8, 0xed9fdbc1, 0x20dc0000, 0x001fdbc2, 0x34c800c9, 0x0d5fdbc3,
    0x00dc0000, 0x001d8940, 0x008401f5, 0x94bfdbc5, 0x20dc0000, 0x001fdbc6, 0x00141000, 0x29cfd947, 0x20dc0000,
    0x001fdbc8, 0x20dc0000, 0x001fdbc9, 0x20dc0000, 0x001fdbca, 0x008401f9, 0x94bfdbcb, 0x20dc0000, 0x001fdbcc,
    0x20dc0000, 0x001fdbcd, 0x20dc0000, 0x001fdbce, 0x0084000d, 0x08cfd94f, 0x20ec0001, 0x915fdbd0, 0x0087fffd,
    0x915bd96d, 0x01380001, 0x915fdbd2, 0x0015fffc, 0x291fdb81, 0x00840035, 0x914a5956, 0x20dc0000, 0x001fdbd5,
    0x00840035, 0x91565953, 0x20140400, 0x29dfdbd8, 0x00140400, 0x29dfdbd8, 0x013bff81, 0x915fdbd9, 0x0086aaab,
    0xe8dfdbda, 0x20dc0000, 0x001fdbdb, 0x00ec0001, 0x9156595a, 0x0087fffd, 0x915fdbd1, 0x013bff81, 0x915fdbde,
    0x0086aaab, 0xe8dfdbdf, 0x20140400, 0x29cbe5e0, 0x00ec0001, 0x9156595e, 0x0087fffd, 0x915fdbe2, 0x00140800,
    0x29cfe5e3, 0x00dc0000, 0x001fdbd1, 0x20ec000d, 0x915fdbe5, 0x00dc0000, 0x001fdbe6, 0x013bffd1, 0x915fdbe9,
    0x013bffc1, 0x915fdbe8, 0x00855557, 0xe8dfdbe9, 0x213bffc1, 0x91565969, 0x00855557, 0xf0dfdbeb, 0x20dc0000,
    0x001e596b, 0x00ec0001, 0x915fdbd1, 0x00140c00, 0x29cf096e, 0x00dc0000, 0x001fdbd1,
};

static unsigned int tpu_eth1_patch[] = {
    0x00161884, 0x0000ffff, 0x00161888, 0x00000000, 0x001618a8, 0x0000ffff, 0x00161938, 0x00000000, 0x001619ec,
    0x00001db7, 0x001619f0, 0x000004c1, 0x001619fc, 0x000002f9,
};

static unsigned int xpec_eth1_mac[] = {
    0x0a00c2df, 0x0a28e2e0, 0x0580c2e1, 0x3600c000, 0x0400c813, 0x1080c813, 0x2800c000, 0x3680c000, 0x3700c000,
    0x0480c813, 0x1100c813, 0x2880c000, 0x1cf2e2e2, 0x0000c2e3, 0x00b9b839, 0x40810000, 0x09f242e4, 0xa6000014,
    0x1cf2e2e5, 0xbe000015, 0x1cf222e5, 0x09f242e6, 0xa6000019, 0x1cf2e2e7, 0xbe00001a, 0x1cf222e7, 0x0e80c2e8,
    0x0f00c2e9, 0x0e00c2ea, 0x0f80c2eb, 0x0a80c2ec, 0x0b00c2ed, 0x2700c3e8, 0xc0fff000, 0x0d00c826, 0x0d80c824,
    0x30c28001, 0x30c26001, 0x0011a83d, 0x0001083d, 0x00b682ee, 0x013682ef, 0x09810801, 0x9600002e, 0x0180c2f0,
    0x01071802, 0x0080c2f1, 0x0100e802, 0x410100c1, 0x0080c2f2, 0x09b70530, 0x92000035, 0x0d3502f3, 0x4d0100c1,
    0x0e80c2f4, 0x2800c000, 0xaf220038, 0x29cb0000, 0x8e00003e, 0x30c2e004, 0x042702e7, 0xbe000049, 0xaf04003e,
    0x044ae2e7, 0x001082f5, 0x002db800, 0x008172f6, 0x001082f7, 0x0021b800, 0x21817618, 0x0100c2f8, 0x00870801,
    0x408100c2, 0x29c24001, 0xa6000059, 0x29c24004, 0xa6000053, 0x0100c2f9, 0x2080c003, 0x0183052e, 0x418100c2,
    0x0180c2fa, 0x418102c2, 0x0d00c2fb, 0x0d80c2fc, 0x0080c2fd, 0x0300c2fe, 0x2680c008, 0x430180c1, 0x29c24004,
    0xa6000061, 0x0100c2ff, 0x2080c003, 0x0183052e, 0x418100c2, 0x0180c300, 0x418102c2, 0x0d00c301, 0x0d80c302,
    0x0080c2fd, 0x0380c303, 0x2680c008, 0x438180c1, 0x21a11006, 0x8e00006b, 0x0687a803, 0xc0fff000, 0x0081852f,
    0x0000c304, 0x61010141, 0x41010140, 0x61010141, 0x41010140, 0x61010141, 0x41010140, 0x49810040, 0x29c24004,
    0xa600007d, 0x0100c305, 0x2080c001, 0x20830600, 0x0183052e, 0x418100c2, 0x0180c306, 0x418102c2, 0x0e80c307,
    0x2680c008, 0xc0fff000, 0x0000c304, 0x0180c308, 0x0080c813, 0x00826d00, 0x00826d00, 0x00826d00, 0x00826d00,
    0x00826d00, 0x00826d00, 0x408100c3, 0x0100c309, 0x0007b801, 0x400100c2, 0x0100c30a, 0x20028007, 0x20012001,
    0x400100c2, 0x0e80c30b, 0x2680c008, 0xc0fff000, 0x2180c001, 0x01868558, 0xa6000099, 0x30c2e010, 0xbe0000b5,
    0x00270528, 0x29808001, 0xa60000ad, 0x00270528, 0x098102f3, 0x860000a5, 0x00270529, 0x098102ee, 0x860000a5,
    0x30c2e400, 0x30c2e010, 0xbe0000b5, 0x30c2e200, 0x0080c30c, 0x00830533, 0x00270534, 0x09808c01, 0xa60000b5,
    0x30c2e010, 0xbe0000b5, 0x30c2e100, 0x00270528, 0x09810559, 0x860000b5, 0x00270529, 0x0981055a, 0x860000b5,
    0x30c2e010, 0x0e80c30d, 0x2680c008, 0xc0fff000, 0x21a1100c, 0x8e0000bc, 0x0687a803, 0xc0fff000, 0x008d852f,
    0x0000c30e, 0x61010141, 0x41010140, 0x61010141, 0x41010140, 0x61010141, 0x41010140, 0x49810040, 0x0e80c30f,
    0x2680c008, 0xc0fff000, 0x0000c30e, 0x0180c310, 0x00a66d00, 0x00826d00, 0x00826d00, 0x00826d00, 0x00826d00,
    0x00826d00, 0x408100c3, 0x0100c311, 0x0007b801, 0x400100c2, 0x0100c312, 0x20028007, 0x20012001, 0x400100c2,
    0x0027052a, 0x29808001, 0xa60000e5, 0x0027052a, 0x098102f3, 0x860000e3, 0x0027052b, 0x098102ee, 0x860000e3,
    0x10c2e2e7, 0xbe0000e6, 0x10c2e313, 0xbe0000e6, 0x10c2e2e5, 0x0e80c314, 0x2680c008, 0xc0fff000, 0x21a11012,
    0x8e0000ed, 0x0687a803, 0xc0fff000, 0x0099852f, 0x0e80c2ee, 0x610101c1, 0x018482ee, 0x29870081, 0x820000f7,
    0x0000c315, 0x041022f6, 0x30c22002, 0x41018040, 0x0000c316, 0x0410e2f6, 0x410100c0, 0x01048317, 0x012bb802,
    0x0000c318, 0x00008558, 0x0021b800, 0x09810802, 0x96000103, 0x30c22002, 0xbe000104, 0x30c2e002, 0x0000c315,
    0x61010041, 0x410180c0, 0x5e818106, 0x098d0303, 0x82000115, 0x09f28319, 0xa600010e, 0x2600c008, 0xbe000110,
    0x2680c050, 0xbe000110, 0x09a7080d, 0x86000110, 0x09f2831a, 0xa6000115, 0x5e810106, 0x230d0020, 0x0080c2f8,
    0x20270020, 0x0001052e, 0x400100c1, 0x30c26001, 0x0380c303, 0x0d00c301, 0x0d80c302, 0x29c24004, 0xa6000021,
    0x0100c2ff, 0x2080c003, 0x0183052e, 0x418100c2, 0x0180c300, 0x418182c2, 0x5e818107, 0x098f031b, 0x82000134,
    0x09f28319, 0xa600012d, 0x2680c008, 0xbe00012f, 0x2680c050, 0xbe00012f, 0x09a7080d, 0x8600012f, 0x09f2831a,
    0xa6000134, 0x5e810107, 0x238f0020, 0x0080c2f8, 0x20270020, 0x0001052e, 0x400100c1, 0x30c26001, 0x0300c2fe,
    0x0d00c2fb, 0x0d80c2fc, 0x29c24004, 0xa6000021, 0x0100c2f9, 0x2080c003, 0x0183052e, 0x418100c2, 0x0180c2fa,
    0x418182c2, 0x01d882df, 0x165822f6, 0x3cf2e400, 0x0e80c2e8, 0x0d00c2ee, 0x0d80c2ee, 0x3cf22400, 0x00899810,
    0x0410e801, 0x0100c31c, 0x0011b803, 0x00b9a800, 0x0402e808, 0x0300c2f3, 0x690400d0, 0x0380c2f3, 0x0080c31d,
    0x00038561, 0x400100c1, 0xbe000159, 0x29c28004, 0xa600015f, 0x0080c31e, 0x00038568, 0x400100c1, 0xc0fff000,
    0x29c28010, 0xa600019f, 0x29c28002, 0xa600016d, 0x29c28010, 0xa6000021, 0x81848000, 0x1280c808, 0xae000167,
    0x00270558, 0x0980831f, 0xa6000021, 0x31c6e002, 0xc0fff000, 0x29c28010, 0xa6000021, 0x81850000, 0x1280c808,
    0xae000171, 0x00270558, 0x09808320, 0xa6000021, 0x31c6e008, 0xc0fff000, 0x0080c321, 0x00038562, 0x400100c1,
    0x0410e2e0, 0xbe00019a, 0x0080c322, 0x00038563, 0x400100c1, 0x0410e323, 0xbe00019a, 0x0080c324, 0x00038564,
    0x400100c1, 0x0410e325, 0xbe00019a, 0x0080c326, 0x00038565, 0x400100c1, 0x0410e327, 0xbe00019a, 0x0080c328,
    0x00038566, 0x400100c1, 0x0410e329, 0xbe00019a, 0x0080c32a, 0x00038567, 0x400100c1, 0x0410e32b, 0xbe00019a,
    0x0080c32c, 0x00038569, 0x400100c1, 0x0410e32d, 0xbe00019a, 0x29c24004, 0xa6000021, 0x00270558, 0x29804002,
    0xa600015f, 0x81840000, 0x1290832e, 0xae0001a1, 0xc0fff000, 0xaf0581a3, 0x0480c825, 0x3144e008, 0xbe0001ab,
    0xaf0601a7, 0x0480c825, 0x31442008, 0xbe0001ab, 0x0e00c2ee, 0x0f80c2ee, 0x0000c32f, 0x0100c330, 0x009282f5,
    0x00adb801, 0x008372f6, 0x019282f7, 0x01a1b803, 0x21877618, 0x00870801, 0x408100c0, 0x408100c2, 0x0100c331,
    0x201287ff, 0x400100c2, 0x0180c332, 0x00c19800, 0x408100c3, 0x2981003c, 0x8a0001e1, 0x099282f6, 0xa60001c4,
    0x298105ee, 0x920001e1, 0x298105ea, 0x920001e1, 0x0f80c333, 0x31446002, 0x2880c000, 0x1e91b800, 0x3e8080ff,
    0x29c44002, 0xa60001d7, 0x0280c334, 0x0500c335, 0x0e00c336, 0x31442001, 0x0100c337, 0x2080c000, 0x01830500,
    0x418100c2, 0x0180c338, 0x418182c2, 0x0280c339, 0x0500c33a, 0x0e00c33b, 0x3144e001, 0x0100c33c, 0x2080c000,
    0x01830500, 0x418100c2, 0x0180c33d, 0x418182c2, 0x0039b327, 0xbe0002b2, 0x16a702f6, 0x0b80c2ee, 0x0c00c33e,
    0x0c80c33f, 0xbe00020f, 0x16a702f6, 0x0b80c2ee, 0x0c00c33e, 0x0c80c33f, 0xbe00022a, 0x0b80c826, 0x0c80c824,
    0x005c82ee, 0x00b282ee, 0x013282ef, 0x09810801, 0x960001f6, 0x0180c2f0, 0x01071802, 0x0080c340, 0x0100e802,
    0x410100c1, 0x0080c341, 0x09b30506, 0x920001fd, 0x0baf02f3, 0x4b8100c1, 0x0c80c342, 0x0b80c343, 0x0100c344,
    0x2080c001, 0x20830600, 0x01830500, 0x418100c2, 0x0180c345, 0x418182c2, 0x29c48001, 0xa600020b, 0x2600c020,
    0xc0fff000, 0x29c48004, 0xa600020f, 0x0e00c2ee, 0xc0fff000, 0x2180c020, 0x0100c330, 0x00870501, 0x408100c2,
    0x0000c332, 0x09870503, 0x8a000218, 0x498100c0, 0xbe00021a, 0x00871503, 0x408100c0, 0x0e00c346, 0x3144e002,
    0x0100c33c, 0x2080c000, 0x01830501, 0x418100c2, 0x0180c33d, 0x418182c2, 0x29c44001, 0xa6000226, 0x2600c020,
    0xc0fff000, 0x29c48004, 0xa600022a, 0x0e00c2ee, 0xc0fff000, 0x2180c020, 0x0100c330, 0x00870501, 0x408100c2,
    0x0000c332, 0x09870503, 0x8a000233, 0x498100c0, 0xbe000235, 0x00871503, 0x408100c0, 0x0e00c347, 0x31442002,
    0x0100c337, 0x2080c000, 0x01830501, 0x418100c2, 0x0180c338, 0x418182c2, 0x7e818105, 0x0021b80a, 0x00008348,
    0x098b0800, 0x82000021, 0x0c80c349, 0x09a60813, 0xc0fff000, 0x7e810105, 0x0c80c342, 0xc0fff000, 0x29c44004,
    0xa6000268, 0x0000c331, 0x2100c020, 0x00851502, 0x408100c0, 0x09850502, 0x8a00025e, 0x3144e004, 0x01270502,
    0x29c44001, 0xa6000259, 0x0280c339, 0x010b0802, 0x0521a802, 0x3144e001, 0xc0fff000, 0x0280c334, 0x010b0802,
    0x0521a802, 0x31442001, 0xc0fff000, 0x29c44001, 0xa6000264, 0x0280c339, 0x0500c33a, 0x3144e001, 0xc0fff000,
    0x0280c334, 0x0500c335, 0x31442001, 0xc0fff000, 0x31442004, 0x0c00c2ee, 0x0c80c2ee, 0x0b80c2ee, 0xc0fff000,
    0x0c00c2ee, 0x0c80c2ee, 0x0b80c2ee, 0x0100c34a, 0x005a82df, 0x0091b800, 0x1cf2e34b, 0x690400d1, 0x1cf2234b,
    0x0080c34c, 0x0003855b, 0x400100c1, 0x09818504, 0x8600027d, 0x2492e000, 0xbe0002b2, 0x0492e2e4, 0xbe0002b2,
    0x09818504, 0x86000285, 0x0080c34d, 0x0003855c, 0x400100c1, 0xbe00028c, 0x0080c34e, 0x0003855d, 0x400100c1,
    0x099f8504, 0x9200028c, 0x0492e325, 0xbe0002b2, 0x0000c34f, 0x00838504, 0x408100c0, 0x09958504, 0x8a000293,
    0x00a70504, 0xbe000294, 0x20a7000a, 0x0180c350, 0x00486351, 0x008302f3, 0x20832002, 0x008302f3, 0x00028800,
    0x20017200, 0x09f24319, 0xa600029e, 0x2001700a, 0x400100c3, 0x0f80c352, 0x0e00c2ee, 0x06158505, 0xc0fff000,
    0x0080c353, 0x0003855e, 0x400100c1, 0x0492e2e0, 0xbe0002b2, 0x0080c354, 0x0003855f, 0x400100c1, 0x0492e323,
    0xbe0002b2, 0x0080c355, 0x00038560, 0x400100c1, 0x0492e32b, 0xbe0002b2, 0x29c48008, 0xa60002bc, 0x81868000,
    0x1280c809, 0xae0002b6, 0x00270558, 0x09808356, 0xa60002c3, 0x31c6e001, 0xbe0002c3, 0x81870000, 0x1280c809,
    0xae0002be, 0x00270558, 0x09808357, 0xa60002c3, 0x31c6e004, 0x0000c34f, 0x0f80c2ea, 0x0e00c2eb, 0x498180c0,
    0x0000c2e3, 0x00b9b839, 0x40810000, 0x09f242e4, 0xa60002ce, 0x1cf2e2e5, 0xbe0002cf, 0x1cf222e5, 0x00270558,
    0x09808358, 0xa6000021, 0x31c6e010, 0xc0fff000, 0x0000c2e3, 0x00b9b839, 0x40810000, 0x09f242e6, 0xa60002db,
    0x1cf2e2e7, 0xbe0002dc, 0x1cf222e7, 0x2700c3e8, 0xc0fff000, 0xc0000fff, 0x00000f00, 0x80000000, 0x15601540,
    0x0000a000, 0x000015b4, 0x10000000, 0x00001000, 0x20000000, 0x00004000, 0x8022ffb7, 0x8145ff57, 0x89a3ffc9,
    0x89a7ffca, 0xdac71c1c, 0x92d4ff42, 0x0000ffff, 0xffff0000, 0x00010000, 0x000014c0, 0x000014c4, 0xffffffff,
    0x9067ff41, 0x03c00000, 0x00008000, 0x003f0000, 0x000014b8, 0x00001ffc, 0x0854877e, 0x0107b4b7, 0x9908ffb4,
    0x000014bc, 0x00001520, 0x00001ff4, 0x085507fd, 0x0126b5b7, 0x9927ffb5, 0x00001540, 0x000014a0, 0x00001fdc,
    0x0253047a, 0x9080ff41, 0x000014c8, 0x000014cc, 0x000014d0, 0x9094ff41, 0x000015e0, 0x90b8ff41, 0x000014a8,
    0x90c8ff41, 0x000014d4, 0x000014d8, 0x000014dc, 0x00002000, 0x90e9ff41, 0x000014b0, 0x000014b4, 0x00e00000,
    0x000f0000, 0x40000000, 0x00040000, 0x00001560, 0x000014e0, 0x00001584, 0x000015a0, 0x00100000, 0x00200000,
    0x00001588, 0x0000158c, 0x90000000, 0x00001590, 0xa0000000, 0x00001594, 0xb0000000, 0x00001598, 0xc0000000,
    0x0000159c, 0xd0000000, 0x000015a4, 0xe0000000, 0x03ff0000, 0x00001400, 0x00001404, 0x00001408, 0x0000140c,
    0x9a6dff5b, 0x00001460, 0x14800000, 0x91e3ff8e, 0x00001fec, 0x08518c7c, 0x00001480, 0x14a00000, 0x91e8ff8f,
    0x00001fe4, 0x08520c7b, 0x023db3bb, 0x91edff59, 0x00001418, 0x0000141c, 0x023eabbb, 0x2a48abb3, 0x00001fd4,
    0x0250647f, 0xd222408f, 0xd207408e, 0x00001fff, 0x8245ff14, 0x00001420, 0x00000800, 0x0000156c, 0x00001570,
    0x00001574, 0x00001410, 0x00001414, 0x55555555, 0x91abff40, 0x00001578, 0x0000157c, 0x00001580, 0x00400000,
    0x00800000, 0x01000000,
};

static unsigned int xpec_eth1_mac_patch[] = {
    0x00174054, 0x0000ffff, 0x00174058, 0x0000ffff, 0x0017405c, 0x0000ffff, 0x00174060, 0x0000ffff, 0x00174064,
    0x0000ffff, 0x00174068, 0x0000ffff, 0x0017406c, 0x0000ffff, 0x00174070, 0x0000ffff, 0x00174074, 0x0000ffff,
    0x00174078, 0x0000ffff, 0x0017407c, 0x0000ffff, 0x00174080, 0x0000ffff, 0x00177400, 0x00000000, 0x00177404,
    0x00000000, 0x00177408, 0x00000000, 0x0017740c, 0x00000000, 0x00177410, 0x00000000, 0x00177414, 0x00000000,
    0x00177418, 0x00000000, 0x0017741c, 0x00000000, 0x00177420, 0x00000276, 0x00177424, 0x0000027f, 0x00177428,
    0x000002a3, 0x0017742c, 0x000002a8, 0x00177430, 0x000002ad, 0x00177434, 0x000002de, 0x00177438, 0x000002de,
    0x0017743c, 0x000002de, 0x00177440, 0x000002de, 0x00177444, 0x000002de, 0x00177448, 0x000002de, 0x0017744c,
    0x000002de, 0x00177450, 0x000002de, 0x00177454, 0x000002de, 0x00177458, 0x000002de, 0x0017745c, 0x000002de,
    0x00177460, 0x00000000, 0x00177464, 0x00000000, 0x00177468, 0x00000000, 0x0017746c, 0x00000000, 0x00177470,
    0x00000000, 0x00177474, 0x00000000, 0x00177478, 0x00000000, 0x0017747c, 0x00000000, 0x00177480, 0x00000000,
    0x00177484, 0x00000000, 0x00177488, 0x00000000, 0x0017748c, 0x00000000, 0x00177490, 0x00000000, 0x00177494,
    0x00000000, 0x00177498, 0x00000000, 0x0017749c, 0x00000000, 0x001774a0, 0x00000000, 0x001774a4, 0x00000000,
    0x001774a8, 0x00000000, 0x001774ac, 0x00000000, 0x001774b0, 0x00000000, 0x001774b4, 0x00000000, 0x001774b8,
    0x00000000, 0x001774bc, 0x00000000, 0x001774c0, 0x00000000, 0x001774c4, 0x00000000, 0x001774c8, 0x00000000,
    0x001774cc, 0x00000000, 0x001774d0, 0x00000000, 0x001774d4, 0x00000000, 0x001774d8, 0x00000000, 0x001774dc,
    0x00000000, 0x001774e0, 0x00000155, 0x001774e4, 0x00000177, 0x001774e8, 0x0000017c, 0x001774ec, 0x00000181,
    0x001774f0, 0x00000186, 0x001774f4, 0x0000018b, 0x001774f8, 0x00000190, 0x001774fc, 0x00000195, 0x00177500,
    0x000002de, 0x00177504, 0x000002de, 0x00177508, 0x000002de, 0x0017750c, 0x000002de, 0x00177510, 0x000002de,
    0x00177514, 0x000002de, 0x00177518, 0x000002de, 0x0017751c, 0x000002de, 0x00177520, 0x00000000, 0x00177524,
    0x00000000, 0x00177528, 0x00000000, 0x0017752c, 0x00000000, 0x00177530, 0x00000000, 0x00177534, 0x00000000,
    0x00177538, 0x00000000, 0x0017753c, 0x00000000, 0x00177540, 0x00000000, 0x00177544, 0x00000000, 0x00177548,
    0x00000000, 0x0017754c, 0x00000000, 0x00177550, 0x00000000, 0x00177554, 0x00000000, 0x00177558, 0x00000000,
    0x0017755c, 0x00000000, 0x00177560, 0x00080000, 0x00177564, 0x03020100, 0x00177568, 0x00000504, 0x0017756c,
    0x00000000, 0x00177570, 0x00000000, 0x00177574, 0x00000000, 0x00177578, 0x00000000, 0x0017757c, 0x00000000,
    0x00177580, 0x00000000, 0x00177584, 0x00000000, 0x00177588, 0x00000000, 0x0017758c, 0x00000000, 0x00177590,
    0x00000000, 0x00177594, 0x00000000, 0x00177598, 0x00000000, 0x0017759c, 0x00000000, 0x001775a0, 0x00000000,
    0x001775a4, 0x00000000, 0x001775a8, 0x00000000, 0x001775ac, 0x00000000, 0x001775b0, 0x00000000, 0x001775e0,
    0x00000000, 0x001775e4, 0x00000000, 0x001775e8, 0x00000000, 0x001775ec, 0x00000000, 0x001775f0, 0x00000000,
    0x001775f4, 0x00000000, 0x001775f8, 0x00000000, 0x001775fc, 0x00000000, 0x00177fd0, 0x0250607f, 0x00177fd8,
    0x0253007a, 0x00177fe0, 0x0852087b, 0x00177fe8, 0x0851887c, 0x00177ff0, 0x085503fd, 0x00177ff8, 0x0854837e,
};