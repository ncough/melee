/// @file
/// @todo A lot of duplicate code here, can maybe be cleaned up with inlines.
#include <platform.h>
#include "it/items/forward.h"

#include "itsword.h"

#include "types.h" // IWYU pragma: keep

#include "ft/ftlib.h"
#include "it/inlines.h"
#include "it/it_266F.h"
#include "it/it_26B1.h"
#include "it/it_2725.h"
#include "it/itCommonItems.h"
#include "it/item.h"
#include "it/types.h"

#include <common_structs.h>
#include <placeholder.h>
#include <baselib/gobj.h>
#include <baselib/jobj.h>

LITERAL float const it_804DC8D0 = 0;
LITERAL float const it_804DC8D4 = -1;
LITERAL float const it_804DC8D8 = 0.3;
LITERAL float const it_804DC8DC = 1.5;
LITERAL float const it_804DC8E0 = 1;
LITERAL double const it_804DC8E8 = S32_TO_F32;
LITERAL float const it_804DC8F0 = 10.03;
LITERAL float const it_804DC8F4 = 2;
LITERAL float const it_804DC8F8 = 0.25;

/* literal */ extern char* const it_804D5220;
/* literal */ extern char* const it_804D5228;

/* 284E30 */ static void it_80284E30(Item_GObj* gobj);
/* 285084 */ static void it_80285084(Item_GObj* gobj);
/* 285140 */ static void it_80285140(Item_GObj* gobj);
/* 2851FC */ static void it_802851FC(Item_GObj* gobj);
/* 285424 */ static void it_80285424(Item_GObj* gobj);
/* 285580 */ static bool it_80285580(Item_GObj* gobj);
/* 2855C8 */ static void it_802855C8(Item_GObj* gobj);
/* 2855CC */ static bool it_802855CC(Item_GObj* gobj);
/* 2855F8 */ static void it_802855F8(Item_GObj* gobj);
/* 285744 */ static bool it_80285744(Item_GObj* gobj);
/* 28578C */ static void it_8028578C(Item_GObj* gobj);
/* 2857D8 */ static bool it_802857D8(Item_GObj* gobj);
/* 285920 */ static bool it_80285920(Item_GObj* gobj);
/* 285AF4 */ static void it_80285AF4(Item_GObj* gobj);
/* 285AF8 */ static bool it_80285AF8(Item_GObj* gobj);
/* 285F2C */ static bool it_80285F2C(Item_GObj* gobj);
/* 285F74 */ static void it_80285F74(Item_GObj* gobj);
/* 285F78 */ static bool it_80285F78(Item_GObj* gobj);

ItemStateTable it_803F5800[] = {
    { 0, it_80285580, it_802855C8, it_802855CC },
    { 0, it_80285744, it_8028578C, it_802857D8 },
    { 0, it_80285920, it_80285AF4, it_80285AF8 },
    { 1, it_80285744, it_8028578C, it_802857D8 },
    { 0, it_80285F2C, it_80285F74, it_80285F78 },
};

Item_GObj* itSword_Spawn(Vec3* pos)
{
    SpawnItem spawn;
    spawn.kind = It_Kind_Sword;
    spawn.prev_pos = *pos;
    spawn.prev_pos.z = 0;
    spawn.pos = spawn.prev_pos;
    spawn.pos.y = pos->y;
    spawn.pos.z = spawn.prev_pos.z;
    spawn.facing_dir = -1;
    spawn.x3C_damage = 0;
    spawn.vel.x = spawn.vel.y = spawn.vel.z = 0;
    spawn.x0_parent_gobj = NULL;
    spawn.x4_parent_gobj2 = spawn.x0_parent_gobj;
    spawn.x44_flag.bits.b0 = true;
    spawn.x40 = 0;
    {
        Item_GObj* gobj = Item_80268B5C(&spawn);
        if (gobj != NULL) {
            it_80285424(gobj);
        }
        return gobj;
    }
}

