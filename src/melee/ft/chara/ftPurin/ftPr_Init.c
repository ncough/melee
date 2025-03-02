#include "forward.h"

#include "ftPr_Init.h"

#include "ef/eflib.h"
#include "ef/efsync.h"
#include "ft/fighter.h"
#include "ft/ft_081B.h"
#include "ft/ft_0852.h"
#include "ft/ft_0877.h"
#include "ft/ft_0881.h"
#include "ft/ft_0892.h"
#include "ft/ft_0C88.h"
#include "ft/ft_0D14.h"
#include "ft/ftanim.h"
#include "ft/ftcamera.h"
#include "ft/ftcliffcommon.h"
#include "ft/ftcommon.h"
#include "ft/ftparts.h"
#include "ft/types.h"
#include "ftCommon/ftCo_09CB.h"
#include "ftPurin/types.h"
#include "gm/gm_1601.h"
#include "gr/grstadium.h"
#include "it/it_26B1.h"
#include "lb/types.h"

#include <common_structs.h>
#include <placeholder.h>
#include <baselib/archive.h>
#include <baselib/gobj.h>
#include <baselib/jobj.h>
#include <baselib/objalloc.h>

MotionState ftPr_Init_MotionStateTable[ftPr_MS_SelfCount] = {
    {
        // ftPr_MS_JumpAerialF1 = 341
        ftPr_SM_JumpAerialF1,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCo_JumpAerialF1_Anim,
        ftCo_JumpAerialF1_IASA,
        ftCo_JumpAerialF1_Phys,
        ftCo_JumpAerialF1_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_JumpAerialF2 = 342
        ftPr_SM_JumpAerialF2,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCo_JumpAerialF1_Anim,
        ftCo_JumpAerialF1_IASA,
        ftCo_JumpAerialF1_Phys,
        ftCo_JumpAerialF1_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_JumpAerialF3 = 343
        ftPr_SM_JumpAerialF3,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCo_JumpAerialF1_Anim,
        ftCo_JumpAerialF1_IASA,
        ftCo_JumpAerialF1_Phys,
        ftCo_JumpAerialF1_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_JumpAerialF4 = 344
        ftPr_SM_JumpAerialF4,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCo_JumpAerialF1_Anim,
        ftCo_JumpAerialF1_IASA,
        ftCo_JumpAerialF1_Phys,
        ftCo_JumpAerialF1_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_JumpAerialF5 = 345
        ftPr_SM_JumpAerialF5,
        Ft_MF_None,
        FtMoveId_Default << 24,
        ftCo_JumpAerialF1_Anim,
        ftCo_JumpAerialF1_IASA,
        ftCo_JumpAerialF1_Phys,
        ftCo_JumpAerialF1_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialNStartR = 346
        ftPr_SM_SpecialNStartR,
        ftPr_MF_SpecialN,
        FtMoveId_SpecialN << 24,
        ftPr_SpecialNStart_Anim,
        ftPr_SpecialNStart_IASA,
        ftPr_SpecialNStart_Phys,
        ftPr_SpecialNStart_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialNStartL = 347
        ftPr_SM_SpecialNStartL,
        ftPr_MF_SpecialN,
        FtMoveId_SpecialN << 24,
        ftPr_SpecialNStart_Anim,
        ftPr_SpecialNStart_IASA,
        ftPr_SpecialNStart_Phys,
        ftPr_SpecialNStart_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialNLoop = 348
        ftPr_SM_SpecialNChargeLoop,
        ftPr_MF_SpecialNCharged,
        FtMoveId_SpecialN << 24,
        ftPr_SpecialNLoop_Anim,
        ftPr_SpecialNLoop_IASA,
        ftPr_SpecialNLoop_Phys,
        ftPr_SpecialNLoop_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialNFull = 349
        ftPr_SM_SpecialNChargeFull,
        ftPr_MF_SpecialNCharged,
        FtMoveId_SpecialN << 24,
        ftPr_SpecialNFull_Anim,
        ftPr_SpecialNFull_IASA,
        ftPr_SpecialNFull_Phys,
        ftPr_SpecialNFull_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialNRelease = 350
        ftPr_SM_SpecialNChargeRelease,
        ftPr_MF_SpecialN,
        FtMoveId_SpecialN << 24,
        ftPr_SpecialNRelease_Anim,
        ftPr_SpecialNRelease_IASA,
        ftPr_SpecialNRelease_Phys,
        ftPr_SpecialNRelease_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialNTurn = 351
        ftPr_SM_SpecialNStartTurn,
        ftPr_MF_SpecialN,
        FtMoveId_SpecialN << 24,
        ftPr_SpecialNTurn_Anim,
        ftPr_SpecialNTurn_IASA,
        ftPr_SpecialNTurn_Phys,
        ftPr_SpecialNTurn_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialNEndR = 352
        ftPr_SM_SpecialNEndR,
        ftPr_MF_SpecialN,
        FtMoveId_SpecialN << 24,
        ftPr_SpecialNEnd_Anim,
        ftPr_SpecialNEnd_IASA,
        ftPr_SpecialNEnd_Phys,
        ftPr_SpecialNEnd_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialNEndL = 353
        ftPr_SM_SpecialNEndL,
        ftPr_MF_SpecialN,
        FtMoveId_SpecialN << 24,
        ftPr_SpecialNEnd_Anim,
        ftPr_SpecialNEnd_IASA,
        ftPr_SpecialNEnd_Phys,
        ftPr_SpecialNEnd_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialAirNStartR = 354
        ftPr_SM_SpecialAirNStartR,
        ftPr_MF_SpecialAirN,
        FtMoveId_SpecialN << 24,
        ftPr_SpecialAirNStart_Anim,
        ftPr_SpecialAirNStart_IASA,
        ftPr_SpecialAirNStart_Phys,
        ftPr_SpecialAirNStart_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialAirNStartL = 355
        ftPr_SM_SpecialAirNStartL,
        ftPr_MF_SpecialAirN,
        FtMoveId_SpecialN << 24,
        ftPr_SpecialAirNStart_Anim,
        ftPr_SpecialAirNStart_IASA,
        ftPr_SpecialAirNStart_Phys,
        ftPr_SpecialAirNStart_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialAirNChargeLoop = 356
        ftPr_SM_SpecialAirNChargeLoop,
        ftPr_SpecialAirNCharged,
        FtMoveId_SpecialN << 24,
        ftPr_SpecialAirNChargeLoop_Anim,
        ftPr_SpecialAirNChargeLoop_IASA,
        ftPr_SpecialAirNChargeLoop_Phys,
        ftPr_SpecialAirNChargeLoop_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialAirNChargeFull = 357
        ftPr_SM_SpecialAirNChargeFull,
        ftPr_SpecialAirNCharged,
        FtMoveId_SpecialN << 24,
        ftPr_SpecialAirNChargeFull_Anim,
        ftPr_SpecialAirNChargeFull_IASA,
        ftPr_SpecialAirNChargeFull_Phys,
        ftPr_SpecialAirNChargeFull_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialAirNChargeRelease = 358
        ftPr_SM_SpecialAirNChargeRelease,
        ftPr_MF_SpecialAirN,
        FtMoveId_SpecialN << 24,
        ftPr_SpecialAirNChargeRelease_Anim,
        ftPr_SpecialAirNChargeRelease_IASA,
        ftPr_SpecialAirNChargeRelease_Phys,
        ftPr_SpecialAirNChargeRelease_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialAirNStartTurn = 359
        ftPr_SM_SpecialAirNStartTurn,
        ftPr_MF_SpecialN,
        FtMoveId_SpecialN << 24,
        ftPr_SpecialAirNStartTurn_Anim,
        ftPr_SpecialAirNStartTurn_IASA,
        ftPr_SpecialAirNStartTurn_Phys,
        ftPr_SpecialAirNStartTurn_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialAirNEndR = 360
        ftPr_SM_SpecialAirNEndR,
        ftPr_MF_SpecialAirN,
        FtMoveId_SpecialN << 24,
        ftPr_SpecialAirNEnd_Anim,
        ftPr_SpecialAirNEnd_IASA,
        ftPr_SpecialAirNEnd_Phys,
        ftPr_SpecialAirNEnd_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialAirNEndL = 361
        ftPr_SM_SpecialAirNEndL,
        ftPr_MF_SpecialAirN,
        FtMoveId_SpecialN << 24,
        ftPr_SpecialAirNEnd_Anim,
        ftPr_SpecialAirNEnd_IASA,
        ftPr_SpecialAirNEnd_Phys,
        ftPr_SpecialAirNEnd_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialNHit = 362
        ftPr_SM_SpecialNHit,
        ftPr_MF_SpecialAirN,
        FtMoveId_SpecialN << 24,
        ftPr_SpecialNHit_Anim,
        ftPr_SpecialNHit_IASA,
        ftPr_SpecialNHit_Phys,
        ftPr_SpecialNHit_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialS = 363
        ftPr_SM_SpecialS,
        ftPr_MF_SpecialS,
        FtMoveId_SpecialS << 24,
        ftPr_SpecialS_Anim,
        ftPr_SpecialS_IASA,
        ftPr_SpecialS_Phys,
        ftPr_SpecialS_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialAirS = 364
        ftPr_SM_SpecialAirS,
        ftPr_MF_SpecialAirS,
        FtMoveId_SpecialS << 24,
        ftPr_SpecialAirS_Anim,
        ftPr_SpecialAirS_IASA,
        ftPr_SpecialAirS_Phys,
        ftPr_SpecialAirS_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialHiL = 365
        ftPr_SM_SpecialHiL,
        ftPr_MF_SpecialHi,
        FtMoveId_SpecialHi << 24,
        ftPr_SpecialHi_Anim,
        ftPr_SpecialHi_IASA,
        ftPr_SpecialHi_Phys,
        ftPr_SpecialHi_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialAirHiL = 366
        ftPr_SM_SpecialAirHiL,
        ftPr_MF_SpecialAirHi,
        FtMoveId_SpecialHi << 24,
        ftPr_SpecialAirHi_Anim,
        ftPr_SpecialAirHi_IASA,
        ftPr_SpecialAirHi_Phys,
        ftPr_SpecialAirHi_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialHiR = 367
        ftPr_SM_SpecialHiR,
        ftPr_MF_SpecialHi,
        FtMoveId_SpecialHi << 24,
        ftPr_SpecialHi_Anim,
        ftPr_SpecialHi_IASA,
        ftPr_SpecialHi_Phys,
        ftPr_SpecialHi_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialAirHiR = 368
        ftPr_SM_SpecialAirHiR,
        ftPr_MF_SpecialAirHi,
        FtMoveId_SpecialHi << 24,
        ftPr_SpecialAirHi_Anim,
        ftPr_SpecialAirHi_IASA,
        ftPr_SpecialAirHi_Phys,
        ftPr_SpecialAirHi_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialLwL = 369
        ftPr_SM_SpecialLwL,
        ftPr_MF_SpecialLw,
        FtMoveId_SpecialLw << 24,
        ftPr_SpecialLw_Anim,
        ftPr_SpecialLw_IASA,
        ftPr_SpecialLw_Phys,
        ftPr_SpecialLw_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialAirLwL = 370
        ftPr_SM_SpecialAirLwL,
        ftPr_MF_SpecialAirLw,
        FtMoveId_SpecialLw << 24,
        ftPr_SpecialAirLw_Anim,
        ftPr_SpecialAirLw_IASA,
        ftPr_SpecialAirLw_Phys,
        ftPr_SpecialAirLw_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialLwR = 371
        ftPr_SM_SpecialLwR,
        ftPr_MF_SpecialLw,
        FtMoveId_SpecialLw << 24,
        ftPr_SpecialLw_Anim,
        ftPr_SpecialLw_IASA,
        ftPr_SpecialLw_Phys,
        ftPr_SpecialLw_Coll,
        ftCamera_UpdateCameraBox,
    },
    {
        // ftPr_MS_SpecialAirLwR = 372
        ftPr_SM_SpecialAirLwR,
        ftPr_MF_SpecialAirLw,
        FtMoveId_SpecialLw << 24,
        ftPr_SpecialAirLw_Anim,
        ftPr_SpecialAirLw_IASA,
        ftPr_SpecialAirLw_Phys,
        ftPr_SpecialAirLw_Coll,
        ftCamera_UpdateCameraBox,
    },
};

