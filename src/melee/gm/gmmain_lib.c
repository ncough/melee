#include "gm/gmmain_lib.h"

#include "lb/lbtime.h"

/* 15D888 */ static void gmMainLib_8015D888(u32);

GameRules* gmMainLib_8015CC34(void)
{
    return &gmMainLib_804D3EE0->x1850;
}

void* gmMainLib_8015CC40(void)
{
    return &gmMainLib_804D3EE0->thing.x1868;
}

void* gmMainLib_8015CC4C(void)
{
    return &gmMainLib_804D3EE0->thing.x2FF8;
}

struct gmm_x1CB0* gmMainLib_8015CC58(void)
{
    return &gmMainLib_804D3EE0->thing.x1CB0;
}

void* gmMainLib_8015CC64(s32 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return &base[arg0];
}

void* gmMainLib_8015CC78(void)
{
    return &gmMainLib_804D3EE0->thing.x1CD4;
}

void* gmMainLib_8015CC84(void)
{
    return &gmMainLib_804D3EE0->thing.x1CD2;
}

void* gmMainLib_8015CC90(void)
{
    return &gmMainLib_804D3EE0->thing.x1CD0;
}

void* gmMainLib_8015CC9C(s32 arg0)
{
    struct gmm_x2FF8* base = &gmMainLib_804D3EE0->thing.x2FF8[0];
    struct gmm_x2FF8_inner* inner = &base[arg0 / 19].inner[0];
    return &inner[arg0 % 19];
}

void* gmMainLib_8015CCE4(void)
{
    return &gmMainLib_804D3EE0->x44;
}

void* gmMainLib_8015CCF0(void)
{
    return &gmMainLib_804D3EE0->thing.x1A48;
}

void* gmMainLib_8015CCFC(void)
{
    return &gmMainLib_804D3EE0->thing.x1A4C;
}

void* gmMainLib_8015CD08(void)
{
    return &gmMainLib_804D3EE0->thing.x1A30;
}

void* gmMainLib_8015CD14(void)
{
    return &gmMainLib_804D3EE0->thing.x1A34;
}

void* gmMainLib_8015CD20(void)
{
    return &gmMainLib_804D3EE0->thing.x1A38;
}

void* gmMainLib_8015CD2C(void)
{
    return &gmMainLib_804D3EE0->thing.x1A18;
}

void* gmMainLib_8015CD38(void)
{
    return &gmMainLib_804D3EE0->thing.x1A1C;
}

void* gmMainLib_8015CD44(void)
{
    return &gmMainLib_804D3EE0->thing.x1A20;
}

void* gmMainLib_8015CD50(void)
{
    return &gmMainLib_804D3EE0->thing.x1A24;
}

void* gmMainLib_8015CD5C(void)
{
    return &gmMainLib_804D3EE0->thing.x1A28;
}

void* gmMainLib_8015CD68(void)
{
    return &gmMainLib_804D3EE0->thing.x1A2C;
}

void* gmMainLib_8015CD74(void)
{
    return &gmMainLib_804D3EE0->thing.x1A3C;
}

void* gmMainLib_8015CD80(void)
{
    return &gmMainLib_804D3EE0->thing.x1A44;
}

void* gmMainLib_8015CD8C(void)
{
    return &gmMainLib_804D3EE0->thing.x1A50;
}

void* gmMainLib_8015CD98(void)
{
    return &gmMainLib_804D3EE0->thing.x1A54;
}

void* gmMainLib_8015CDA4(void)
{
    return &gmMainLib_804D3EE0->thing.x1A58;
}

void* gmMainLib_8015CDB0(void)
{
    return &gmMainLib_804D3EE0->thing.x1A5C;
}

void* gmMainLib_8015CDBC(void)
{
    return &gmMainLib_804D3EE0->thing.x1A60;
}

void* gmMainLib_8015CDC8(void)
{
    return &gmMainLib_804D3EE0->x51C;
}

void* gmMainLib_8015CDD4(void)
{
    return &gmMainLib_804D3EE0->x522;
}

void* gmMainLib_8015CDE0(void)
{
    return &gmMainLib_804D3EE0->x528;
}

void gmMainLib_8015CDEC(void)
{
    s32 i;
    for (i = 0; i < 6; ++i) {
        s8* ptr = gmMainLib_8015CE44(i, 0x78);
        if (ptr != 0) {
            *ptr = 5;
        }
    }
}

