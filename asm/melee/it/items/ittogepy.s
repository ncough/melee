.include "macros.inc"

.section .text

.global it_802D36B0
it_802D36B0:
/* 802D36B0 002D0290  7C 08 02 A6 */	mflr r0
/* 802D36B4 002D0294  90 01 00 04 */	stw r0, 4(r1)
/* 802D36B8 002D0298  38 00 00 00 */	li r0, 0
/* 802D36BC 002D029C  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 802D36C0 002D02A0  93 E1 00 14 */	stw r31, 0x14(r1)
/* 802D36C4 002D02A4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 802D36C8 002D02A8  7C 7E 1B 78 */	mr r30, r3
/* 802D36CC 002D02AC  83 E3 00 2C */	lwz r31, 0x2c(r3)
/* 802D36D0 002D02B0  C0 02 DA D0 */	lfs f0, it_804DD4B0@sda21(r2)
/* 802D36D4 002D02B4  80 9F 00 C4 */	lwz r4, 0xc4(r31)
/* 802D36D8 002D02B8  80 84 00 04 */	lwz r4, 4(r4)
/* 802D36DC 002D02BC  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 802D36E0 002D02C0  90 1F 0D B4 */	stw r0, 0xdb4(r31)
/* 802D36E4 002D02C4  90 1F 0D B0 */	stw r0, 0xdb0(r31)
/* 802D36E8 002D02C8  90 1F 0D AC */	stw r0, 0xdac(r31)
/* 802D36EC 002D02CC  C0 24 00 00 */	lfs f1, 0(r4)
/* 802D36F0 002D02D0  4B FA 65 ED */	bl it_80279CDC
/* 802D36F4 002D02D4  7F C3 F3 78 */	mr r3, r30
/* 802D36F8 002D02D8  48 00 03 01 */	bl it_802D39F8
/* 802D36FC 002D02DC  38 7F 00 00 */	addi r3, r31, 0
/* 802D3700 002D02E0  38 80 27 2C */	li r4, 0x272c
/* 802D3704 002D02E4  38 A0 00 7F */	li r5, 0x7f
/* 802D3708 002D02E8  38 C0 00 40 */	li r6, 0x40
/* 802D370C 002D02EC  4B F9 77 79 */	bl Item_8026AE84
/* 802D3710 002D02F0  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802D3714 002D02F4  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 802D3718 002D02F8  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 802D371C 002D02FC  38 21 00 18 */	addi r1, r1, 0x18
/* 802D3720 002D0300  7C 08 03 A6 */	mtlr r0
/* 802D3724 002D0304  4E 80 00 20 */	blr

.global it_802D3728
it_802D3728:
/* 802D3728 002D0308  4E 80 00 20 */	blr

.global it_802D372C
it_802D372C:
/* 802D372C 002D030C  7C 08 02 A6 */	mflr r0
/* 802D3730 002D0310  90 01 00 04 */	stw r0, 4(r1)
/* 802D3734 002D0314  94 21 FF F8 */	stwu r1, -8(r1)
/* 802D3738 002D0318  4B F9 81 5D */	bl it_8026B894
/* 802D373C 002D031C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802D3740 002D0320  38 21 00 08 */	addi r1, r1, 8
/* 802D3744 002D0324  7C 08 03 A6 */	mtlr r0
/* 802D3748 002D0328  4E 80 00 20 */	blr