void it_80284E10(HSD_GObj* gobj, int arg1)
{
    it_8026EECC(gobj, arg1);
}

void it_80284E30(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    float scale_y =
        it_804DC8D8 *
        (ip->xDD4_itemVar.sword.x28 *
         (ip->xDD4_itemVar.sword.x4C * ip->xDD4_itemVar.sword.x10));
    HSD_JObjSetScaleY(ip->xBBC_dynamicBoneTable->bones[6], scale_y);
    {
        Vec3 scale;
        if (ip->msid == 2) {
            float temp_scale =
                it_804DC8DC * ip->xDD4_itemVar.sword.x40 + scale_y;
            scale.x = temp_scale;
            scale.y = scale_y + ip->xDD4_itemVar.sword.x40;
            scale.z = temp_scale;
        } else {
            scale.x = it_804DC8E0;
            scale.y = scale_y;
            scale.z = it_804DC8E0;
        }
        HSD_JObjSetScale(ip->xBBC_dynamicBoneTable->bones[3], &scale);
    }
}

void it_80284FC4(Item_GObj* gobj, int arg1, float arg2)
{
    Item* ip = GET_ITEM(gobj);
    ip->xDD4_itemVar.sword.x4 = 0;
    ip->xDD4_itemVar.sword.x8 = arg1;
    ip->xDD4_itemVar.sword.xC = 1;
    ip->xDD4_itemVar.sword.x10 = it_804DC8E0;
    ip->xDD4_itemVar.sword.x14 = arg2;
    ip->xDD4_itemVar.sword.x18 =
        (ip->xDD4_itemVar.sword.x14 - ip->xDD4_itemVar.sword.x10) / arg1;
}

void it_80285024(Item_GObj* gobj, int arg1)
{
    Item* ip = GET_ITEM(gobj);
    ip->xDD4_itemVar.sword.x4 = arg1;
    ip->xDD4_itemVar.sword.x8 = 0;
    ip->xDD4_itemVar.sword.xC = -1;
    ip->xDD4_itemVar.sword.x14 = it_804DC8E0;
    ip->xDD4_itemVar.sword.x18 =
        (ip->xDD4_itemVar.sword.x14 - ip->xDD4_itemVar.sword.x10) /
        ip->xDD4_itemVar.sword.x4;
}

/// @todo Shared code with #it_802851FC.
void it_80285084(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    ip->xDD4_itemVar.sword.x4 += ip->xDD4_itemVar.sword.xC;
    if (ip->xDD4_itemVar.sword.xC > 0) {
        if (ip->xDD4_itemVar.sword.x4 > ip->xDD4_itemVar.sword.x8) {
            ip->xDD4_itemVar.sword.x4 = ip->xDD4_itemVar.sword.x8;
            ip->xDD4_itemVar.sword.xC = 0;
        }
    } else if (ip->xDD4_itemVar.sword.xC < 0) {
        if (ip->xDD4_itemVar.sword.x4 < ip->xDD4_itemVar.sword.x8) {
            ip->xDD4_itemVar.sword.x4 = ip->xDD4_itemVar.sword.x8;
            ip->xDD4_itemVar.sword.xC = 0;
        }
    }
    ip->xDD4_itemVar.sword.x10 += ip->xDD4_itemVar.sword.x18;
    if (ip->xDD4_itemVar.sword.x18 > 0) {
        if (ip->xDD4_itemVar.sword.x10 > ip->xDD4_itemVar.sword.x14) {
            ip->xDD4_itemVar.sword.x10 = ip->xDD4_itemVar.sword.x14;
            ip->xDD4_itemVar.sword.x18 = 0;
        }
    } else if (ip->xDD4_itemVar.sword.x48 < 0) {
        if (ip->xDD4_itemVar.sword.x40 < ip->xDD4_itemVar.sword.x44) {
            ip->xDD4_itemVar.sword.x40 = ip->xDD4_itemVar.sword.x44;
            ip->xDD4_itemVar.sword.x48 = 0;
        }
    }
}