s8* gmMainLib_8015CE44(s32 arg0, s32 arg1)
{
    if (arg1 == 0x78) {
        if (arg0 < 4) {
            return &gmMainLib_804D3EE0->x588[arg0];
        }
        return 0;
    } else {
        struct gmm_x2FF8* base = &gmMainLib_804D3EE0->thing.x2FF8[0];
        struct gmm_x2FF8_inner* inner = &base[arg1 / 19].inner[0];
        return &inner[arg1 % 19].x1A2;
    }
}

void gmMainLib_8015CEB4(s32 arg0)
{
    gmMainLib_804D3EE0->thing.x1A68 |= (1LL << arg0);
}

s32 gmMainLib_8015CEFC(s32 arg0)
{
    if (gmMainLib_804D3EE0->thing.x1A68 & (1LL << arg0)) {
        return 1;
    } else {
        return 0;
    }
}

s32 gmMainLib_8015CF5C(s32 arg0)
{
    return gmMainLib_804D3EE0->thing.x1A70[arg0];
}

void gmMainLib_8015CF70(s32 arg0, s32 arg1)
{
    gmMainLib_804D3EE0->thing.x1A70[arg0] = arg1;
}

void gmMainLib_8015CF84(void)
{
    gmMainLib_804D3EE0->thing.x1B3C = 1;
}

s32 gmMainLib_8015CF94(void)
{
    if (gmMainLib_804D3EE0->thing.x1B3C) {
        return 1;
    }
    return 0;
}

s32 func_8015CFAC(void)
{
    return 0;
}

s8* gmMainLib_8015CFB4(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return &base[arg0].x78;
}

s32 gmMainLib_8015CFCC(u8 arg0)
{
    return (1 << arg0) & gmMainLib_8015ED98()->xC;
}

void gmMainLib_8015D00C(u8 arg0)
{
    u8 _[12];

    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    base[arg0].x7A.bits.b0 = true;
    gmMainLib_8015ED98()->xC |= 1 << arg0;
}

s32* gmMainLib_8015D06C(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return &base[arg0].x84;
}

s32* gmMainLib_8015D084(s32 arg0)
{
    return &gmMainLib_8015EDBC()->xB0[arg0 & 0xFF];
}

s32* gmMainLib_8015D0C0(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return &base[arg0].x88;
}

s32 gmMainLib_8015D0D8(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return base[arg0].x7C.bits.b4;
}

s32 gmMainLib_8015D0F4(u8 arg0)
{
    s32 x10 = gmMainLib_8015ED98()->x10;
    return x10 & (1 << arg0);
}

void gmMainLib_8015D134(u8 arg0)
{
    u8 _[12];

    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    base[arg0].x7C.bits.b4 = true;
    gmMainLib_8015ED98()->x10 |= 1 << arg0;
}

s8* gmMainLib_8015D194(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return &base[arg0].x80;
}

s32 gmMainLib_8015D1AC(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return base[arg0].x7C.bits.b789;
}

void gmMainLib_8015D1C8(u8 arg0, s32 arg1)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    base[arg0].x7C.bits.b789 = arg1;
}

s32* gmMainLib_8015D1E8(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return &base[arg0].x8C;
}

s32 gmMainLib_8015D200(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return base[arg0].x7C.bits.b5;
}

s32 gmMainLib_8015D21C(u8 arg0)
{
    s32 x14 = gmMainLib_8015ED98()->x14;
    return x14 & (1 << arg0);
}

void gmMainLib_8015D25C(u8 arg0)
{
    u8 _[12];

    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    base[arg0].x7C.bits.b5 = true;
    gmMainLib_8015ED98()->x14 |= 1 << arg0;
}

s8* gmMainLib_8015D2BC(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return &base[arg0].x81;
}

s32 gmMainLib_8015D2D4(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return base[arg0].x7C.bits.b10_to_12;
}

void gmMainLib_8015D2F0(u8 arg0, s32 arg1)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    base[arg0].x7C.bits.b10_to_12 = arg1;
}

s32* gmMainLib_8015D310(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return &base[arg0].x90;
}

s32 gmMainLib_8015D328(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return base[arg0].x7C.bits.b6;
}

s32 gmMainLib_8015D344(u8 arg0)
{
    s32 x18 = gmMainLib_8015ED98()->x18;
    return x18 & (1 << arg0);
}