.global it_802D374C
it_802D374C:
/* 802D374C 002D032C  7C 08 02 A6 */	mflr r0
/* 802D3750 002D0330  90 01 00 04 */	stw r0, 4(r1)
/* 802D3754 002D0334  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 802D3758 002D0338  93 E1 00 14 */	stw r31, 0x14(r1)
/* 802D375C 002D033C  93 C1 00 10 */	stw r30, 0x10(r1)
/* 802D3760 002D0340  7C 7E 1B 78 */	mr r30, r3
/* 802D3764 002D0344  83 E3 00 2C */	lwz r31, 0x2c(r3)
/* 802D3768 002D0348  4B F9 F5 05 */	bl it_80272C6C
/* 802D376C 002D034C  2C 03 00 00 */	cmpwi r3, 0
/* 802D3770 002D0350  40 82 00 34 */	bne .L_802D37A4
/* 802D3774 002D0354  80 7F 0E 34 */	lwz r3, 0xe34(r31)
/* 802D3778 002D0358  38 03 FF FF */	addi r0, r3, -1
/* 802D377C 002D035C  90 1F 0E 34 */	stw r0, 0xe34(r31)
/* 802D3780 002D0360  80 1F 0E 34 */	lwz r0, 0xe34(r31)
/* 802D3784 002D0364  2C 00 00 00 */	cmpwi r0, 0
/* 802D3788 002D0368  41 81 00 10 */	bgt .L_802D3798
/* 802D378C 002D036C  7F C3 F3 78 */	mr r3, r30
/* 802D3790 002D0370  48 00 00 B9 */	bl it_802D3848
/* 802D3794 002D0374  48 00 00 10 */	b .L_802D37A4
.L_802D3798:
/* 802D3798 002D0378  7F C3 F3 78 */	mr r3, r30
/* 802D379C 002D037C  80 9F 00 D0 */	lwz r4, 0xd0(r31)
/* 802D37A0 002D0380  4B F9 55 95 */	bl Item_80268D34
.L_802D37A4:
/* 802D37A4 002D0384  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802D37A8 002D0388  38 60 00 00 */	li r3, 0
/* 802D37AC 002D038C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 802D37B0 002D0390  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 802D37B4 002D0394  38 21 00 18 */	addi r1, r1, 0x18
/* 802D37B8 002D0398  7C 08 03 A6 */	mtlr r0
/* 802D37BC 002D039C  4E 80 00 20 */	blr

.global it_802D37C0
it_802D37C0:
/* 802D37C0 002D03A0  7C 08 02 A6 */	mflr r0
/* 802D37C4 002D03A4  90 01 00 04 */	stw r0, 4(r1)
/* 802D37C8 002D03A8  94 21 FF F8 */	stwu r1, -8(r1)
/* 802D37CC 002D03AC  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 802D37D0 002D03B0  80 04 00 C0 */	lwz r0, 0xc0(r4)
/* 802D37D4 002D03B4  2C 00 00 01 */	cmpwi r0, 1
/* 802D37D8 002D03B8  40 82 00 14 */	bne .L_802D37EC
/* 802D37DC 002D03BC  80 84 00 CC */	lwz r4, 0xcc(r4)
/* 802D37E0 002D03C0  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 802D37E4 002D03C4  C0 44 00 14 */	lfs f2, 0x14(r4)
/* 802D37E8 002D03C8  4B F9 F0 79 */	bl it_80272860
.L_802D37EC:
/* 802D37EC 002D03CC  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802D37F0 002D03D0  38 21 00 08 */	addi r1, r1, 8
/* 802D37F4 002D03D4  7C 08 03 A6 */	mtlr r0
/* 802D37F8 002D03D8  4E 80 00 20 */	blr

.global it_802D37FC
it_802D37FC:
/* 802D37FC 002D03DC  7C 08 02 A6 */	mflr r0
/* 802D3800 002D03E0  90 01 00 04 */	stw r0, 4(r1)
/* 802D3804 002D03E4  94 21 FF F8 */	stwu r1, -8(r1)
/* 802D3808 002D03E8  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 802D380C 002D03EC  80 04 00 C0 */	lwz r0, 0xc0(r4)
/* 802D3810 002D03F0  2C 00 00 01 */	cmpwi r0, 1
/* 802D3814 002D03F4  40 82 00 14 */	bne .L_802D3828
/* 802D3818 002D03F8  3C 80 80 2D */	lis r4, it_802D3728@ha
/* 802D381C 002D03FC  38 84 37 28 */	addi r4, r4, it_802D3728@l
/* 802D3820 002D0400  4B F9 A9 3D */	bl it_8026E15C
/* 802D3824 002D0404  48 00 00 10 */	b .L_802D3834
.L_802D3828:
/* 802D3828 002D0408  3C 80 80 2D */	lis r4, it_802D3728@ha
/* 802D382C 002D040C  38 84 37 28 */	addi r4, r4, it_802D3728@l
/* 802D3830 002D0410  4B F9 9D FD */	bl it_8026D62C
.L_802D3834:
/* 802D3834 002D0414  38 60 00 00 */	li r3, 0
/* 802D3838 002D0418  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802D383C 002D041C  38 21 00 08 */	addi r1, r1, 8
/* 802D3840 002D0420  7C 08 03 A6 */	mtlr r0
/* 802D3844 002D0424  4E 80 00 20 */	blr