/// @todo Shared code with #it_802851FC.
void it_80285140(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    ip->xDD4_itemVar.sword.x1C += ip->xDD4_itemVar.sword.x24;
    if (ip->xDD4_itemVar.sword.x24 > 0) {
        if (ip->xDD4_itemVar.sword.x1C > ip->xDD4_itemVar.sword.x20) {
            ip->xDD4_itemVar.sword.x1C = ip->xDD4_itemVar.sword.x20;
            ip->xDD4_itemVar.sword.x24 = 0;
        }
    } else if (ip->xDD4_itemVar.sword.x24 < 0) {
        if (ip->xDD4_itemVar.sword.x1C < ip->xDD4_itemVar.sword.x20) {
            ip->xDD4_itemVar.sword.x1C = ip->xDD4_itemVar.sword.x20;
            ip->xDD4_itemVar.sword.x24 = 0;
        }
    }
    ip->xDD4_itemVar.sword.x28 += ip->xDD4_itemVar.sword.x30;
    if (ip->xDD4_itemVar.sword.x30 > 0) {
        if (ip->xDD4_itemVar.sword.x28 > ip->xDD4_itemVar.sword.x2C) {
            ip->xDD4_itemVar.sword.x28 = ip->xDD4_itemVar.sword.x2C;
            ip->xDD4_itemVar.sword.x30 = 0;
        }
    } else if (ip->xDD4_itemVar.sword.x48 < 0) {
        if (ip->xDD4_itemVar.sword.x40 < ip->xDD4_itemVar.sword.x44) {
            ip->xDD4_itemVar.sword.x40 = ip->xDD4_itemVar.sword.x44;
            ip->xDD4_itemVar.sword.x48 = 0;
        }
    }
}

void it_802851FC(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    ip->xDD4_itemVar.sword.x34 += ip->xDD4_itemVar.sword.x3C;
    if (ip->xDD4_itemVar.sword.x3C > 0) {
        if (ip->xDD4_itemVar.sword.x34 > ip->xDD4_itemVar.sword.x38) {
            ip->xDD4_itemVar.sword.x34 = ip->xDD4_itemVar.sword.x38;
            ip->xDD4_itemVar.sword.x3C = 0;
        }
    } else if (ip->xDD4_itemVar.sword.x3C < 0) {
        if (ip->xDD4_itemVar.sword.x34 < ip->xDD4_itemVar.sword.x38) {
            ip->xDD4_itemVar.sword.x34 = ip->xDD4_itemVar.sword.x38;
            ip->xDD4_itemVar.sword.x3C = 0;
        }
    }
    ip->xDD4_itemVar.sword.x40 += ip->xDD4_itemVar.sword.x48;
    if (ip->xDD4_itemVar.sword.x48 > 0) {
        if (ip->xDD4_itemVar.sword.x40 > ip->xDD4_itemVar.sword.x44) {
            ip->xDD4_itemVar.sword.x40 = ip->xDD4_itemVar.sword.x44;
            ip->xDD4_itemVar.sword.x48 = 0;
        }
    } else if (ip->xDD4_itemVar.sword.x48 < 0) {
        if (ip->xDD4_itemVar.sword.x40 < ip->xDD4_itemVar.sword.x44) {
            ip->xDD4_itemVar.sword.x40 = ip->xDD4_itemVar.sword.x44;
            ip->xDD4_itemVar.sword.x48 = 0;
        }
    }
}

void it_802852B8(Item_GObj* gobj, float* arg1, float* arg2)
{
    Item* ip = GET_ITEM(gobj);
    if (arg1 != NULL) {
        *arg1 = it_804DC8D0;
    }
    if (arg2 != NULL) {
        float temp1 =
            (ip->xDD4_itemVar.sword.x28 *
             (ip->xDD4_itemVar.sword.x4C * ip->xDD4_itemVar.sword.x10));
        float temp2 = it_804DC8D8 * temp1;
        *arg2 = it_804DC8F0 * temp2;
    }
}