char ftPr_Init_DatFilename[] = "PlPr.dat";
char ftPr_Init_DataName[] = "ftDataPurin";
char ftPr_Init_803D0308[] = "PlPrNr.dat";
char ftPr_Init_803D0314[] = "PlyPurin5K_Share_joint";
char ftPr_Init_803D032C[] = "PlyPurin5K_Share_matanim_joint";
char ftPr_Init_803D034C[] = "PlPrRe.dat";
char ftPr_Init_803D0358[] = "PlyPurin5KRe_Share_joint";
char ftPr_Init_803D0374[] = "PlyPurin5KRe_Share_matanim_joint";
char ftPr_Init_803D0398[] = "PlPrBu.dat";
char ftPr_Init_803D03A4[] = "PlyPurin5KBu_Share_joint";
char ftPr_Init_803D03C0[] = "PlyPurin5KBu_Share_matanim_joint";
char ftPr_Init_803D03E4[] = "PlPrGr.dat";
char ftPr_Init_803D03F0[] = "PlyPurin5KGr_Share_joint";
char ftPr_Init_803D040C[] = "PlyPurin5KGr_Share_matanim_joint";
char ftPr_Init_803D0430[] = "PlPrYe.dat";
char ftPr_Init_803D043C[] = "PlyPurin5KYe_Share_joint";
char ftPr_Init_803D0458[] = "PlyPurin5KYe_Share_matanim_joint";
char ftPr_Init_AnimDatFilename[] = "PlPrAJ.dat";