.global it_802D3848
it_802D3848:
/* 802D3848 002D0428  7C 08 02 A6 */	mflr r0
/* 802D384C 002D042C  90 01 00 04 */	stw r0, 4(r1)
/* 802D3850 002D0430  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 802D3854 002D0434  93 E1 00 24 */	stw r31, 0x24(r1)
/* 802D3858 002D0438  93 C1 00 20 */	stw r30, 0x20(r1)
/* 802D385C 002D043C  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 802D3860 002D0440  7C 7D 1B 78 */	mr r29, r3
/* 802D3864 002D0444  83 E3 00 2C */	lwz r31, 0x2c(r3)
/* 802D3868 002D0448  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 802D386C 002D044C  83 C3 00 04 */	lwz r30, 4(r3)
/* 802D3870 002D0450  80 7E 00 08 */	lwz r3, 8(r30)
/* 802D3874 002D0454  48 0A CD 0D */	bl HSD_Randi
/* 802D3878 002D0458  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 802D387C 002D045C  7C 03 20 00 */	cmpw r3, r4
/* 802D3880 002D0460  40 80 00 0C */	bge .L_802D388C
/* 802D3884 002D0464  38 80 00 02 */	li r4, 2
/* 802D3888 002D0468  48 00 00 50 */	b .L_802D38D8
.L_802D388C:
/* 802D388C 002D046C  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 802D3890 002D0470  7C 84 02 14 */	add r4, r4, r0
/* 802D3894 002D0474  7C 03 20 00 */	cmpw r3, r4
/* 802D3898 002D0478  40 80 00 0C */	bge .L_802D38A4
/* 802D389C 002D047C  38 80 00 03 */	li r4, 3
/* 802D38A0 002D0480  48 00 00 38 */	b .L_802D38D8
.L_802D38A4:
/* 802D38A4 002D0484  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 802D38A8 002D0488  7C 80 22 14 */	add r4, r0, r4
/* 802D38AC 002D048C  7C 03 20 00 */	cmpw r3, r4
/* 802D38B0 002D0490  40 80 00 0C */	bge .L_802D38BC
/* 802D38B4 002D0494  38 80 00 04 */	li r4, 4
/* 802D38B8 002D0498  48 00 00 20 */	b .L_802D38D8
.L_802D38BC:
/* 802D38BC 002D049C  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 802D38C0 002D04A0  7C 00 22 14 */	add r0, r0, r4
/* 802D38C4 002D04A4  7C 03 00 00 */	cmpw r3, r0
/* 802D38C8 002D04A8  40 80 00 0C */	bge .L_802D38D4
/* 802D38CC 002D04AC  38 80 00 05 */	li r4, 5
/* 802D38D0 002D04B0  48 00 00 08 */	b .L_802D38D8
.L_802D38D4:
/* 802D38D4 002D04B4  38 80 00 06 */	li r4, 6
.L_802D38D8:
/* 802D38D8 002D04B8  38 7D 00 00 */	addi r3, r29, 0
/* 802D38DC 002D04BC  38 A0 00 02 */	li r5, 2
/* 802D38E0 002D04C0  4B F9 55 7D */	bl Item_80268E5C
/* 802D38E4 002D04C4  38 00 00 00 */	li r0, 0
/* 802D38E8 002D04C8  90 1F 0D 28 */	stw r0, 0xd28(r31)
/* 802D38EC 002D04CC  90 1F 0D 2C */	stw r0, 0xd2c(r31)
/* 802D38F0 002D04D0  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802D38F4 002D04D4  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 802D38F8 002D04D8  83 C1 00 20 */	lwz r30, 0x20(r1)
/* 802D38FC 002D04DC  83 A1 00 1C */	lwz r29, 0x1c(r1)
/* 802D3900 002D04E0  38 21 00 28 */	addi r1, r1, 0x28
/* 802D3904 002D04E4  7C 08 03 A6 */	mtlr r0
/* 802D3908 002D04E8  4E 80 00 20 */	blr

