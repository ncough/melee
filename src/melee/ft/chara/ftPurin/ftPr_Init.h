#ifndef GALE01_13C2F8
#define GALE01_13C2F8

#include <platform.h>
#include "ftPurin/forward.h"
#include <dolphin/mtx/forward.h>
#include <baselib/forward.h>

#include "ft/types.h"

/* 13C2F8 */ void ftPr_Init_8013C2F8(void);
/* 13C318 */ void ftPr_Init_OnDeath(HSD_GObj* gobj);
/* 13C340 */ void ftPr_Init_OnUserDataRemove(HSD_GObj* gobj);
/* 13C360 */ void ftPr_Init_8013C360(HSD_GObj* gobj);
/* 13C494 */ void ftPr_Init_8013C494(HSD_GObj* gobj);
/* 13C4F0 */ void ftPr_Init_UnkMtxFunc0(HSD_GObj* gobj, int arg1, Mtx vmtx);
/* 13C614 */ void ftPr_Init_UnkIntBoolFunc0(Fighter* fp, int arg1, bool arg2);
/* 13C664 */ void* ftPr_Init_UnkMotionStates6(HSD_GObj* gobj);
/* 13C67C */ void ftPr_Init_OnLoad(HSD_GObj* gobj);
/* 13C6EC */ void ftPr_Init_OnItemPickup(HSD_GObj* gobj, bool flag);
/* 13C798 */ void ftPr_Init_OnItemInvisible(HSD_GObj* gobj);
/* 13C7E8 */ void ftPr_Init_OnItemVisible(HSD_GObj* gobj);
/* 13C838 */ void ftPr_Init_OnItemDrop(HSD_GObj* gobj, bool bool1);
/* 13C88C */ void ftPr_Init_LoadSpecialAttrs(HSD_GObj* gobj);
/* 13C8C4 */ void ftPr_Init_OnKnockbackEnter(HSD_GObj* gobj);
/* 13C908 */ void ftPr_Init_OnKnockbackExit(HSD_GObj* gobj);
/* 13C94C */ void ftPr_Init_8013C94C(HSD_GObj* gobj);
/* 13C9C8 */ void ftPr_SpecialHi_Enter(HSD_GObj* gobj);
/* 13CA98 */ void ftPr_SpecialAirHi_Enter(HSD_GObj* gobj);
/* 13CB68 */ void ftPr_SpecialHi_Anim(HSD_GObj* gobj);
/* 13CBE4 */ void ftPr_SpecialAirHi_Anim(HSD_GObj* gobj);
/* 13CC60 */ void ftPr_SpecialHi_IASA(HSD_GObj* gobj);
/* 13CC64 */ void ftPr_SpecialAirHi_IASA(HSD_GObj* gobj);
/* 13CC68 */ void ftPr_SpecialHi_Phys(HSD_GObj* gobj);
/* 13CC88 */ void ftPr_SpecialAirHi_Phys(HSD_GObj* gobj);
/* 13CCA8 */ void ftPr_SpecialHi_Coll(HSD_GObj* gobj);
/* 13CCE4 */ void ftPr_SpecialAirHi_Coll(HSD_GObj* gobj);
/* 13CD34 */ void ftPr_SpecialHi_8013CD34(HSD_GObj* gobj);
/* 13CDD8 */ void ftPr_SpecialHi_8013CDD8(HSD_GObj* gobj);
/* 13CE7C */ void ftPr_SpecialHi_8013CE7C(HSD_GObj* gobj);
/* 13CE8C */ void ftPr_SpecialLw_Enter(HSD_GObj* gobj);
/* 13CF2C */ void ftPr_SpecialAirLw_Enter(HSD_GObj* gobj);
/* 13CFCC */ void ftPr_SpecialLw_Anim(HSD_GObj* gobj);
/* 13D008 */ void ftPr_SpecialAirLw_Anim(HSD_GObj* gobj);
/* 13D044 */ void ftPr_SpecialLw_IASA(HSD_GObj* gobj);
/* 13D048 */ void ftPr_SpecialAirLw_IASA(HSD_GObj* gobj);
/* 13D04C */ void ftPr_SpecialLw_Phys(HSD_GObj* gobj);
/* 13D06C */ void ftPr_SpecialAirLw_Phys(HSD_GObj* gobj);
/* 13D08C */ void ftPr_SpecialLw_Coll(HSD_GObj* gobj);
/* 13D0C8 */ void ftPr_SpecialAirLw_Coll(HSD_GObj* gobj);
/* 13D104 */ void ftPr_SpecialLw_8013D104(HSD_GObj* gobj);
/* 13D19C */ void ftPr_SpecialLw_8013D19C(HSD_GObj* gobj);
/* 13D234 */ void ftPr_SpecialS_Enter(HSD_GObj* gobj);
/* 13D2A0 */ void ftPr_SpecialAirS_Enter(HSD_GObj* gobj);
/* 13D30C */ void ftPr_SpecialS_Anim(HSD_GObj* gobj);
/* 13D348 */ void ftPr_SpecialAirS_Anim(HSD_GObj* gobj);
/* 13D384 */ void ftPr_SpecialS_IASA(HSD_GObj* gobj);
/* 13D388 */ void ftPr_SpecialAirS_IASA(HSD_GObj* gobj);
/* 13D38C */ void ftPr_SpecialS_Phys(HSD_GObj* gobj);
/* 13D3AC */ void ftPr_SpecialAirS_Phys(HSD_GObj* gobj);
/* 13D518 */ void ftPr_SpecialS_Coll(HSD_GObj* gobj);
/* 13D554 */ void ftPr_SpecialAirS_Coll(HSD_GObj* gobj);
/* 13D590 */ void ftPr_SpecialS_8013D590(HSD_GObj* gobj);
/* 13D5F0 */ void ftPr_SpecialS_8013D5F0(HSD_GObj* gobj);
/* 13D658 */ void ftPr_SpecialS_8013D658(HSD_GObj* gobj);
/* 13D764 */ void ftPr_SpecialS_8013D764(HSD_GObj* gobj);
/* 13D8B0 */ void ftPr_SpecialS_8013D8B0(HSD_GObj* gobj);
/* 13D8E4 */ void ftPr_SpecialS_8013D8E4(HSD_GObj* gobj);
/* 13DA24 */ void ftPr_SpecialS_8013DA24(HSD_GObj* gobj, bool unk,
                                         MotionFlags flags, float anim_start);