Fighter_DemoStrings ftPr_Init_DemoMotionFilenames = {
    "ftDemoResultMotionFilePurin",
    "ftDemoIntroMotionFilePurin",
    "ftDemoEndingMotionFilePurin",
    "ftDemoViWaitMotionFilePurin",
};

Fighter_CostumeStrings ftPr_Init_CostumeStrings[] = {
    { ftPr_Init_803D0308, ftPr_Init_803D0314, ftPr_Init_803D032C },
    { ftPr_Init_803D034C, ftPr_Init_803D0358, ftPr_Init_803D0374 },
    { ftPr_Init_803D0398, ftPr_Init_803D03A4, ftPr_Init_803D03C0 },
    { ftPr_Init_803D03E4, ftPr_Init_803D03F0, ftPr_Init_803D040C },
    { ftPr_Init_803D0430, ftPr_Init_803D043C, ftPr_Init_803D0458 },
};

char* ftPr_Init_803D05B4[] = {
    NULL,
    "PlyPurinReHat_TopN_joint",
    "PlyPurinBuHat_TopN_joint",
    "PlyPurinGrHat_TopN_joint",
    "PlyPurinYeHat_TopN_joint",
};

Vec4 ftPr_Init_803D05C8 = { 0.65, 0.7, 0.8, 1 };
Vec4 ftPr_Init_803D05D8 = { 1.1, 1.35, 1.3, 1.2 };

char ftPr_Init_assert_msg_0[] = "!(jobj->flags & JOBJ_USE_QUATERNION)";

Vec3 ftPr_Init_803D0610[] = {
    { +8, +0, -4 },
    { +4, +4, +4 },
};
/* static */ extern char* ftPr_Init_803D05B4[5];

void ftPr_Init_8013C2F8(void)
{
    ft_8045A1E0[0] = NULL;
    ft_8045A1E0[1] = NULL;
    ft_8045A1E0[2] = NULL;
    ft_8045A1E0[3] = NULL;
    ft_8045A1E0[4] = NULL;
}

void ftPr_Init_OnDeath(HSD_GObj* gobj)
{
    ftParts_80074A4C(gobj, 0, 0);
}

void ftPr_Init_OnUserDataRemove(HSD_GObj* gobj)
{
    ftPr_Init_8013C494(gobj);
}

void ftPr_Init_8013C360(HSD_GObj* gobj)
{
    HSD_Joint** joints = ft_8045A1E0;
    Fighter* fp = GET_FIGHTER(gobj);

    if (ftPr_Init_803D05B4[fp->x619_costume_id]) {
        UNK_T* items = fp->ft_data->x48_items;
        UNK_T* items_shifted = items[1];
        if (!joints[fp->x619_costume_id]) {
            UnkCostumeStruct* costume_list =
                CostumeListsForeachCharacter[fp->kind].costume_list;
            joints[fp->x619_costume_id] = HSD_ArchiveGetPublicAddress(
                costume_list[fp->x619_costume_id].x14_archive,
                ftPr_Init_803D05B4[fp->x619_costume_id]);
        }

        fp->fv.pr.x2244 = HSD_ObjAlloc(&Fighter_80459080);
        ftParts_80074148();
        fp->fv.pr.x223C = HSD_JObjLoadJoint(joints[fp->x619_costume_id]);
        fp->x2225_b2 = true;
        ftParts_80074170();
        ftParts_80075650(gobj, fp->fv.pr.x223C, &fp->fv.pr.x2240);

        ftParts_8007487C(&items_shifted[1], &fp->fv.pr.x2248,
                         fp->x619_costume_id, &fp->fv.pr.x2240,
                         &fp->fv.pr.x2240);
        ftCo_8009DC54(fp);
        return;
    }

    fp->fv.pr.x223C = 0;
}