.global it_802D390C
it_802D390C:
/* 802D390C 002D04EC  7C 08 02 A6 */	mflr r0
/* 802D3910 002D04F0  90 01 00 04 */	stw r0, 4(r1)
/* 802D3914 002D04F4  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 802D3918 002D04F8  93 E1 00 14 */	stw r31, 0x14(r1)
/* 802D391C 002D04FC  93 C1 00 10 */	stw r30, 0x10(r1)
/* 802D3920 002D0500  7C 7E 1B 78 */	mr r30, r3
/* 802D3924 002D0504  83 E3 00 2C */	lwz r31, 0x2c(r3)
/* 802D3928 002D0508  4B F9 F3 45 */	bl it_80272C6C
/* 802D392C 002D050C  2C 03 00 00 */	cmpwi r3, 0
/* 802D3930 002D0510  40 82 00 10 */	bne .L_802D3940
/* 802D3934 002D0514  7F C3 F3 78 */	mr r3, r30
/* 802D3938 002D0518  80 9F 00 D0 */	lwz r4, 0xd0(r31)
/* 802D393C 002D051C  4B F9 53 F9 */	bl Item_80268D34
.L_802D3940:
/* 802D3940 002D0520  80 1F 0D AC */	lwz r0, 0xdac(r31)
/* 802D3944 002D0524  28 00 00 00 */	cmplwi r0, 0
/* 802D3948 002D0528  41 82 00 0C */	beq .L_802D3954
/* 802D394C 002D052C  38 60 00 01 */	li r3, 1
/* 802D3950 002D0530  48 00 00 08 */	b .L_802D3958
.L_802D3954:
/* 802D3954 002D0534  38 60 00 00 */	li r3, 0
.L_802D3958:
/* 802D3958 002D0538  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802D395C 002D053C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 802D3960 002D0540  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 802D3964 002D0544  38 21 00 18 */	addi r1, r1, 0x18
/* 802D3968 002D0548  7C 08 03 A6 */	mtlr r0
/* 802D396C 002D054C  4E 80 00 20 */	blr

.global it_802D3970
it_802D3970:
/* 802D3970 002D0550  7C 08 02 A6 */	mflr r0
/* 802D3974 002D0554  90 01 00 04 */	stw r0, 4(r1)
/* 802D3978 002D0558  94 21 FF F8 */	stwu r1, -8(r1)
/* 802D397C 002D055C  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 802D3980 002D0560  80 04 00 C0 */	lwz r0, 0xc0(r4)
/* 802D3984 002D0564  2C 00 00 01 */	cmpwi r0, 1
/* 802D3988 002D0568  40 82 00 14 */	bne .L_802D399C
/* 802D398C 002D056C  80 84 00 CC */	lwz r4, 0xcc(r4)
/* 802D3990 002D0570  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 802D3994 002D0574  C0 44 00 14 */	lfs f2, 0x14(r4)
/* 802D3998 002D0578  4B F9 EE C9 */	bl it_80272860
.L_802D399C:
/* 802D399C 002D057C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802D39A0 002D0580  38 21 00 08 */	addi r1, r1, 8
/* 802D39A4 002D0584  7C 08 03 A6 */	mtlr r0
/* 802D39A8 002D0588  4E 80 00 20 */	blr