void gmMainLib_8015D384(u8 arg0)
{
    u8 _[12];

    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    base[arg0].x7C.bits.b6 = true;
    gmMainLib_8015ED98()->x18 |= 1 << arg0;
}

s8* gmMainLib_8015D3E4(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return &base[arg0].x82;
}

s32 gmMainLib_8015D3FC(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return base[arg0].x7C.bits.b13_to_15;
}

void gmMainLib_8015D418(u8 arg0, s32 arg1)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    base[arg0].x7C.bits.b13_to_15 = arg1;
}

s32* gmMainLib_8015D438(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return &base[arg0].x94;
}

s32* gmMainLib_8015D450(s32 arg0)
{
    return &gmMainLib_8015EDBC()->x4C[arg0 & 255];
}

s32 gmMainLib_8015D48C(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return base[arg0].x7C.bits.b0;
}

s32 gmMainLib_8015D4A8(u8 arg0)
{
    s32 x1C = gmMainLib_8015ED98()->x1C;
    return x1C & (1 << arg0);
}

void gmMainLib_8015D4E8(u8 arg0, s32 arg1)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    base[arg0].x7C.bits.b0 = arg1;
}

s32 gmMainLib_8015D508(void)
{
    struct gmm_x1868* base = &gmMainLib_804D3EE0->thing;
    s32 i;
    for (i = 0; i < 25; ++i) {
        struct gmm_x1F2C* _x1F2C = base->x1F2C;
        if (_x1F2C[(u8) i].x7C.bits.b0 == 0) {
            return 0;
        }
    }
    return 1;
}

s32 gmMainLib_8015D5DC(void)
{
    s32 i;
    for (i = 0; i < 0x19; i++) {
        s32 j = gmMainLib_8015EDB0()->x4;
        s32 k = 1 << (u8) i;
        if ((j & k) == 0) {
            return 0;
        }
    }
    return 1;
}

s32 gmMainLib_8015D640(void)
{
    s32 i;
    for (i = 0; i < 0x19; i++) {
        s32 j = gmMainLib_8015EDBC()->x8;
        s32 k = 1 << (u8) i;
        if ((j & k) == 0) {
            return 0;
        }
    }
    return 1;
}

s32* gmMainLib_8015D6A4(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return &base[arg0].x98;
}

s32 gmMainLib_8015D6BC(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return base[arg0].x7C.bits.b1;
}

void gmMainLib_8015D6D8(u8 arg0, s32 arg1)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    base[arg0].x7C.bits.b1 = arg1;
}

s32* gmMainLib_8015D6F8(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return &base[arg0].x9C;
}

s32 gmMainLib_8015D710(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return base[arg0].x7C.bits.b2;
}

void gmMainLib_8015D72C(u8 arg0, s32 arg1)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    base[arg0].x7C.bits.b2 = arg1;
}

s16* gmMainLib_8015D74C(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return &base[arg0].xA0;
}

s32 gmMainLib_8015D764(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return base[arg0].x7C.bits.b3;
}

void gmMainLib_8015D780(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    base[arg0].x7C.bits.b3 = 1;
}

s16* gmMainLib_8015D7A4(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return &base[arg0].xA2;
}

s32* gmMainLib_8015D7BC(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return &base[arg0].xA4;
}

s32* gmMainLib_8015D7D4(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return &base[arg0].xA8;
}

s16* gmMainLib_8015D7EC(u8 arg0)
{
    struct gmm_x1F2C* base = &gmMainLib_804D3EE0->thing.x1F2C[0];
    return &base[arg0].x7E;
}

void* gmMainLib_8015D804(s32 arg0)
{
    struct gmm_x1868* thing = &gmMainLib_804D3EE0->thing;
    return &thing->x1B80[arg0];
}

s32 gmMainLib_8015D818(u32 arg0)
{
    u8 _[40];

    if ((signed) gmMainLib_8015D94C(arg0) == 0) {
        struct gmm_x1868* base = &gmMainLib_804D3EE0->thing;
        u32* q = &base->x1B80[arg0];
        *q = lbTime_8000AFBC();
        gmMainLib_8015D888(arg0);
        gmMainLib_8015D8FC(arg0);
        return 1;
    }
    return 0;
}

void gmMainLib_8015D888(u32 arg0)
{
    u32* thing = &gmMainLib_804D3EE0->thing.x1B40[0];
    thing[arg0 / 32] |= (1 << (arg0 % 32));
}