itSword_UnkBytes* it_80285300(Item_GObj* gobj)
{
    itSword_UnkArticle1* attrs =
        GET_ITEM(gobj)->xC4_article_data->x4_specialAttributes;
    return &attrs->x1C;
}

void it_80285314(Item_GObj* gobj)
{
    it_80272CC0(gobj, 5);
}

void it_80285338(Item_GObj* gobj)
{
    u8 _[8] = { 0 };
    Item* ip = GET_ITEM(gobj);
    itSword_UnkArticle1* attrs = ip->xC4_article_data->x4_specialAttributes;
    it_8026B390(gobj);
    ip->x40_vel.x = it_804DC8D0;
    ip->x40_vel.y = attrs->xC;
    ip->x40_vel.z = it_804DC8D0;
    ip->xDD4_itemVar.capsule.x0 = 0;
    ip->xDD4_itemVar.capsule.x4 = 0;
    ip->xDD4_itemVar.sword.x8 = 0;
    ip->xDD4_itemVar.sword.xC = 0;
    ip->xDD4_itemVar.sword.x10 = it_804DC8E0;
    ip->xDD4_itemVar.sword.x14 = it_804DC8E0;
    ip->xDD4_itemVar.sword.x18 = it_804DC8D0;
    ip->xDD4_itemVar.sword.x1C = 0;
    ip->xDD4_itemVar.sword.x20 = 0;
    ip->xDD4_itemVar.sword.x24 = 0;
    ip->xDD4_itemVar.sword.x28 = it_804DC8E0;
    ip->xDD4_itemVar.sword.x2C = it_804DC8E0;
    ip->xDD4_itemVar.sword.x30 = it_804DC8D0;
    ip->xDD4_itemVar.sword.x34 = 0;
    ip->xDD4_itemVar.sword.x38 = 0;
    ip->xDD4_itemVar.sword.x3C = 0;
    ip->xDD4_itemVar.sword.x40 = it_804DC8E0;
    ip->xDD4_itemVar.sword.x44 = it_804DC8E0;
    ip->xDD4_itemVar.sword.x48 = it_804DC8D0;
    ip->xDD4_itemVar.sword.x50 = it_804DC8D0;
    ip->xDD4_itemVar.sword.x4C =
        HSD_JObjGetScaleY(ip->xBBC_dynamicBoneTable->bones[6]);
    ip->xDD4_itemVar.sword.x54 = 0;
    it_802855F8(gobj);
}

static inline void inlineA0(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    ip->x40_vel.x = ip->x40_vel.y = ip->x40_vel.z = it_804DC8D0;
    ip->xD50_landNum = 0;
    Item_80268E5C(gobj, 0, ITEM_ANIM_UPDATE);
}

static inline void inlineA1(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    ip->xDD4_itemVar.capsule.x4 = 4;
    ip->xDD4_itemVar.sword.x8 = 0;
    ip->xDD4_itemVar.sword.xC = -1;
    ip->xDD4_itemVar.sword.x14 = it_804DC8E0;
    ip->xDD4_itemVar.sword.x18 =
        (ip->xDD4_itemVar.sword.x14 - ip->xDD4_itemVar.sword.x10) /
        ip->xDD4_itemVar.sword.x4;
}

static inline void inlineA2(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    ip->xDD4_itemVar.sword.x1C = 4;
    ip->xDD4_itemVar.sword.x20 = 0;
    ip->xDD4_itemVar.sword.x24 = -1;
    ip->xDD4_itemVar.sword.x2C = it_804DC8E0;
    ip->xDD4_itemVar.sword.x30 =
        (ip->xDD4_itemVar.sword.x2C - ip->xDD4_itemVar.sword.x28) /
        ip->xDD4_itemVar.sword.x1C;
}