void ftPr_Init_8013C494(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);

    if (fp->fv.pr.x223C != NULL) {
        HSD_JObjRemoveAll(fp->fv.pr.x223C);
        fp->fv.pr.x223C = NULL;
        HSD_ObjFree(&Fighter_80459080, fp->fv.pr.x2244);
        fp->fv.pr.x2244 = NULL;
    }
}

void ftPr_Init_UnkMtxFunc0(HSD_GObj* gobj, int arg1, Mtx vmtx)
{
    Fighter* fp = GET_FIGHTER(gobj);

    if (fp->fv.pr.x223C && fp->x2225_b2) {
        MtxPtr mtx = HSD_JObjGetMtxPtr(fp->parts[FtPart_LLegJA].joint);
        HSD_JObj* jobj = fp->fv.pr.x223C;
        HSD_JObjCopyMtx(fp->fv.pr.x223C, mtx);
        jobj->flags |= (1 << 23) | (1 << 24) | (1 << 25);
        HSD_JObjSetMtxDirty(jobj);

        HSD_JObjDispAll(fp->fv.pr.x223C, vmtx, HSD_GObj_80390EB8(arg1), 0);
    }
}

void ftPr_Init_UnkIntBoolFunc0(Fighter* fp, int arg1, bool arg2)
{
    if (fp->fv.pr.x223C) {
        if (arg2) {
            ftParts_80074CA0(&fp->fv.pr.x2248, arg1, &fp->fv.pr.x2240);
        } else {
            ftParts_80074D7C(&fp->fv.pr.x2248, arg1, &fp->fv.pr.x2240);
        }
    }
}

void* ftPr_Init_UnkMotionStates6(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);

    if (fp->fv.pr.x223C) {
        return fp->fv.pr.x223C;
    }

    return gobj;
}

void ftPr_Init_OnLoad(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    PUSH_ATTRS(fp, ftPurinAttributes);
    fp->x2222_b1 = 1;
    fp->x2D0 = fp->dat_attrs;
    ftPr_Init_8013C360(gobj);
}

void ftPr_Init_OnItemPickup(HSD_GObj* gobj, bool flag)
{
    Fighter* fp = GET_FIGHTER(gobj);
    if (!it_8026B2B4(fp->item_gobj)) {
        switch (it_8026B320(fp->item_gobj)) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            ftAnim_80070FB4(gobj, 0, 0);
            break;
        case 4:
            ftAnim_80070FB4(gobj, 0, 1);
            break;
        }
        if (flag) {
            ftAnim_80070C48(gobj, 0);
        }
    }
}

void ftPr_Init_OnItemInvisible(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    if (fp->item_gobj) {
        if (!it_8026B2B4(fp->item_gobj)) {
            ftAnim_80070CC4(gobj, 0);
        }
    }
}

void ftPr_Init_OnItemVisible(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    if (fp->item_gobj) {
        if (!it_8026B2B4(fp->item_gobj)) {
            ftAnim_80070C48(gobj, 0);
        }
    }
}

void ftPr_Init_OnItemDrop(HSD_GObj* gobj, bool bool1)
{
    Fighter_OnItemDrop(gobj, bool1, 0, 0);
}

void ftPr_Init_LoadSpecialAttrs(HSD_GObj* gobj)
{
    COPY_ATTRS(gobj, ftPurinAttributes);
}

void ftPr_Init_OnKnockbackEnter(HSD_GObj* gobj)
{
    Fighter_OnKnockbackEnter(gobj, 1);
}

void ftPr_Init_OnKnockbackExit(HSD_GObj* gobj)
{
    Fighter_OnKnockbackExit(gobj, 1);
}
void ftPr_Init_8013C94C(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);

    if (!fp->x2219_b0) {
        efSync_Spawn(1238, gobj, fp->parts[FtPart_WaistN].joint);
        fp->x2219_b0 = true;
    }

    fp->pre_hitlag_cb = efLib_PauseAll;
    fp->post_hitlag_cb = efLib_ResumeAll;
    fp->accessory4_cb = NULL;
}

extern float const ftPr_Init_804D9C10;
extern float const ftPr_Init_804D9C14;
extern float const ftPr_Init_804D9C18;

static inline void ftPurin_SpecialHi_SetVars(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);

    fp->cmd_vars[0] = 0;

    fp->accessory4_cb = &ftPr_Init_8013C94C;

    if (gm_8016B1D8() && grStadium_801D4FF8(fp->player_id)) {
        fp->mv.pr.specialhi.x0 = true;
    } else {
        fp->mv.pr.specialhi.x0 = false;
    }
}

inline void ftPurin_SpecialHi_SetActionFromFacingDirection(HSD_GObj* gobj,
                                                           u32 left_id,
                                                           u32 right_id)
{
    Fighter* fighter = GET_FIGHTER(gobj);

    if (ftPr_Init_804D9C10 == fighter->facing_dir) {
        Fighter_ChangeMotionState(gobj, left_id, 0, ftPr_Init_804D9C14,
                                  ftPr_Init_804D9C18, ftPr_Init_804D9C14,
                                  NULL);
    } else {
        Fighter_ChangeMotionState(gobj, right_id, 0, ftPr_Init_804D9C14,
                                  ftPr_Init_804D9C18, ftPr_Init_804D9C14,
                                  NULL);
    }
}