void gmMainLib_8015D8B0(u32 arg0)
{
    u32* thing = &gmMainLib_804D3EE0->thing.x1B40[0];
    thing[arg0 / 32] &= ~(1 << (arg0 % 32));
}

s32 gmMainLib_8015D8D8(u32 arg0)
{
    u32* thing = &gmMainLib_804D3EE0->thing.x1B40[0];
    return thing[arg0 / 32] & (1 << (arg0 % 32));
}

void gmMainLib_8015D8FC(u32 arg0)
{
    u32* thing = &gmMainLib_804D3EE0->thing.x1B4C[0];
    thing[arg0 / 32] |= (1 << (arg0 % 32));
}

void gmMainLib_8015D924(u32 arg0)
{
    u32* thing = &gmMainLib_804D3EE0->thing.x1B4C[0];
    thing[arg0 / 32] &= ~(1 << (arg0 % 32));
}

u32 gmMainLib_8015D94C(u32 arg0)
{
    u32* thing = &gmMainLib_804D3EE0->thing.x1B4C[0];
    u32 flag = thing[arg0 / 32];
    return flag & (1 << (arg0 % 32));
}

u32* gmMainLib_8015D970(ssize_t idx)
{
    u32* base = &gmMainLib_804D3EE0->x6C[0];
    return &base[idx];
}

// https://decomp.me/scratch/CJy8X
// register swap
bool gmMainLib_8015D984(u32 arg0)
{
    u8 _[16];

    if (gmMainLib_8015DA90(arg0) == 0) {
        u32* base = &gmMainLib_804D3EE0->x6C[0];
        u32* qwe = &base[arg0];
        *qwe = lbTime_8000AFBC();

        gmMainLib_8015D9F4(arg0);
        gmMainLib_8015DA40(arg0);
        return true;
    }

    return false;
}

void gmMainLib_8015D9F4(u32 arg0)
{
    s32* base = &gmMainLib_804D3EE0->x44;
    base[arg0 / 32] |= (1 << (arg0 % 32));
}

s32 gmMainLib_8015DA1C(u32 arg0)
{
    s32* base = &gmMainLib_804D3EE0->x44;
    return (1 << (arg0 % 32)) & base[arg0 / 32];
}

void gmMainLib_8015DA40(u32 arg0)
{
    u32* base = &gmMainLib_804D3EE0->thing.x1B58[0];
    base[arg0 / 32] |= (1 << (arg0 % 32));
}

void gmMainLib_8015DA68(u32 arg0)
{
    u32* base = &gmMainLib_804D3EE0->thing.x1B58[0];
    base[arg0 / 32] &= ~(1 << (arg0 % 32));
}

u32 gmMainLib_8015DA90(u32 arg0)
{
    u32* base = &gmMainLib_804D3EE0->thing.x1B58[0];
    u32* qwe = &base[arg0 / 32];
    return *qwe & (1 << (arg0 % 32));
}

void gmMainLib_8015DAB4(u32 arg0)
{
    u32* base = &gmMainLib_804D3EE0->thing.x1C88[0];
    base[arg0 / 32] |= (1 << (arg0 % 32));
}

s32 gmMainLib_8015DADC(u32 arg0)
{
    u32* base = &gmMainLib_804D3EE0->thing.x1C88[0];
    return (1 << (arg0 % 32)) & base[arg0 / 32];
}

u8 gmMainLib_8015DB00(void)
{
    return gmMainLib_804D3EE0->x1;
}

void gmMainLib_8015DB0C(u8 arg0)
{
    gmMainLib_804D3EE0->x1 = arg0;
}

void gmMainLib_8015DB18(void)
{
    gmMainLib_804D3EE0->x1 += 1;
}

void gmMainLib_8015DB2C(u8 arg0, s32 arg2)
{
    struct gmm_x0* gmmthing = gmMainLib_804D3EE0;
    gmmthing->x39[arg0] = lbTime_8000AF74(gmMainLib_804D3EE0->x39[arg0], 1);
}

u8 gmMainLib_8015DB6C(u8 arg0)
{
    return gmMainLib_804D3EE0->x39[arg0];
}

void gmMainLib_8015DB80(void)
{
    int i;
    for (i = 0; i < 11; i++) {
        gmMainLib_804D3EE0->x39[(u8) i] = 0;
    }
}