static inline void inlineA3(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    itSword_UnkArticle1* attrs = ip->xC4_article_data->x4_specialAttributes;
    ip->xDD4_itemVar.sword.x34 = attrs->x18;
    ip->xDD4_itemVar.sword.x38 = 0;
    ip->xDD4_itemVar.sword.x3C = -1;
    ip->xDD4_itemVar.sword.x44 = attrs->x10;
    ip->xDD4_itemVar.sword.x48 =
        (attrs->x10 - ip->xDD4_itemVar.sword.x40) / attrs->x18;
}

static inline void inlineA4(Item_GObj* gobj)
{
    it_80285084(gobj);
    it_80285140(gobj);
    it_802851FC(gobj);
    it_80284E30(gobj);
}

void it_80285424(Item_GObj* gobj)
{
    inlineA0(gobj);
    inlineA1(gobj);
    inlineA2(gobj);
    inlineA3(gobj);
    inlineA4(gobj);
}

bool it_80285580(Item_GObj* gobj)
{
    inlineA4(gobj);
    return false;
}

void it_802855C8(Item_GObj* gobj) {}

bool it_802855CC(Item_GObj* gobj)
{
    it_8026D62C(gobj, it_802855F8);
    return false;
}

static inline void inlineB0(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    Item_80268E5C(gobj, 1, ITEM_ANIM_UPDATE);
    ip->xD50_landNum = 0;
}

static inline void inlineB1(Item_GObj* gobj)
{
    {
        Item* ip = GET_ITEM(gobj);
        ip->xDD4_itemVar.capsule.x4 = 4;
        ip->xDD4_itemVar.sword.x8 = 0;
        ip->xDD4_itemVar.sword.xC = -1;
        ip->xDD4_itemVar.star.yvel = it_804DC8E0;
        ip->xDD4_itemVar.sword.x18 =
            (ip->xDD4_itemVar.star.yvel - ip->xDD4_itemVar.star.xvel) /
            (float) ip->xDD4_itemVar.capsule.x4;
    }
}

static inline void inlineB2(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    ip->xDD4_itemVar.sword.x1C = 4;
    ip->xDD4_itemVar.sword.x20 = 0;
    ip->xDD4_itemVar.sword.x24 = -1;
    ip->xDD4_itemVar.sword.x2C = it_804DC8E0;
    ip->xDD4_itemVar.sword.x30 =
        (ip->xDD4_itemVar.sword.x2C - ip->xDD4_itemVar.sword.x28) /
        (float) ip->xDD4_itemVar.sword.x1C;
}

static inline void inlineB3(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    itSword_UnkArticle1* attrs = ip->xC4_article_data->x4_specialAttributes;
    ip->xDD4_itemVar.sword.x34 = attrs->x18;
    ip->xDD4_itemVar.sword.x38 = 0;
    ip->xDD4_itemVar.sword.x3C = -1;
    ip->xDD4_itemVar.sword.x44 = attrs->x10;
    ip->xDD4_itemVar.sword.x48 =
        (attrs->x10 - ip->xDD4_itemVar.sword.x40) / attrs->x18;
}

void it_802855F8(Item_GObj* gobj)
{
    inlineB0(gobj);
    inlineB1(gobj);
    inlineB2(gobj);
    inlineB3(gobj);
    inlineA4(gobj);
}

bool it_80285744(Item_GObj* gobj)
{
    inlineA4(gobj);
    return false;
}

void it_8028578C(Item_GObj* gobj)
{
    ItemAttr* attrs = GET_ITEM(gobj)->xCC_item_attr;
    it_80272860(gobj, attrs->x10_fall_speed, attrs->x14_fall_speed_max);
    it_80274658(gobj, it_804D6D28->x68_float);
}

