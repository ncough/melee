#include <platform.h>

#include "ftCo_Rebound.h"

#include "ft/fighter.h"
#include "ft/ft_081B.h"
#include "ft/ft_0892.h"
#include "ft/ftanim.h"
#include "ft/ftcommon.h"
#include "ft/types.h"
#include "ftCommon/types.h"

/* 099E44 */ static void ftCo_80099E44(ftCo_GObj* gobj);

void ftCo_80099D9C(ftCo_GObj* gobj)
{
    u8 _[8] = { 0 };
    ftCo_Fighter* fp = gobj->user_data;
    Fighter_ChangeMotionState(gobj, ftCo_MS_ReboundStop, Ft_MF_None, 0, 1, 0,
                              NULL);
    {
        float fp_x191C = fp->dmg.x191C;
        fp->mv.co.rebound.anim_start = (fp->co_attrs.x9C + 0.1f) / fp_x191C;
        fp->mv.co.rebound.x0 =
            -fp->dmg.x1920 *
            (fp_x191C * p_ftCommonData->x3D8 + p_ftCommonData->x3DC);
    }
    ftCommon_800804A0(fp, fp->mv.co.rebound.x0);
}

void ftCo_ReboundStop_Anim(ftCo_GObj* gobj)
{
    ftCo_80099E44(gobj);
}

void ftCo_80099E44(ftCo_GObj* gobj)
{
    ftCo_Fighter* fp = gobj->user_data;
    Fighter_ChangeMotionState(gobj, ftCo_MS_Rebound, Ft_MF_None, 0,
                              fp->mv.co.rebound.anim_start, 0, NULL);
}

void ftCo_Rebound_Anim(ftCo_GObj* gobj)
{
    if (!ftAnim_IsFramesRemaining(gobj)) {
        ft_8008A2BC(gobj);
    }
}

void ftCo_Rebound_IASA(ftCo_GObj* gobj) {}

void ftCo_Rebound_Phys(ftCo_GObj* gobj)
{
    ftCo_Fighter* fp = gobj->user_data;
    if (fp->mv.co.rebound.x0) {
        fp->mv.co.rebound.x0 = 0;
    } else {
        ft_80084F3C(gobj);
    }
}

void ftCo_Rebound_Coll(ftCo_GObj* gobj)
{
    ft_80083F88(gobj);
}