inline void startHi(HSD_GObj* gobj, int left_id, int right_id)
{
    Fighter* fighter;

    ftPurin_SpecialHi_SetActionFromFacingDirection(gobj, left_id, right_id);

    ftAnim_8006EBA4(gobj);

    fighter = (Fighter*) HSD_GObjGetUserData(gobj);

    if (ftPr_Init_804D9C10 == fighter->facing_dir) {
        Fighter_ChangeMotionState(gobj, left_id, 0, ftPr_Init_804D9C14,
                                  ftPr_Init_804D9C18, ftPr_Init_804D9C14,
                                  NULL);
    } else {
        Fighter_ChangeMotionState(gobj, right_id, 0, ftPr_Init_804D9C14,
                                  ftPr_Init_804D9C18, ftPr_Init_804D9C14,
                                  NULL);
    }
}

void ftPr_SpecialHi_Enter(HSD_GObj* gobj)
{
    ftPurin_SpecialHi_SetActionFromFacingDirection(gobj, 365, 367);

    ftAnim_8006EBA4(gobj);
    ftPurin_SpecialHi_SetVars(gobj);
}

void ftPr_SpecialAirHi_Enter(HSD_GObj* gobj)
{
    ftPurin_SpecialHi_SetActionFromFacingDirection(gobj, 366, 368);

    ftAnim_8006EBA4(gobj);
    ftPurin_SpecialHi_SetVars(gobj);
}

void ftPr_SpecialHi_Anim(Fighter_GObj* fighter_gobj)
{
    Fighter* fighter = GET_FIGHTER(fighter_gobj);

    if (fighter->mv.pr.specialhi.x0 != 0 && !fighter->x914[0].x43_b2 &&
        fighter->x914[0].state != HitCapsule_Disabled)
    {
        fighter->x914[0].x43_b2 = 1;
        fighter->x914[0].element = HitElement_Sleep;
    }

    if (!ftAnim_IsFramesRemaining(fighter_gobj)) {
        ft_8008A2BC(fighter_gobj);
    }
}

void ftPr_SpecialAirHi_Anim(Fighter_GObj* fighter_gobj)
{
    Fighter* fighter = fighter_gobj->user_data;
    if (fighter->mv.pr.specialhi.x0 != 0 && !fighter->x914[0].x43_b2 &&
        fighter->x914[0].state != HitCapsule_Disabled)
    {
        fighter->x914[0].x43_b2 = 1;
        fighter->x914[0].element = HitElement_Sleep;
    }
    if (!ftAnim_IsFramesRemaining(fighter_gobj)) {
        ftCo_800CC730(fighter_gobj);
    }
}

void ftPr_SpecialHi_IASA(HSD_GObj* arg0) {}

void ftPr_SpecialAirHi_IASA(HSD_GObj* arg0) {}

void ftPr_SpecialHi_Phys(HSD_GObj* gobj)
{
    ft_80084F3C(gobj);
}

void ftPr_SpecialAirHi_Phys(HSD_GObj* gobj)
{
    ft_80084EEC(gobj);
}

void ftPr_SpecialHi_Coll(HSD_GObj* gobj)
{
    if (!ft_800827A0(gobj)) {
        ftPr_SpecialHi_8013CD34(gobj);
    }
}

void ftPr_SpecialAirHi_Coll(HSD_GObj* gobj)
{
    if (ft_CheckGroundAndLedge(gobj, 0)) {
        ftPr_SpecialHi_8013CDD8(gobj);
        return;
    }

    if (ftCliffCommon_80081298(gobj)) {
        return;
    }
}

void ftPr_SpecialHi_8013CD34(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);

    ftCommon_8007D5D4(fp);

    if (ftPr_Init_804D9C10 == fp->facing_dir) {
        Fighter_ChangeMotionState(gobj, ftPr_MS_SpecialAirHiL, 0x0C4C508A,
                                  fp->cur_anim_frame, ftPr_Init_804D9C18,
                                  ftPr_Init_804D9C14, NULL);
    } else {
        Fighter_ChangeMotionState(gobj, ftPr_MS_SpecialAirHiR, 0x0C4C508A,
                                  fp->cur_anim_frame, ftPr_Init_804D9C18,
                                  ftPr_Init_804D9C14, NULL);
    }

    fp->accessory4_cb = ftPr_Init_8013C94C;
}

void ftPr_SpecialHi_8013CDD8(Fighter_GObj* fighter_gobj)
{
    Fighter* fighter = fighter_gobj->user_data;
    ftCommon_8007D7FC(fighter);
    if (ftPr_Init_804D9C10 == fighter->facing_dir) {
        Fighter_ChangeMotionState(fighter_gobj, ftPr_MS_SpecialHiL,
                                  0x0C4C508AU, fighter->cur_anim_frame,
                                  ftPr_Init_804D9C18, ftPr_Init_804D9C14,
                                  NULL);
    } else {
        Fighter_ChangeMotionState(fighter_gobj, ftPr_MS_SpecialHiR,
                                  0x0C4C508AU, fighter->cur_anim_frame,
                                  ftPr_Init_804D9C18, ftPr_Init_804D9C14,
                                  NULL);
    }
    fighter->accessory4_cb = ftPr_Init_8013C94C;
}

void ftPr_SpecialHi_8013CE7C(Fighter_GObj* fighter_gobj)
{
    Fighter* fighter = GET_FIGHTER(fighter_gobj);
    fighter->accessory4_cb = NULL;
}

extern float const ftPr_Init_804D9C20;
extern float const ftPr_Init_804D9C24;
extern float const ftPr_Init_804D9C28;