bool it_802857D8(Item_GObj* gobj)
{
    it_8026E15C(gobj, it_80285424);
    return false;
}

static inline void inlineC0(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    ip->xDD4_itemVar.capsule.x4 = 4;
    ip->xDD4_itemVar.sword.x8 = 0;
    ip->xDD4_itemVar.sword.xC = -1;
    ip->xDD4_itemVar.sword.x14 = it_804DC8E0;
    ip->xDD4_itemVar.sword.x18 =
        (ip->xDD4_itemVar.star.yvel - ip->xDD4_itemVar.star.xvel) /
        (float) ip->xDD4_itemVar.capsule.x4;
}

static inline void inlineC1(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    ip->xDD4_itemVar.sword.x1C = 0;
    ip->xDD4_itemVar.sword.x20 = 4;
    ip->xDD4_itemVar.sword.x24 = 1;
    ip->xDD4_itemVar.sword.x28 = it_804DC8E0;
    ip->xDD4_itemVar.sword.x2C = it_804DC8F4;
    ip->xDD4_itemVar.sword.x30 =
        (ip->xDD4_itemVar.sword.x2C - ip->xDD4_itemVar.sword.x28) *
        it_804DC8F8;
}

void it_80285804(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    HSD_JObj* jobj = GET_JOBJ(gobj);
    HSD_JObj* child = HSD_JObjGetChild(jobj);
    HSD_JObjClearFlagsAll(child, JOBJ_HIDDEN);
    Item_80268E5C(gobj, 2, ITEM_ANIM_UPDATE);
    ip->xD50_landNum = 0;
    inlineC0(gobj);
    inlineC1(gobj);
    inlineA4(gobj);
}

static inline void inlineD0(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    ip->xDD4_itemVar.sword.x4 = 4;
    ip->xDD4_itemVar.sword.x8 = 0;
    ip->xDD4_itemVar.sword.xC = -1;
    ip->xDD4_itemVar.sword.x14 = it_804DC8E0;
    ip->xDD4_itemVar.sword.x18 =
        (ip->xDD4_itemVar.sword.x14 - ip->xDD4_itemVar.sword.x10) /
        ip->xDD4_itemVar.sword.x4;
}

static inline void inlineD1(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    itSword_UnkArticle1* attrs = ip->xC4_article_data->x4_specialAttributes;
    ip->xDD4_itemVar.sword.x34 = 0;
    ip->xDD4_itemVar.sword.x38 = attrs->x18;
    ip->xDD4_itemVar.sword.x3C = 1;
    ip->xDD4_itemVar.sword.x40 = attrs->x10;
    ip->xDD4_itemVar.sword.x44 = attrs->x14;
    ip->xDD4_itemVar.sword.x48 = (attrs->x14 - attrs->x10) / attrs->x18;
}

static inline void inlineD2(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    itSword_UnkArticle1* attrs = ip->xC4_article_data->x4_specialAttributes;
    ip->xDD4_itemVar.sword.x34 = attrs->x18;
    ip->xDD4_itemVar.sword.x38 = 0;
    ip->xDD4_itemVar.sword.x3C = -1;
    ip->xDD4_itemVar.sword.x44 = attrs->x10;
    ip->xDD4_itemVar.sword.x48 =
        (attrs->x10 - ip->xDD4_itemVar.sword.x40) / attrs->x18;
}

static inline void inlineD3(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    HSD_GObj* owner = ip->owner;
    itSword_UnkArticle1* attrs = ip->xC4_article_data->x4_specialAttributes;
    if (owner != NULL && ftLib_80086FA8(owner) != 1) {
        inlineD0(gobj);
    }
    if (ip->xDD4_itemVar.sword.x3C == 0) {
        if (ip->xDD4_itemVar.sword.x34 == ip->xDD4_itemVar.sword.x38) {
            if (ip->xDD4_itemVar.sword.x38 == 0) {
                inlineD1(gobj);
            } else if (ip->xDD4_itemVar.sword.x38 == attrs->x18) {
                inlineD2(gobj);
            }
        }
    }
}