/* 13DC64 */ void ftPr_SpecialS_8013DC64(HSD_GObj* gobj);
/* 13DD54 */ void ftPr_SpecialS_8013DD54(HSD_GObj* gobj);
/* 13DEA8 */ void ftPr_SpecialN_Enter(HSD_GObj* gobj);
/* 13DF60 */ void ftPr_SpecialAirN_Enter(HSD_GObj* gobj);
/* 13E014 */ void ftPr_SpecialNStart_Anim(HSD_GObj* gobj);
/* 13E0F0 */ void ftPr_SpecialNLoop_Anim(HSD_GObj* gobj);
/* 13E2A0 */ void ftPr_SpecialNFull_Anim(HSD_GObj* gobj);
/* 13E410 */ void ftPr_SpecialNRelease_Anim(HSD_GObj* gobj);
/* 13E7E0 */ void ftPr_SpecialNTurn_Anim(HSD_GObj* gobj);
/* 13EAD8 */ void ftPr_SpecialNEnd_Anim(HSD_GObj* gobj);
/* 13EDB0 */ void ftPr_SpecialAirNStart_Anim(HSD_GObj* gobj);
/* 13EE84 */ void ftPr_SpecialAirNChargeLoop_Anim(HSD_GObj* gobj);
/* 13F034 */ void ftPr_SpecialAirNChargeFull_Anim(HSD_GObj* gobj);
/* 13F1A4 */ void ftPr_SpecialAirNChargeRelease_Anim(HSD_GObj* gobj);
/* 13F708 */ void ftPr_SpecialAirNStartTurn_Anim(HSD_GObj* gobj);
/* 13F9C0 */ void ftPr_SpecialAirNEnd_Anim(HSD_GObj* gobj);
/* 13FCAC */ void ftPr_SpecialNHit_Anim(HSD_GObj* gobj);
/* 13FF00 */ void ftPr_SpecialNStart_IASA(HSD_GObj* gobj);
/* 13FF04 */ void ftPr_SpecialNLoop_IASA(HSD_GObj* gobj);
/* 140064 */ void ftPr_SpecialNFull_IASA(HSD_GObj* gobj);
/* 1401C4 */ void ftPr_SpecialNRelease_IASA(HSD_GObj* gobj);
/* 140344 */ void ftPr_SpecialNTurn_IASA(HSD_GObj* gobj);
/* 140348 */ void ftPr_SpecialNEnd_IASA(HSD_GObj* gobj);
/* 14034C */ void ftPr_SpecialAirNStart_IASA(HSD_GObj* gobj);
/* 140350 */ void ftPr_SpecialAirNChargeLoop_IASA(HSD_GObj* gobj);
/* 1404B0 */ void ftPr_SpecialAirNChargeFull_IASA(HSD_GObj* gobj);
/* 140610 */ void ftPr_SpecialAirNChargeRelease_IASA(HSD_GObj* gobj);
/* 140614 */ void ftPr_SpecialAirNStartTurn_IASA(HSD_GObj* gobj);
/* 140618 */ void ftPr_SpecialAirNEnd_IASA(HSD_GObj* gobj);
/* 14061C */ void ftPr_SpecialNHit_IASA(HSD_GObj* gobj);
/* 140620 */ void ftPr_SpecialNStart_Phys(HSD_GObj* gobj);
/* 140650 */ void ftPr_SpecialNLoop_Phys(HSD_GObj* gobj);
/* 140680 */ void ftPr_SpecialNFull_Phys(HSD_GObj* gobj);
/* 1406B0 */ void ftPr_SpecialNRelease_Phys(HSD_GObj* gobj);
/* 1408B8 */ void ftPr_SpecialNTurn_Phys(HSD_GObj* gobj);
/* 140BAC */ void ftPr_SpecialNEnd_Phys(HSD_GObj* gobj);
/* 140BE8 */ void ftPr_SpecialAirNStart_Phys(HSD_GObj* gobj);
/* 140C18 */ void ftPr_SpecialAirNChargeLoop_Phys(HSD_GObj* gobj);
/* 140C48 */ void ftPr_SpecialAirNChargeFull_Phys(HSD_GObj* gobj);
/* 140C78 */ void ftPr_SpecialAirNChargeRelease_Phys(HSD_GObj* gobj);
/* 140DF8 */ void ftPr_SpecialAirNStartTurn_Phys(HSD_GObj* gobj);
/* 140F10 */ void ftPr_SpecialAirNEnd_Phys(HSD_GObj* gobj);
/* 140F40 */ void ftPr_SpecialNHit_Phys(HSD_GObj* gobj);
/* 140FA4 */ void ftPr_SpecialNStart_Coll(HSD_GObj* gobj);
/* 141054 */ void ftPr_SpecialNLoop_Coll(HSD_GObj* gobj);
/* 141154 */ void ftPr_SpecialNFull_Coll(HSD_GObj* gobj);
/* 141254 */ void ftPr_SpecialNRelease_Coll(HSD_GObj* gobj);
/* 1415F4 */ void ftPr_SpecialNTurn_Coll(HSD_GObj* gobj);
/* 1416D0 */ void ftPr_SpecialNEnd_Coll(HSD_GObj* gobj);
/* 141730 */ void ftPr_SpecialAirNStart_Coll(HSD_GObj* gobj);
/* 1417E0 */ void ftPr_SpecialAirNChargeLoop_Coll(HSD_GObj* gobj);
/* 1418E0 */ void ftPr_SpecialAirNChargeFull_Coll(HSD_GObj* gobj);
/* 1419E0 */ void ftPr_SpecialAirNChargeRelease_Coll(HSD_GObj* gobj);
/* 141FB8 */ void ftPr_SpecialAirNStartTurn_Coll(HSD_GObj* gobj);
/* 142070 */ void ftPr_SpecialAirNEnd_Coll(HSD_GObj* gobj);
/* 1420D0 */ void ftPr_SpecialNHit_Coll(HSD_GObj* gobj);
/* 14222C */ void ftPr_SpecialN_8014222C(HSD_GObj* gobj);
/* 3CFEF0 */ extern MotionState ftPr_Init_MotionStateTable[ftPr_MS_SelfCount];
/* 3D02F0 */ extern char ftPr_Init_DatFilename[];
/* 3D02FC */ extern char ftPr_Init_DataName[];
/* 3D047C */ extern char ftPr_Init_AnimDatFilename[];
/* 3D04F8 */ extern Fighter_DemoStrings ftPr_Init_DemoMotionFilenames;
/* 3D0508 */ extern Fighter_CostumeStrings ftPr_Init_CostumeStrings[];

#endif