void ftPr_SpecialLw_Enter(Fighter_GObj* gobj)
{
    Fighter* fp = gobj->user_data;
    u8 _[8];

    if (ftPr_Init_804D9C20 == fp->facing_dir) {
        Fighter_ChangeMotionState(gobj, ftPr_MS_SpecialLwL, 0U,
                                  ftPr_Init_804D9C24, ftPr_Init_804D9C28,
                                  ftPr_Init_804D9C24, NULL);
    } else {
        Fighter_ChangeMotionState(gobj, ftPr_MS_SpecialLwR, 0U,
                                  ftPr_Init_804D9C24, ftPr_Init_804D9C28,
                                  ftPr_Init_804D9C24, NULL);
    }
    ftAnim_8006EBA4(gobj);
    fp = gobj->user_data;
    fp->cmd_vars[0] = 0;
    fp->accessory4_cb = &ftPr_SpecialHi_8013CE7C;
}

void ftPr_SpecialAirLw_Enter(Fighter_GObj* gobj)
{
    Fighter* fp = gobj->user_data;
    u8 _[8];

    if (ftPr_Init_804D9C20 == fp->facing_dir) {
        Fighter_ChangeMotionState(gobj, ftPr_MS_SpecialAirLwL, 0U,
                                  ftPr_Init_804D9C24, ftPr_Init_804D9C28,
                                  ftPr_Init_804D9C24, NULL);
    } else {
        Fighter_ChangeMotionState(gobj, ftPr_MS_SpecialAirLwR, 0U,
                                  ftPr_Init_804D9C24, ftPr_Init_804D9C28,
                                  ftPr_Init_804D9C24, NULL);
    }
    ftAnim_8006EBA4(gobj);
    fp = gobj->user_data;
    fp->cmd_vars[0] = 0;
    fp->accessory4_cb = &ftPr_SpecialHi_8013CE7C;
}

void ftPr_SpecialLw_Anim(Fighter_GObj* fighter_gobj)
{
    if (!ftAnim_IsFramesRemaining(fighter_gobj)) {
        ft_8008A2BC(fighter_gobj);
    }
}

void ftPr_SpecialAirLw_Anim(Fighter_GObj* fighter_gobj)
{
    if (!ftAnim_IsFramesRemaining(fighter_gobj)) {
        ftCo_800CC730(fighter_gobj);
    }
}

void ftPr_SpecialLw_IASA(HSD_GObj* arg0) {}

void ftPr_SpecialAirLw_IASA(HSD_GObj* arg0) {}

void ftPr_SpecialLw_Phys(HSD_GObj* gobj)
{
    ft_80084F3C(gobj);
}

void ftPr_SpecialAirLw_Phys(HSD_GObj* gobj)
{
    ft_80084EEC(gobj);
}

void ftPr_SpecialLw_Coll(HSD_GObj* gobj)
{
    if (!ft_800827A0(gobj)) {
        ftPr_SpecialLw_8013D104(gobj);
    }
}

void ftPr_SpecialAirLw_Coll(HSD_GObj* gobj)
{
    if (ft_80081D0C(gobj) != GA_Ground) {
        ftPr_SpecialLw_8013D19C(gobj);
    }
}

void ftPr_SpecialLw_8013D104(Fighter_GObj* gobj)
{
    Fighter* fp = gobj->user_data;
    ftCommon_8007D5D4(fp);
    if (ftPr_Init_804D9C20 == fp->facing_dir) {
        Fighter_ChangeMotionState(gobj, ftPr_MS_SpecialAirLwL, 0x0C4C508EU,
                                  fp->cur_anim_frame, ftPr_Init_804D9C28,
                                  ftPr_Init_804D9C24, NULL);
        return;
    }
    Fighter_ChangeMotionState(gobj, ftPr_MS_SpecialAirLwR, 0x0C4C508EU,
                              fp->cur_anim_frame, ftPr_Init_804D9C28,
                              ftPr_Init_804D9C24, NULL);
}

void ftPr_SpecialLw_8013D19C(Fighter_GObj* gobj)
{
    Fighter* fp = gobj->user_data;
    ftCommon_8007D7FC(fp);
    if (ftPr_Init_804D9C20 == fp->facing_dir) {
        Fighter_ChangeMotionState(gobj, ftPr_MS_SpecialLwL, 0x0C4C508EU,
                                  fp->cur_anim_frame, ftPr_Init_804D9C28,
                                  ftPr_Init_804D9C24, NULL);
        return;
    }
    Fighter_ChangeMotionState(gobj, ftPr_MS_SpecialLwR, 0x0C4C508EU,
                              fp->cur_anim_frame, ftPr_Init_804D9C28,
                              ftPr_Init_804D9C24, NULL);
}

extern float const ftPr_Init_804D9C30;
extern float const ftPr_Init_804D9C38;

void ftPr_SpecialS_Enter(Fighter_GObj* fighter_gobj)
{
    Fighter* fighter = GET_FIGHTER(fighter_gobj);
    Fighter_ChangeMotionState(fighter_gobj, 0x16B, 0, ftPr_Init_804D9C30,
                              ftPr_Init_804D9C38, ftPr_Init_804D9C30, NULL);
    ftAnim_8006EBA4(fighter_gobj);
    fighter->cmd_vars[0] = fighter->cmd_vars[1] = fighter->cmd_vars[2] =
        fighter->cmd_vars[3] = 0;
}