bool it_80285920(Item_GObj* gobj)
{
    inlineD3(gobj);
    inlineA4(gobj);
    return false;
}

void it_80285AF4(Item_GObj* gobj) {}

bool it_80285AF8(Item_GObj* gobj)
{
    return false;
}

static inline void inlineE0(Item_GObj* gobj)
{
    HSD_JObj* jobj = GET_JOBJ(gobj);
    HSD_JObj* child = HSD_JObjGetChild(jobj);
    it_8026B390(gobj);
    HSD_JObjClearFlagsAll(child, JOBJ_HIDDEN);
    Item_80268E5C(gobj, 3, 6);
}

static inline void inlineE1(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    ip->xDD4_itemVar.capsule.x4 = 4;
    ip->xDD4_itemVar.sword.x8 = 0;
    ip->xDD4_itemVar.sword.xC = -1;
    ip->xDD4_itemVar.sword.x14 = it_804DC8E0;
    ip->xDD4_itemVar.sword.x18 =
        (ip->xDD4_itemVar.sword.x14 - ip->xDD4_itemVar.sword.x10) /
        ip->xDD4_itemVar.sword.x4;
}

static inline void inlineE2(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    ip->xDD4_itemVar.sword.x1C = 4;
    ip->xDD4_itemVar.sword.x20 = 0;
    ip->xDD4_itemVar.sword.x24 = -1;
    ip->xDD4_itemVar.sword.x2C = it_804DC8E0;
    ip->xDD4_itemVar.sword.x30 =
        (ip->xDD4_itemVar.sword.x2C - ip->xDD4_itemVar.sword.x28) /
        (float) ip->xDD4_itemVar.sword.x1C;
}

static inline void inlineE3(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    itSword_UnkArticle1* attrs = ip->xC4_article_data->x4_specialAttributes;
    ip->xDD4_itemVar.sword.x34 = attrs->x18;
    ip->xDD4_itemVar.sword.x38 = 0;
    ip->xDD4_itemVar.sword.x3C = -1;
    ip->xDD4_itemVar.sword.x44 = attrs->x10;
    ip->xDD4_itemVar.sword.x48 =
        (attrs->x10 - ip->xDD4_itemVar.sword.x40) / (float) attrs->x18;
}

void it_80285B00(Item_GObj* gobj)
{
    inlineE0(gobj);
    inlineE1(gobj);
    inlineE2(gobj);
    inlineE3(gobj);
    inlineA4(gobj);
}

static inline void inlineF0(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    ip->xDD4_itemVar.capsule.x4 = 4;
    ip->xDD4_itemVar.sword.x8 = 0;
    ip->xDD4_itemVar.sword.xC = -1;
    ip->xDD4_itemVar.sword.x14 = it_804DC8E0;
    ip->xDD4_itemVar.sword.x18 =
        (ip->xDD4_itemVar.sword.x14 - ip->xDD4_itemVar.sword.x10) /
        ip->xDD4_itemVar.sword.x4;
}

static inline void inlineF1(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    ip->xDD4_itemVar.sword.x1C = 4;
    ip->xDD4_itemVar.sword.x20 = 0;
    ip->xDD4_itemVar.sword.x24 = -1;
    ip->xDD4_itemVar.sword.x2C = it_804DC8E0;
    ip->xDD4_itemVar.sword.x30 =
        (ip->xDD4_itemVar.sword.x2C - ip->xDD4_itemVar.sword.x28) /
        (float) ip->xDD4_itemVar.sword.x1C;
}

