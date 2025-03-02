#include <platform.h>
#include "ftCommon/forward.h"
#include <baselib/forward.h>

#include "ftCo_DamageFall.h"

#include "ftCo_AirCatch.h"
#include "ftCo_AttackAir.h"
#include "ftCo_DamageIce.h"
#include "ftCo_HammerFall.h"
#include "ftCo_HammerWait.h"
#include "ftCo_ItemThrow.h"
#include "ftCo_SpecialAir.h"
#include "math.h"

#include "ft/fighter.h"
#include "ft/ft_081B.h"
#include "ft/ft_0877.h"
#include "ft/ft_0881.h"
#include "ft/ft_0C88.h"
#include "ft/ft_0CEE.h"
#include "ft/ft_0D14.h"
#include "ft/ftcommon.h"
#include "ft/types.h"

#include <placeholder.h>

void ftCo_80090574(ftCo_GObj* gobj)
{
    ft_80081DD4(gobj);
}

void ftCo_80090594(ftCo_Fighter* fp, enum_t arg1, int dmg, FtMotionId msid,
                   enum_t arg4, float hitlag_mul)
{
    if (arg1 != ftCo_MS_DeadUpFallHitCameraIce && arg1 != ftCo_MS_Rebirth &&
        !((unsigned) (arg1 - 6) > 1) && fp->motion_id != ftCo_MS_DamageIce)
    {
        fp->dmg.x18fa_model_shift_frames =
            (u16) (p_ftCommonData->x168 *
                       ftCommon_CalcHitlag(dmg, msid, hitlag_mul) +
                   p_ftCommonData->x16C);
        fp->dmg.x18FC = 0;
        if (arg1 == 2) {
            fp->dmg.x18F8 = 2;
        } else if (arg4 == 1) {
            fp->dmg.x18F8 = 0;
        } else {
            fp->dmg.x18F8 = 1;
            fp->dmg.x1900 = fp->coll_data.floor.normal.x;
            fp->dmg.x1904 = fp->coll_data.floor.normal.y;
        }
        // fp->dmg.x18FD = (u8) &Fighter_804D6530[fp->dmg.x18F8 * 2][1];
    }
}

Vec2* ftCo_80090690(Fighter* fp, Vec2* shift)
{
    if (fp->dmg.x18fa_model_shift_frames != 0) {
        u8 fp_x18F8 = fp->dmg.x18F8;
        Vec2* vec = &Fighter_804D6530[fp_x18F8 * 2][fp->dmg.x18FC];
        if (fp_x18F8 == 1) {
            float x = vec->x * fp->facing_dir;
            shift->x = fp->dmg.x1904 * x;
            shift->y = -fp->dmg.x1900 * x + vec->y;
        } else {
            shift->x = vec->x * fp->facing_dir;
            shift->y = vec->y;
        }
        return shift;
    }
    return NULL;
}

void ftCo_80090718(Fighter* fp)
{
    if (fp->dmg.x1908 != -1) {
        ft_80088148(fp, fp->dmg.x1908, 127, 64);
        fp->dmg.x1908 = -1;
    }
    if (fp->dmg.x190C != NULL) {
        ft_800889F4(fp, fp->dmg.x190C);
        fp->dmg.x190C = NULL;
    }
}

void ftCo_80090780(HSD_GObj* gobj)
{
    ftCo_Fighter* fp = gobj->user_data;
    if ((s32) M2C_FIELD(fp, s32*, 0xE0) == 0) {
        ftCommon_8007D5D4((Fighter*) fp);
    }
    if (ftCo_GetParasolStatus(gobj) != -1) {
        ftCo_800CF4DC(gobj);
    } else {
        Fighter_ChangeMotionState(gobj, 0x26, 0x18001U, 0.0f, 1.0f, 0.0f,
                                  NULL);
        ftCommon_8007D468((Fighter*) fp);
        ftCommon_8007EBAC((Fighter*) fp, 8U, 0U);
    }
}

void ftCo_DamageFall_Anim(ftCo_GObj* gobj) {}

void ftCo_DamageFall_IASA(HSD_GObj* gobj)
{
    ftCo_Fighter* fp = gobj->user_data;
    if (!ftCo_800C5240(gobj)) {
        RETURN_IF(ftCo_SpecialAir_CheckInput(gobj));
        RETURN_IF(ftCo_80095328(gobj, 0));
        RETURN_IF(ftCo_800D7100(gobj));
        RETURN_IF(ftCo_800C3B10(gobj));
        RETURN_IF(ftCo_AttackAir_CheckItemThrowInput(gobj));
        RETURN_IF(ftCo_800D705C(gobj));
        RETURN_IF(ftCo_800CB870(gobj));
        if (ABS(fp->input.lstick.x) >= p_ftCommonData->x210 &&
            fp->x670_timer_lstick_tilt_x < p_ftCommonData->x214)
        {
            ftCo_800CC730(gobj);
            return;
        }
    }
    RETURN_IF(ftCo_800C5DDC(gobj));
    RETURN_IF(ftCo_800C5CD4(gobj));
}

void ftCo_DamageFall_Phys(ftCo_GObj* gobj)
{
    ft_80084DB0(gobj);
}

void ftCo_DamageFall_Coll(ftCo_GObj* gobj)
{
    ft_8008370C(gobj, ftCo_80090984);
}