void ftPr_SpecialAirS_Enter(Fighter_GObj* fighter_gobj)
{
    Fighter* fighter = GET_FIGHTER(fighter_gobj);

    Fighter_ChangeMotionState(fighter_gobj, 0x16C, 0, ftPr_Init_804D9C30,
                              ftPr_Init_804D9C38, ftPr_Init_804D9C30, NULL);
    ftAnim_8006EBA4(fighter_gobj);
    fighter->cmd_vars[0] = fighter->cmd_vars[1] = fighter->cmd_vars[2] =
        fighter->cmd_vars[3] = 0;
}

void ftPr_SpecialS_Anim(Fighter_GObj* gobj)
{
    if (ftAnim_IsFramesRemaining(gobj) == 0) {
        ft_8008A2BC(gobj);
    }
}

void ftPr_SpecialAirS_Anim(Fighter_GObj* gobj)
{
    if (ftAnim_IsFramesRemaining(gobj) == 0) {
        ftCo_800CC730(gobj);
    }
}

void ftPr_SpecialS_IASA(HSD_GObj* arg0) {}

void ftPr_SpecialAirS_IASA(HSD_GObj* arg0) {}

void ftPr_SpecialS_Phys(Fighter_GObj* gobj)
{
    ft_80084FA8(gobj);
}

extern float const ftPr_Init_804D9C34;