.global it_802D39AC
it_802D39AC:
/* 802D39AC 002D058C  7C 08 02 A6 */	mflr r0
/* 802D39B0 002D0590  90 01 00 04 */	stw r0, 4(r1)
/* 802D39B4 002D0594  94 21 FF F8 */	stwu r1, -8(r1)
/* 802D39B8 002D0598  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 802D39BC 002D059C  80 04 00 C0 */	lwz r0, 0xc0(r4)
/* 802D39C0 002D05A0  2C 00 00 01 */	cmpwi r0, 1
/* 802D39C4 002D05A4  40 82 00 14 */	bne .L_802D39D8
/* 802D39C8 002D05A8  3C 80 80 2D */	lis r4, it_802D3728@ha
/* 802D39CC 002D05AC  38 84 37 28 */	addi r4, r4, it_802D3728@l
/* 802D39D0 002D05B0  4B F9 A7 8D */	bl it_8026E15C
/* 802D39D4 002D05B4  48 00 00 10 */	b .L_802D39E4
.L_802D39D8:
/* 802D39D8 002D05B8  3C 80 80 2D */	lis r4, it_802D3728@ha
/* 802D39DC 002D05BC  38 84 37 28 */	addi r4, r4, it_802D3728@l
/* 802D39E0 002D05C0  4B F9 9C 4D */	bl it_8026D62C
.L_802D39E4:
/* 802D39E4 002D05C4  38 60 00 00 */	li r3, 0
/* 802D39E8 002D05C8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802D39EC 002D05CC  38 21 00 08 */	addi r1, r1, 8
/* 802D39F0 002D05D0  7C 08 03 A6 */	mtlr r0
/* 802D39F4 002D05D4  4E 80 00 20 */	blr

.global it_802D39F8
it_802D39F8:
/* 802D39F8 002D05D8  7C 08 02 A6 */	mflr r0
/* 802D39FC 002D05DC  90 01 00 04 */	stw r0, 4(r1)
/* 802D3A00 002D05E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D3A04 002D05E4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802D3A08 002D05E8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802D3A0C 002D05EC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802D3A10 002D05F0  7C 7D 1B 78 */	mr r29, r3
/* 802D3A14 002D05F4  83 E3 00 2C */	lwz r31, 0x2c(r3)
/* 802D3A18 002D05F8  80 9F 00 C4 */	lwz r4, 0xc4(r31)
/* 802D3A1C 002D05FC  7F E3 FB 78 */	mr r3, r31
/* 802D3A20 002D0600  83 C4 00 04 */	lwz r30, 4(r4)
/* 802D3A24 002D0604  4B FA 28 99 */	bl it_802762BC
/* 802D3A28 002D0608  38 7D 00 00 */	addi r3, r29, 0
/* 802D3A2C 002D060C  38 80 00 00 */	li r4, 0
/* 802D3A30 002D0610  38 A0 00 02 */	li r5, 2
/* 802D3A34 002D0614  4B F9 54 29 */	bl Item_80268E5C
/* 802D3A38 002D0618  38 00 00 00 */	li r0, 0
/* 802D3A3C 002D061C  90 1F 0D 28 */	stw r0, 0xd28(r31)
/* 802D3A40 002D0620  90 1F 0D 2C */	stw r0, 0xd2c(r31)
/* 802D3A44 002D0624  80 1E 00 04 */	lwz r0, 4(r30)
/* 802D3A48 002D0628  90 1F 0E 34 */	stw r0, 0xe34(r31)
/* 802D3A4C 002D062C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D3A50 002D0630  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802D3A54 002D0634  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802D3A58 002D0638  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802D3A5C 002D063C  38 21 00 20 */	addi r1, r1, 0x20
/* 802D3A60 002D0640  7C 08 03 A6 */	mtlr r0
/* 802D3A64 002D0644  4E 80 00 20 */	blr

.global it_802D3A68
it_802D3A68:
/* 802D3A68 002D0648  7C 08 02 A6 */	mflr r0
/* 802D3A6C 002D064C  90 01 00 04 */	stw r0, 4(r1)
/* 802D3A70 002D0650  94 21 FF F8 */	stwu r1, -8(r1)
/* 802D3A74 002D0654  4B FA 65 85 */	bl it_80279FF8
/* 802D3A78 002D0658  38 60 00 00 */	li r3, 0
/* 802D3A7C 002D065C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802D3A80 002D0660  38 21 00 08 */	addi r1, r1, 8
/* 802D3A84 002D0664  7C 08 03 A6 */	mtlr r0
/* 802D3A88 002D0668  4E 80 00 20 */	blr