static inline void inlineF2(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    itSword_UnkArticle1* attrs = ip->xC4_article_data->x4_specialAttributes;
    ip->xDD4_itemVar.sword.x34 = attrs->x18;
    ip->xDD4_itemVar.sword.x38 = 0;
    ip->xDD4_itemVar.sword.x3C = -1;
    ip->xDD4_itemVar.sword.x44 = attrs->x10;
    ip->xDD4_itemVar.sword.x48 =
        (attrs->x10 - ip->xDD4_itemVar.sword.x40) / attrs->x18;
}

void it_80285C78(Item_GObj* gobj)
{
    /// @todo #inlineE0
    {
        HSD_JObj* jobj = GET_JOBJ(gobj);
        HSD_JObj* child = HSD_JObjGetChild(jobj);
        it_8026B390(gobj);
        HSD_JObjClearFlagsAll(child, JOBJ_HIDDEN);
        Item_80268E5C(gobj, 3, 6);
    }
    inlineF0(gobj);
    inlineF1(gobj);
    inlineF2(gobj);
    inlineA4(gobj);
}

static inline void inlineG0(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    ip->xDD4_itemVar.capsule.x4 = 4;
    ip->xDD4_itemVar.sword.x8 = 0;
    ip->xDD4_itemVar.sword.xC = -1;
    ip->xDD4_itemVar.sword.x14 = it_804DC8E0;
    ip->xDD4_itemVar.sword.x18 =
        (ip->xDD4_itemVar.sword.x14 - ip->xDD4_itemVar.sword.x10) /
        ip->xDD4_itemVar.sword.x4;
}

static inline void inlineG1(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    ip->xDD4_itemVar.sword.x1C = 4;
    ip->xDD4_itemVar.sword.x20 = 0;
    ip->xDD4_itemVar.sword.x24 = -1;
    ip->xDD4_itemVar.sword.x2C = it_804DC8E0;
    ip->xDD4_itemVar.sword.x30 =
        (ip->xDD4_itemVar.sword.x2C - ip->xDD4_itemVar.sword.x28) /
        ip->xDD4_itemVar.sword.x1C;
}

static inline void inlineG2(Item_GObj* gobj)
{
    Item* ip = GET_ITEM(gobj);
    itSword_UnkArticle1* attrs = ip->xC4_article_data->x4_specialAttributes;
    ip->xDD4_itemVar.sword.x34 = attrs->x18;
    ip->xDD4_itemVar.sword.x38 = 0;
    ip->xDD4_itemVar.sword.x3C = -1;
    ip->xDD4_itemVar.sword.x44 = attrs->x10;
    ip->xDD4_itemVar.sword.x48 =
        (attrs->x10 - ip->xDD4_itemVar.sword.x40) / attrs->x18;
}

void it_80285DF0(Item_GObj* gobj)
{
    Item_80268E5C(gobj, 4, ITEM_ANIM_UPDATE);
    inlineG0(gobj);
    inlineG1(gobj);
    inlineG2(gobj);
    inlineA4(gobj);
}

bool it_80285F2C(Item_GObj* gobj)
{
    inlineA4(gobj);
    return false;
}

void it_80285F74(Item_GObj* gobj) {}

bool it_80285F78(Item_GObj* gobj)
{
    it_8026E8C4(gobj, it_80285424, it_802855F8);
    return false;
}

bool it_80285FAC(Item_GObj* gobj)
{
    if (GET_ITEM(gobj)->msid == 3) {
        itColl_BounceOffVictim(gobj);
    }
    return false;
}

bool it_80285FE0(Item_GObj* gobj)
{
    return it_80273030(gobj);
}

bool it_80286000(Item_GObj* gobj)
{
    itColl_BounceOffVictim(gobj);
    return false;
}

bool it_80286024(Item_GObj* gobj)
{
    itColl_BounceOffVictim(gobj);
    return false;
}

bool itSword_BounceOffShield(Item_GObj* gobj)
{
    return itColl_BounceOffShield(gobj);
}

void it_80286068(Item_GObj* gobj, HSD_GObj* ref_gobj)
{
    it_8026B894(gobj, ref_gobj);
}