void ftPr_SpecialAirS_Phys(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialS_Coll(Fighter_GObj* gobj)
{
    if (ft_800827A0(gobj) == GA_Ground) {
        ftPr_SpecialS_8013D590(gobj);
    }
}

void ftPr_SpecialAirS_Coll(Fighter_GObj* gobj)
{
    if (ft_80081D0C(gobj) != GA_Ground) {
        ftPr_SpecialS_8013D5F0(gobj);
    }
}

void ftPr_SpecialS_8013D590(Fighter_GObj* gobj)
{
    Fighter* fp = gobj->user_data;
    ftCommon_8007D5D4(fp);
    Fighter_ChangeMotionState(gobj, ftPr_MS_SpecialAirS, 0x0C4C508AU,
                              fp->cur_anim_frame, ftPr_Init_804D9C38,
                              ftPr_Init_804D9C30, NULL);
}

void ftPr_SpecialS_8013D5F0(Fighter_GObj* gobj)
{
    Fighter* fp = gobj->user_data;
    ftCommon_8007D7FC(fp);
    Fighter_ChangeMotionState(gobj, ftPr_MS_SpecialS, 0x0C4C508AU,
                              fp->cur_anim_frame, ftPr_Init_804D9C38,
                              ftPr_Init_804D9C30, NULL);
    ftCommon_8007D468(fp);
}

extern char* ftPr_Init_804D3E98;
extern char* ftPr_Init_804D3EA0;
extern char* ftPr_Init_804D3EA8;
extern f64 const ftPr_Init_804D9C40;
extern float const ftPr_Init_804D9C48;

void ftPr_SpecialS_8013D658(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

extern float const ftPr_Init_804D9C4C;

void ftPr_SpecialS_8013D764(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialS_8013D8B0(Fighter_GObj* gobj)
{
    ft_80089824(gobj);
    ft_800892A0(gobj);
}

void ftPr_SpecialS_8013D8E4(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

extern float const ftPr_Init_804D9C50;

void ftPr_SpecialS_8013DA24(HSD_GObj* gobj, bool unk, MotionFlags flags,
                            float anim_start)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialS_8013DC64(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

extern f64 const ftPr_Init_804D9C58;
extern float const ftPr_Init_804D9C60;

void ftPr_SpecialS_8013DD54(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialN_Enter(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialAirN_Enter(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

extern float const ftPr_Init_804D9C64;

void ftPr_SpecialNStart_Anim(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

extern float const ftPr_Init_804D9C68;
extern f64 const ftPr_Init_804D9C70;

void ftPr_SpecialNLoop_Anim(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialNFull_Anim(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

extern f64 const ftPr_Init_804D9C78;
extern f64 const ftPr_Init_804D9C80;
extern f64 const ftPr_Init_804D9C88;

void ftPr_SpecialNRelease_Anim(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialNTurn_Anim(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialNEnd_Anim(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialAirNStart_Anim(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialAirNChargeLoop_Anim(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialAirNChargeFull_Anim(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialAirNChargeRelease_Anim(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialAirNStartTurn_Anim(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialAirNEnd_Anim(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialNHit_Anim(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialNStart_IASA(HSD_GObj* arg0) {}

void ftPr_SpecialNLoop_IASA(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialNFull_IASA(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

extern float const ftPr_Init_804D9C90;

void ftPr_SpecialNRelease_IASA(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialNTurn_IASA(HSD_GObj* arg0) {}

void ftPr_SpecialNEnd_IASA(HSD_GObj* arg0) {}

void ftPr_SpecialAirNStart_IASA(HSD_GObj* arg0) {}

void ftPr_SpecialAirNChargeLoop_IASA(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialAirNChargeFull_IASA(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialAirNChargeRelease_IASA(HSD_GObj* arg0) {}

void ftPr_SpecialAirNStartTurn_IASA(HSD_GObj* arg0) {}

void ftPr_SpecialAirNEnd_IASA(HSD_GObj* arg0) {}

void ftPr_SpecialNHit_IASA(HSD_GObj* arg0) {}

void ftPr_SpecialNStart_Phys(Fighter_GObj* gobj)
{
    Fighter* fp = gobj->user_data;
    fp->xE4_ground_accel_1 = ftPr_Init_804D9C48;
    fp->gr_vel = ftPr_Init_804D9C48;
    fp->self_vel.x = ftPr_Init_804D9C64 * fp->facing_dir;
    fp->self_vel.y = ftPr_Init_804D9C48;
    fp->x74_anim_vel.y = ftPr_Init_804D9C48;
    fp->x74_anim_vel.x = ftPr_Init_804D9C48;
}

void ftPr_SpecialNLoop_Phys(Fighter_GObj* gobj)
{
    Fighter* fp = gobj->user_data;
    fp->xE4_ground_accel_1 = ftPr_Init_804D9C48;
    fp->gr_vel = ftPr_Init_804D9C48;
    fp->self_vel.x = ftPr_Init_804D9C64 * fp->facing_dir;
    fp->self_vel.y = ftPr_Init_804D9C48;
    fp->x74_anim_vel.y = ftPr_Init_804D9C48;
    fp->x74_anim_vel.x = ftPr_Init_804D9C48;
}

void ftPr_SpecialNFull_Phys(Fighter_GObj* gobj)
{
    Fighter* fp = gobj->user_data;
    fp->xE4_ground_accel_1 = ftPr_Init_804D9C48;
    fp->gr_vel = ftPr_Init_804D9C48;
    fp->self_vel.x = ftPr_Init_804D9C64 * fp->facing_dir;
    fp->self_vel.y = ftPr_Init_804D9C48;
    fp->x74_anim_vel.y = ftPr_Init_804D9C48;
    fp->x74_anim_vel.x = ftPr_Init_804D9C48;
}

void ftPr_SpecialNRelease_Phys(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialNTurn_Phys(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialNEnd_Phys(Fighter_GObj* gobj)
{
    Fighter* fp = gobj->user_data;
    ftCommon_8007C930(fp, fp->co_attrs.gr_friction);
    ftCommon_8007CB74(gobj);
}

void ftPr_SpecialAirNStart_Phys(HSD_GObj* gobj)
{
    Fighter* fp;
    ftPurinAttributes* da;

    fp = gobj->user_data;
    da = fp->dat_attrs;
    ftCommon_8007D494(fp, da->x3C, da->x40);
}

void ftPr_SpecialAirNChargeLoop_Phys(HSD_GObj* gobj)
{
    Fighter* fp;
    ftPurinAttributes* da;

    fp = gobj->user_data;
    da = fp->dat_attrs;
    ftCommon_8007D494(fp, da->x3C, da->x40);
}

void ftPr_SpecialAirNChargeFull_Phys(HSD_GObj* gobj)
{
    Fighter* fp;
    ftPurinAttributes* da;

    fp = gobj->user_data;
    da = fp->dat_attrs;
    ftCommon_8007D494(fp, da->x3C, da->x40);
}

void ftPr_SpecialAirNChargeRelease_Phys(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialAirNStartTurn_Phys(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialAirNEnd_Phys(HSD_GObj* gobj)
{
    Fighter* fp;
    ftPurinAttributes* da;

    fp = gobj->user_data;
    da = fp->dat_attrs;
    ftCommon_8007D494(fp, da->x3C, da->x40);
}

void ftPr_SpecialNHit_Phys(HSD_GObj* gobj)
{
    Fighter* fp;
    ftPurinAttributes* da;
    u8 _[8];

    fp = gobj->user_data;
    da = fp->dat_attrs;

    if (fp->self_vel.y <= -da->x40) {
        ftCommon_8007D268(fp);
    }
    ftCommon_8007D494(fp, da->x3C, da->x40);
}

/* Non-matching due to float allocation https://decomp.me/scratch/OYlcJ
 */
#ifdef MUST_MATCH
void ftPr_SpecialNStart_Coll(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}
#else
void ftPr_SpecialNStart_Coll(HSD_GObj* gobj)
{
    s32 state;
    Fighter* fp;
    u8 _[8];

    fp = gobj->user_data;
    if (ft_80082708((Fighter_GObj*) gobj) == GA_Ground) {
        ftCommon_8007D5D4(fp);
        if (ftPr_Init_804D9C50 == fp->mv.pr.specialn.x34) {
            state = ftPr_MS_SpecialAirNStartR;
        } else {
            state = ftPr_MS_SpecialAirNStartL;
        }
        Fighter_ChangeMotionState((Fighter_GObj*) gobj, state, 0x0C4C5092U,
                                  fp->cur_anim_frame, ftPr_Init_804D9C50,
                                  ftPr_Init_804D9C48, NULL);
        fp = gobj->user_data;
        fp->death2_cb = ftPr_SpecialS_8013D658;
        fp->take_dmg_cb = ftPr_SpecialS_8013D658;
        fp->deal_dmg_cb = ftPr_SpecialS_8013D764;
        fp->x21F8 = ftPr_SpecialN_8014222C;
    }
}
#endif

void ftPr_SpecialNLoop_Coll(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialNFull_Coll(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

extern float const ftPr_Init_804D9C54;

void ftPr_SpecialNRelease_Coll(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialNTurn_Coll(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialNEnd_Coll(Fighter_GObj* gobj)
{
    Fighter* fp = gobj->user_data;
    if (ft_80082708(gobj) == GA_Ground) {
        ftCommon_8007D5D4(fp);
        ftPr_SpecialS_8013DA24(gobj, 1, 0x0C4C5092, fp->cur_anim_frame);
    }
}

void ftPr_SpecialAirNStart_Coll(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialAirNChargeLoop_Coll(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialAirNChargeFull_Coll(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialAirNChargeRelease_Coll(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialAirNStartTurn_Coll(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialAirNEnd_Coll(Fighter_GObj* gobj)
{
    Fighter* fp = gobj->user_data;
    if (ft_80081D0C(gobj) != GA_Ground) {
        ftCommon_8007D7FC(fp);
        ftPr_SpecialS_8013DA24(gobj, 0, 0x0C4C5092, fp->cur_anim_frame);
    }
}

void ftPr_SpecialNHit_Coll(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}

void ftPr_SpecialN_8014222C(HSD_GObj* gobj)
{
    NOT_IMPLEMENTED;
}