.global it_802D3A8C
it_802D3A8C:
/* 802D3A8C 002D066C  7C 08 02 A6 */	mflr r0
/* 802D3A90 002D0670  90 01 00 04 */	stw r0, 4(r1)
/* 802D3A94 002D0674  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 802D3A98 002D0678  93 E1 00 14 */	stw r31, 0x14(r1)
/* 802D3A9C 002D067C  93 C1 00 10 */	stw r30, 0x10(r1)
/* 802D3AA0 002D0680  7C 7E 1B 78 */	mr r30, r3
/* 802D3AA4 002D0684  4B FA 65 F9 */	bl it_8027A09C
/* 802D3AA8 002D0688  2C 03 00 00 */	cmpwi r3, 0
/* 802D3AAC 002D068C  41 82 00 2C */	beq .L_802D3AD8
/* 802D3AB0 002D0690  83 FE 00 2C */	lwz r31, 0x2c(r30)
/* 802D3AB4 002D0694  7F C3 F3 78 */	mr r3, r30
/* 802D3AB8 002D0698  4B F9 F9 9D */	bl it_80273454
/* 802D3ABC 002D069C  38 7E 00 00 */	addi r3, r30, 0
/* 802D3AC0 002D06A0  38 80 00 01 */	li r4, 1
/* 802D3AC4 002D06A4  38 A0 00 02 */	li r5, 2
/* 802D3AC8 002D06A8  4B F9 53 95 */	bl Item_80268E5C
/* 802D3ACC 002D06AC  38 00 00 00 */	li r0, 0
/* 802D3AD0 002D06B0  90 1F 0D 28 */	stw r0, 0xd28(r31)
/* 802D3AD4 002D06B4  90 1F 0D 2C */	stw r0, 0xd2c(r31)
.L_802D3AD8:
/* 802D3AD8 002D06B8  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802D3ADC 002D06BC  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 802D3AE0 002D06C0  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 802D3AE4 002D06C4  38 21 00 18 */	addi r1, r1, 0x18
/* 802D3AE8 002D06C8  7C 08 03 A6 */	mtlr r0
/* 802D3AEC 002D06CC  4E 80 00 20 */	blr

.global it_802D3AF0
it_802D3AF0:
/* 802D3AF0 002D06D0  7C 08 02 A6 */	mflr r0
/* 802D3AF4 002D06D4  3C 80 80 2D */	lis r4, it_802D3728@ha
/* 802D3AF8 002D06D8  90 01 00 04 */	stw r0, 4(r1)
/* 802D3AFC 002D06DC  38 84 37 28 */	addi r4, r4, it_802D3728@l
/* 802D3B00 002D06E0  94 21 FF F8 */	stwu r1, -8(r1)
/* 802D3B04 002D06E4  4B FA 66 15 */	bl it_8027A118
/* 802D3B08 002D06E8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802D3B0C 002D06EC  38 21 00 08 */	addi r1, r1, 8
/* 802D3B10 002D06F0  7C 08 03 A6 */	mtlr r0
/* 802D3B14 002D06F4  4E 80 00 20 */	blr


.section .data
    .balign 8
.global it_803F8058
it_803F8058:
    .4byte 0
    .4byte it_802D3A68
    .4byte it_802D3A8C
    .4byte it_802D3AF0
    .4byte 1
    .4byte it_802D374C
    .4byte it_802D37C0
    .4byte it_802D37FC
    .4byte 2
    .4byte it_802D390C
    .4byte it_802D3970
    .4byte it_802D39AC
    .4byte 3
    .4byte it_802D390C
    .4byte it_802D3970
    .4byte it_802D39AC
    .4byte 4
    .4byte it_802D390C
    .4byte it_802D3970
    .4byte it_802D39AC
    .4byte 5
    .4byte it_802D390C
    .4byte it_802D3970
    .4byte it_802D39AC
    .4byte 6
    .4byte it_802D390C
    .4byte it_802D3970
    .4byte it_802D39AC


.section .sdata2
    .balign 8
.global it_804DD4B0
it_804DD4B0:
    .4byte 0x00000000
