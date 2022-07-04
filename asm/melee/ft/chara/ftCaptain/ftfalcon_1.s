.include "macros.inc"

.section .text  # 0x80005940 - 0x803B7240

.global func_800E2B80
func_800E2B80:
/* 800E2B80 000DF760  7C 08 02 A6 */	mflr r0
/* 800E2B84 000DF764  38 80 01 5B */	li r4, 0x15b
/* 800E2B88 000DF768  90 01 00 04 */	stw r0, 4(r1)
/* 800E2B8C 000DF76C  38 00 00 00 */	li r0, 0
/* 800E2B90 000DF770  38 A0 00 00 */	li r5, 0
/* 800E2B94 000DF774  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800E2B98 000DF778  38 C0 00 00 */	li r6, 0
/* 800E2B9C 000DF77C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800E2BA0 000DF780  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800E2BA4 000DF784  7C 7E 1B 78 */	mr r30, r3
/* 800E2BA8 000DF788  83 E3 00 2C */	lwz r31, 0x2c(r3)
/* 800E2BAC 000DF78C  90 1F 22 04 */	stw r0, 0x2204(r31)
/* 800E2BB0 000DF790  90 1F 22 00 */	stw r0, 0x2200(r31)
/* 800E2BB4 000DF794  90 1F 22 10 */	stw r0, 0x2210(r31)
/* 800E2BB8 000DF798  C0 22 98 1C */	lfs f1, lbl_804D91FC/*0.0f*/@sda21(r2)
/* 800E2BBC 000DF79C  C0 42 98 28 */	lfs f2, lbl_804D9208/*1.0f*/@sda21(r2)
/* 800E2BC0 000DF7A0  FC 60 08 90 */	fmr f3, f1
/* 800E2BC4 000DF7A4  4B F8 67 E9 */	bl Fighter_ActionStateChange_800693AC
/* 800E2BC8 000DF7A8  3C 60 80 06 */	lis r3, efLib_PauseAll@ha
/* 800E2BCC 000DF7AC  38 03 BA 40 */	addi r0, r3, efLib_PauseAll@l
/* 800E2BD0 000DF7B0  3C 60 80 06 */	lis r3, efLib_ResumeAll@ha
/* 800E2BD4 000DF7B4  90 1F 21 D4 */	stw r0, 0x21d4(r31)
/* 800E2BD8 000DF7B8  38 03 BA C4 */	addi r0, r3, efLib_ResumeAll@l
/* 800E2BDC 000DF7BC  90 1F 21 D8 */	stw r0, 0x21d8(r31)
/* 800E2BE0 000DF7C0  7F C3 F3 78 */	mr r3, r30
/* 800E2BE4 000DF7C4  4B F8 BF C1 */	bl func_8006EBA4
/* 800E2BE8 000DF7C8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800E2BEC 000DF7CC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800E2BF0 000DF7D0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800E2BF4 000DF7D4  38 21 00 20 */	addi r1, r1, 0x20
/* 800E2BF8 000DF7D8  7C 08 03 A6 */	mtlr r0
/* 800E2BFC 000DF7DC  4E 80 00 20 */	blr 

.global func_800E2C00
func_800E2C00:
/* 800E2C00 000DF7E0  7C 08 02 A6 */	mflr r0
/* 800E2C04 000DF7E4  38 80 01 5C */	li r4, 0x15c
/* 800E2C08 000DF7E8  90 01 00 04 */	stw r0, 4(r1)
/* 800E2C0C 000DF7EC  38 00 00 00 */	li r0, 0
/* 800E2C10 000DF7F0  38 A0 00 00 */	li r5, 0
/* 800E2C14 000DF7F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800E2C18 000DF7F8  38 C0 00 00 */	li r6, 0
/* 800E2C1C 000DF7FC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800E2C20 000DF800  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800E2C24 000DF804  7C 7E 1B 78 */	mr r30, r3
/* 800E2C28 000DF808  83 E3 00 2C */	lwz r31, 0x2c(r3)
/* 800E2C2C 000DF80C  90 1F 22 04 */	stw r0, 0x2204(r31)
/* 800E2C30 000DF810  90 1F 22 00 */	stw r0, 0x2200(r31)
/* 800E2C34 000DF814  90 1F 22 10 */	stw r0, 0x2210(r31)
/* 800E2C38 000DF818  C0 22 98 1C */	lfs f1, lbl_804D91FC/*0.0f*/@sda21(r2)
/* 800E2C3C 000DF81C  C0 42 98 28 */	lfs f2, lbl_804D9208/*1.0f*/@sda21(r2)
/* 800E2C40 000DF820  FC 60 08 90 */	fmr f3, f1
/* 800E2C44 000DF824  4B F8 67 69 */	bl Fighter_ActionStateChange_800693AC
/* 800E2C48 000DF828  3C 60 80 06 */	lis r3, efLib_PauseAll@ha
/* 800E2C4C 000DF82C  38 03 BA 40 */	addi r0, r3, efLib_PauseAll@l
/* 800E2C50 000DF830  3C 60 80 06 */	lis r3, efLib_ResumeAll@ha
/* 800E2C54 000DF834  90 1F 21 D4 */	stw r0, 0x21d4(r31)
/* 800E2C58 000DF838  38 03 BA C4 */	addi r0, r3, efLib_ResumeAll@l
/* 800E2C5C 000DF83C  90 1F 21 D8 */	stw r0, 0x21d8(r31)
/* 800E2C60 000DF840  7F C3 F3 78 */	mr r3, r30
/* 800E2C64 000DF844  4B F8 BF 41 */	bl func_8006EBA4
/* 800E2C68 000DF848  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800E2C6C 000DF84C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800E2C70 000DF850  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800E2C74 000DF854  38 21 00 20 */	addi r1, r1, 0x20
/* 800E2C78 000DF858  7C 08 03 A6 */	mtlr r0
/* 800E2C7C 000DF85C  4E 80 00 20 */	blr 

.global func_800E2C80
func_800E2C80:
/* 800E2C80 000DF860  7C 08 02 A6 */	mflr r0
/* 800E2C84 000DF864  90 01 00 04 */	stw r0, 4(r1)
/* 800E2C88 000DF868  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 800E2C8C 000DF86C  93 E1 00 24 */	stw r31, 0x24(r1)
/* 800E2C90 000DF870  93 C1 00 20 */	stw r30, 0x20(r1)
/* 800E2C94 000DF874  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 800E2C98 000DF878  7C 7D 1B 78 */	mr r29, r3
/* 800E2C9C 000DF87C  83 C3 00 2C */	lwz r30, 0x2c(r3)
/* 800E2CA0 000DF880  C0 1E 08 94 */	lfs f0, 0x894(r30)
/* 800E2CA4 000DF884  FC 00 00 1E */	fctiwz f0, f0
/* 800E2CA8 000DF888  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 800E2CAC 000DF88C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 800E2CB0 000DF890  4B FA 45 F5 */	bl func_800872A4
/* 800E2CB4 000DF894  2C 03 00 19 */	cmpwi r3, 0x19
/* 800E2CB8 000DF898  41 82 00 14 */	beq lbl_800E2CCC
/* 800E2CBC 000DF89C  40 80 00 6C */	bge lbl_800E2D28
/* 800E2CC0 000DF8A0  2C 03 00 02 */	cmpwi r3, 2
/* 800E2CC4 000DF8A4  41 82 00 64 */	beq lbl_800E2D28
/* 800E2CC8 000DF8A8  48 00 00 60 */	b lbl_800E2D28
lbl_800E2CCC:
/* 800E2CCC 000DF8AC  57 E0 07 FF */	clrlwi. r0, r31, 0x1f
/* 800E2CD0 000DF8B0  41 82 00 58 */	beq lbl_800E2D28
/* 800E2CD4 000DF8B4  2C 1F 00 10 */	cmpwi r31, 0x10
/* 800E2CD8 000DF8B8  41 80 00 28 */	blt lbl_800E2D00
/* 800E2CDC 000DF8BC  2C 1F 00 32 */	cmpwi r31, 0x32
/* 800E2CE0 000DF8C0  41 81 00 20 */	bgt lbl_800E2D00
/* 800E2CE4 000DF8C4  C0 22 98 18 */	lfs f1, lbl_804D91F8/*2.0f*/@sda21(r2)
/* 800E2CE8 000DF8C8  38 7E 00 B0 */	addi r3, r30, 0xb0
/* 800E2CEC 000DF8CC  C0 62 98 1C */	lfs f3, lbl_804D91FC/*0.0f*/@sda21(r2)
/* 800E2CF0 000DF8D0  38 80 00 02 */	li r4, 2
/* 800E2CF4 000DF8D4  FC 40 08 90 */	fmr f2, f1
/* 800E2CF8 000DF8D8  4B F2 EC E5 */	bl func_800119DC
/* 800E2CFC 000DF8DC  48 00 00 2C */	b lbl_800E2D28
lbl_800E2D00:
/* 800E2D00 000DF8E0  2C 1F 00 33 */	cmpwi r31, 0x33
/* 800E2D04 000DF8E4  41 80 00 24 */	blt lbl_800E2D28
/* 800E2D08 000DF8E8  2C 1F 00 44 */	cmpwi r31, 0x44
/* 800E2D0C 000DF8EC  41 81 00 1C */	bgt lbl_800E2D28
/* 800E2D10 000DF8F0  C0 22 98 20 */	lfs f1, lbl_804D9200/*4.0f*/@sda21(r2)
/* 800E2D14 000DF8F4  38 7E 00 B0 */	addi r3, r30, 0xb0
/* 800E2D18 000DF8F8  C0 62 98 1C */	lfs f3, lbl_804D91FC/*0.0f*/@sda21(r2)
/* 800E2D1C 000DF8FC  38 80 00 02 */	li r4, 2
/* 800E2D20 000DF900  FC 40 08 90 */	fmr f2, f1
/* 800E2D24 000DF904  4B F2 EC B9 */	bl func_800119DC
lbl_800E2D28:
/* 800E2D28 000DF908  7F A3 EB 78 */	mr r3, r29
/* 800E2D2C 000DF90C  4B F8 C5 0D */	bl ftAnim_IsFramesRemaining
/* 800E2D30 000DF910  2C 03 00 00 */	cmpwi r3, 0
/* 800E2D34 000DF914  40 82 00 0C */	bne lbl_800E2D40
/* 800E2D38 000DF918  7F A3 EB 78 */	mr r3, r29
/* 800E2D3C 000DF91C  4B FA 75 81 */	bl func_8008A2BC
lbl_800E2D40:
/* 800E2D40 000DF920  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 800E2D44 000DF924  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 800E2D48 000DF928  83 C1 00 20 */	lwz r30, 0x20(r1)
/* 800E2D4C 000DF92C  83 A1 00 1C */	lwz r29, 0x1c(r1)
/* 800E2D50 000DF930  38 21 00 28 */	addi r1, r1, 0x28
/* 800E2D54 000DF934  7C 08 03 A6 */	mtlr r0
/* 800E2D58 000DF938  4E 80 00 20 */	blr 

.global func_800E2D5C
func_800E2D5C:
/* 800E2D5C 000DF93C  7C 08 02 A6 */	mflr r0
/* 800E2D60 000DF940  90 01 00 04 */	stw r0, 4(r1)
/* 800E2D64 000DF944  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 800E2D68 000DF948  93 E1 00 24 */	stw r31, 0x24(r1)
/* 800E2D6C 000DF94C  93 C1 00 20 */	stw r30, 0x20(r1)
/* 800E2D70 000DF950  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 800E2D74 000DF954  7C 7D 1B 78 */	mr r29, r3
/* 800E2D78 000DF958  83 C3 00 2C */	lwz r30, 0x2c(r3)
/* 800E2D7C 000DF95C  C0 1E 08 94 */	lfs f0, 0x894(r30)
/* 800E2D80 000DF960  FC 00 00 1E */	fctiwz f0, f0
/* 800E2D84 000DF964  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 800E2D88 000DF968  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 800E2D8C 000DF96C  4B FA 45 19 */	bl func_800872A4
/* 800E2D90 000DF970  2C 03 00 19 */	cmpwi r3, 0x19
/* 800E2D94 000DF974  41 82 00 14 */	beq lbl_800E2DA8
/* 800E2D98 000DF978  40 80 00 6C */	bge lbl_800E2E04
/* 800E2D9C 000DF97C  2C 03 00 02 */	cmpwi r3, 2
/* 800E2DA0 000DF980  41 82 00 64 */	beq lbl_800E2E04
/* 800E2DA4 000DF984  48 00 00 60 */	b lbl_800E2E04
lbl_800E2DA8:
/* 800E2DA8 000DF988  57 E0 07 FF */	clrlwi. r0, r31, 0x1f
/* 800E2DAC 000DF98C  41 82 00 58 */	beq lbl_800E2E04
/* 800E2DB0 000DF990  2C 1F 00 10 */	cmpwi r31, 0x10
/* 800E2DB4 000DF994  41 80 00 28 */	blt lbl_800E2DDC
/* 800E2DB8 000DF998  2C 1F 00 32 */	cmpwi r31, 0x32
/* 800E2DBC 000DF99C  41 81 00 20 */	bgt lbl_800E2DDC
/* 800E2DC0 000DF9A0  C0 22 98 18 */	lfs f1, lbl_804D91F8/*2.0f*/@sda21(r2)
/* 800E2DC4 000DF9A4  38 7E 00 B0 */	addi r3, r30, 0xb0
/* 800E2DC8 000DF9A8  C0 62 98 1C */	lfs f3, lbl_804D91FC/*0.0f*/@sda21(r2)
/* 800E2DCC 000DF9AC  38 80 00 02 */	li r4, 2
/* 800E2DD0 000DF9B0  FC 40 08 90 */	fmr f2, f1
/* 800E2DD4 000DF9B4  4B F2 EC 09 */	bl func_800119DC
/* 800E2DD8 000DF9B8  48 00 00 2C */	b lbl_800E2E04
lbl_800E2DDC:
/* 800E2DDC 000DF9BC  2C 1F 00 33 */	cmpwi r31, 0x33
/* 800E2DE0 000DF9C0  41 80 00 24 */	blt lbl_800E2E04
/* 800E2DE4 000DF9C4  2C 1F 00 44 */	cmpwi r31, 0x44
/* 800E2DE8 000DF9C8  41 81 00 1C */	bgt lbl_800E2E04
/* 800E2DEC 000DF9CC  C0 22 98 20 */	lfs f1, lbl_804D9200/*4.0f*/@sda21(r2)
/* 800E2DF0 000DF9D0  38 7E 00 B0 */	addi r3, r30, 0xb0
/* 800E2DF4 000DF9D4  C0 62 98 1C */	lfs f3, lbl_804D91FC/*0.0f*/@sda21(r2)
/* 800E2DF8 000DF9D8  38 80 00 02 */	li r4, 2
/* 800E2DFC 000DF9DC  FC 40 08 90 */	fmr f2, f1
/* 800E2E00 000DF9E0  4B F2 EB DD */	bl func_800119DC
lbl_800E2E04:
/* 800E2E04 000DF9E4  7F A3 EB 78 */	mr r3, r29
/* 800E2E08 000DF9E8  4B F8 C4 31 */	bl ftAnim_IsFramesRemaining
/* 800E2E0C 000DF9EC  2C 03 00 00 */	cmpwi r3, 0
/* 800E2E10 000DF9F0  40 82 00 0C */	bne lbl_800E2E1C
/* 800E2E14 000DF9F4  7F A3 EB 78 */	mr r3, r29
/* 800E2E18 000DF9F8  4B FE 99 19 */	bl func_800CC730
lbl_800E2E1C:
/* 800E2E1C 000DF9FC  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 800E2E20 000DFA00  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 800E2E24 000DFA04  83 C1 00 20 */	lwz r30, 0x20(r1)
/* 800E2E28 000DFA08  83 A1 00 1C */	lwz r29, 0x1c(r1)
/* 800E2E2C 000DFA0C  38 21 00 28 */	addi r1, r1, 0x28
/* 800E2E30 000DFA10  7C 08 03 A6 */	mtlr r0
/* 800E2E34 000DFA14  4E 80 00 20 */	blr 

.global func_800E2E38
func_800E2E38:
/* 800E2E38 000DFA18  4E 80 00 20 */	blr 

.global func_800E2E3C
func_800E2E3C:
/* 800E2E3C 000DFA1C  7C 08 02 A6 */	mflr r0
/* 800E2E40 000DFA20  90 01 00 04 */	stw r0, 4(r1)
/* 800E2E44 000DFA24  94 21 FF C8 */	stwu r1, -0x38(r1)
/* 800E2E48 000DFA28  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 800E2E4C 000DFA2C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 800E2E50 000DFA30  93 C1 00 28 */	stw r30, 0x28(r1)
/* 800E2E54 000DFA34  83 E3 00 2C */	lwz r31, 0x2c(r3)
/* 800E2E58 000DFA38  80 1F 22 00 */	lwz r0, 0x2200(r31)
/* 800E2E5C 000DFA3C  83 DF 02 D4 */	lwz r30, 0x2d4(r31)
/* 800E2E60 000DFA40  28 00 00 00 */	cmplwi r0, 0
/* 800E2E64 000DFA44  41 82 00 AC */	beq lbl_800E2F10
/* 800E2E68 000DFA48  38 00 00 00 */	li r0, 0
/* 800E2E6C 000DFA4C  90 1F 22 00 */	stw r0, 0x2200(r31)
/* 800E2E70 000DFA50  C0 3F 06 24 */	lfs f1, 0x624(r31)
/* 800E2E74 000DFA54  C0 02 98 1C */	lfs f0, lbl_804D91FC/*0.0f*/@sda21(r2)
/* 800E2E78 000DFA58  80 7F 02 D4 */	lwz r3, 0x2d4(r31)
/* 800E2E7C 000DFA5C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800E2E80 000DFA60  40 80 00 0C */	bge lbl_800E2E8C
/* 800E2E84 000DFA64  FC 60 08 50 */	fneg f3, f1
/* 800E2E88 000DFA68  48 00 00 08 */	b lbl_800E2E90
lbl_800E2E8C:
/* 800E2E8C 000DFA6C  FC 60 08 90 */	fmr f3, f1
lbl_800E2E90:
/* 800E2E90 000DFA70  C0 43 00 04 */	lfs f2, 4(r3)
/* 800E2E94 000DFA74  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 800E2E98 000DFA78  40 81 00 08 */	ble lbl_800E2EA0
/* 800E2E9C 000DFA7C  FC 60 10 90 */	fmr f3, f2
lbl_800E2EA0:
/* 800E2EA0 000DFA80  C0 83 00 00 */	lfs f4, 0(r3)
/* 800E2EA4 000DFA84  C0 02 98 1C */	lfs f0, lbl_804D91FC/*0.0f*/@sda21(r2)
/* 800E2EA8 000DFA88  EC 63 20 28 */	fsubs f3, f3, f4
/* 800E2EAC 000DFA8C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 800E2EB0 000DFA90  40 80 00 08 */	bge lbl_800E2EB8
/* 800E2EB4 000DFA94  FC 60 00 90 */	fmr f3, f0
lbl_800E2EB8:
/* 800E2EB8 000DFA98  C0 02 98 1C */	lfs f0, lbl_804D91FC/*0.0f*/@sda21(r2)
/* 800E2EBC 000DFA9C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800E2EC0 000DFAA0  40 80 00 08 */	bge lbl_800E2EC8
/* 800E2EC4 000DFAA4  FC 60 18 50 */	fneg f3, f3
lbl_800E2EC8:
/* 800E2EC8 000DFAA8  C0 23 00 08 */	lfs f1, 8(r3)
/* 800E2ECC 000DFAAC  EC 02 20 28 */	fsubs f0, f2, f4
/* 800E2ED0 000DFAB0  C0 42 98 24 */	lfs f2, lbl_804D9204/*0.01745329238474369f*/@sda21(r2)
/* 800E2ED4 000DFAB4  EC 23 00 72 */	fmuls f1, f3, f1
/* 800E2ED8 000DFAB8  EC 01 00 24 */	fdivs f0, f1, f0
/* 800E2EDC 000DFABC  EF E2 00 32 */	fmuls f31, f2, f0
/* 800E2EE0 000DFAC0  FC 20 F8 90 */	fmr f1, f31
/* 800E2EE4 000DFAC4  48 24 34 F1 */	bl sinf
/* 800E2EE8 000DFAC8  C0 1E 00 0C */	lfs f0, 0xc(r30)
/* 800E2EEC 000DFACC  EC 00 00 72 */	fmuls f0, f0, f1
/* 800E2EF0 000DFAD0  FC 20 F8 90 */	fmr f1, f31
/* 800E2EF4 000DFAD4  D0 1F 00 84 */	stfs f0, 0x84(r31)
/* 800E2EF8 000DFAD8  48 24 33 49 */	bl cosf
/* 800E2EFC 000DFADC  C0 5F 00 2C */	lfs f2, 0x2c(r31)
/* 800E2F00 000DFAE0  C0 1E 00 0C */	lfs f0, 0xc(r30)
/* 800E2F04 000DFAE4  EC 22 00 72 */	fmuls f1, f2, f1
/* 800E2F08 000DFAE8  EC 00 00 72 */	fmuls f0, f0, f1
/* 800E2F0C 000DFAEC  D0 1F 00 80 */	stfs f0, 0x80(r31)
lbl_800E2F10:
/* 800E2F10 000DFAF0  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 800E2F14 000DFAF4  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 800E2F18 000DFAF8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 800E2F1C 000DFAFC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 800E2F20 000DFB00  38 21 00 38 */	addi r1, r1, 0x38
/* 800E2F24 000DFB04  7C 08 03 A6 */	mtlr r0
/* 800E2F28 000DFB08  4E 80 00 20 */	blr 

.global func_800E2F2C
func_800E2F2C:
/* 800E2F2C 000DFB0C  7C 08 02 A6 */	mflr r0
/* 800E2F30 000DFB10  90 01 00 04 */	stw r0, 4(r1)
/* 800E2F34 000DFB14  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800E2F38 000DFB18  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800E2F3C 000DFB1C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800E2F40 000DFB20  7C 7E 1B 78 */	mr r30, r3
/* 800E2F44 000DFB24  83 E3 00 2C */	lwz r31, 0x2c(r3)
/* 800E2F48 000DFB28  88 7F 22 10 */	lbz r3, 0x2210(r31)
/* 800E2F4C 000DFB2C  54 60 D7 FF */	rlwinm. r0, r3, 0x1a, 0x1f, 0x1f
/* 800E2F50 000DFB30  41 82 00 18 */	beq lbl_800E2F68
/* 800E2F54 000DFB34  38 00 00 00 */	li r0, 0
/* 800E2F58 000DFB38  50 03 36 72 */	rlwimi r3, r0, 6, 0x19, 0x19
/* 800E2F5C 000DFB3C  98 7F 22 10 */	stb r3, 0x2210(r31)
/* 800E2F60 000DFB40  38 00 00 01 */	li r0, 1
/* 800E2F64 000DFB44  48 00 00 08 */	b lbl_800E2F6C
lbl_800E2F68:
/* 800E2F68 000DFB48  38 00 00 00 */	li r0, 0
lbl_800E2F6C:
/* 800E2F6C 000DFB4C  2C 00 00 00 */	cmpwi r0, 0
/* 800E2F70 000DFB50  41 82 00 88 */	beq lbl_800E2FF8
/* 800E2F74 000DFB54  88 1F 22 19 */	lbz r0, 0x2219(r31)
/* 800E2F78 000DFB58  54 00 CF FF */	rlwinm. r0, r0, 0x19, 0x1f, 0x1f
/* 800E2F7C 000DFB5C  40 82 00 74 */	bne lbl_800E2FF0
/* 800E2F80 000DFB60  7F C3 F3 78 */	mr r3, r30
/* 800E2F84 000DFB64  4B FA 43 21 */	bl func_800872A4
/* 800E2F88 000DFB68  2C 03 00 19 */	cmpwi r3, 0x19
/* 800E2F8C 000DFB6C  41 82 00 34 */	beq lbl_800E2FC0
/* 800E2F90 000DFB70  40 80 00 4C */	bge lbl_800E2FDC
/* 800E2F94 000DFB74  2C 03 00 02 */	cmpwi r3, 2
/* 800E2F98 000DFB78  41 82 00 08 */	beq lbl_800E2FA0
/* 800E2F9C 000DFB7C  48 00 00 40 */	b lbl_800E2FDC
lbl_800E2FA0:
/* 800E2FA0 000DFB80  80 DF 05 E8 */	lwz r6, 0x5e8(r31)
/* 800E2FA4 000DFB84  38 9E 00 00 */	addi r4, r30, 0
/* 800E2FA8 000DFB88  4C C6 31 82 */	crclr 6
/* 800E2FAC 000DFB8C  38 60 04 8F */	li r3, 0x48f
/* 800E2FB0 000DFB90  80 A6 00 00 */	lwz r5, 0(r6)
/* 800E2FB4 000DFB94  80 C6 03 90 */	lwz r6, 0x390(r6)
/* 800E2FB8 000DFB98  4B F7 CE 25 */	bl ef_Spawn
/* 800E2FBC 000DFB9C  48 00 00 20 */	b lbl_800E2FDC
lbl_800E2FC0:
/* 800E2FC0 000DFBA0  80 DF 05 E8 */	lwz r6, 0x5e8(r31)
/* 800E2FC4 000DFBA4  38 9E 00 00 */	addi r4, r30, 0
/* 800E2FC8 000DFBA8  4C C6 31 82 */	crclr 6
/* 800E2FCC 000DFBAC  38 60 05 0B */	li r3, 0x50b
/* 800E2FD0 000DFBB0  80 A6 00 00 */	lwz r5, 0(r6)
/* 800E2FD4 000DFBB4  80 C6 04 E0 */	lwz r6, 0x4e0(r6)
/* 800E2FD8 000DFBB8  4B F7 CE 05 */	bl ef_Spawn
lbl_800E2FDC:
/* 800E2FDC 000DFBBC  88 1F 22 19 */	lbz r0, 0x2219(r31)
/* 800E2FE0 000DFBC0  38 60 00 01 */	li r3, 1
/* 800E2FE4 000DFBC4  50 60 3E 30 */	rlwimi r0, r3, 7, 0x18, 0x18
/* 800E2FE8 000DFBC8  98 1F 22 19 */	stb r0, 0x2219(r31)
/* 800E2FEC 000DFBCC  48 00 00 0C */	b lbl_800E2FF8
lbl_800E2FF0:
/* 800E2FF0 000DFBD0  7F C3 F3 78 */	mr r3, r30
/* 800E2FF4 000DFBD4  4B F9 AB 31 */	bl func_8007DB24
lbl_800E2FF8:
/* 800E2FF8 000DFBD8  7F C3 F3 78 */	mr r3, r30
/* 800E2FFC 000DFBDC  4B FA 1F AD */	bl func_80084FA8
/* 800E3000 000DFBE0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800E3004 000DFBE4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800E3008 000DFBE8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800E300C 000DFBEC  38 21 00 20 */	addi r1, r1, 0x20
/* 800E3010 000DFBF0  7C 08 03 A6 */	mtlr r0
/* 800E3014 000DFBF4  4E 80 00 20 */	blr 

.global func_800E3018
func_800E3018:
/* 800E3018 000DFBF8  7C 08 02 A6 */	mflr r0
/* 800E301C 000DFBFC  90 01 00 04 */	stw r0, 4(r1)
/* 800E3020 000DFC00  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800E3024 000DFC04  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 800E3028 000DFC08  93 C1 00 28 */	stw r30, 0x28(r1)
/* 800E302C 000DFC0C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 800E3030 000DFC10  7C 7D 1B 78 */	mr r29, r3
/* 800E3034 000DFC14  83 E3 00 2C */	lwz r31, 0x2c(r3)
/* 800E3038 000DFC18  88 7F 22 10 */	lbz r3, 0x2210(r31)
/* 800E303C 000DFC1C  83 DF 02 D4 */	lwz r30, 0x2d4(r31)
/* 800E3040 000DFC20  54 60 D7 FF */	rlwinm. r0, r3, 0x1a, 0x1f, 0x1f
/* 800E3044 000DFC24  41 82 00 18 */	beq lbl_800E305C
/* 800E3048 000DFC28  38 00 00 00 */	li r0, 0
/* 800E304C 000DFC2C  50 03 36 72 */	rlwimi r3, r0, 6, 0x19, 0x19
/* 800E3050 000DFC30  98 7F 22 10 */	stb r3, 0x2210(r31)
/* 800E3054 000DFC34  38 00 00 01 */	li r0, 1
/* 800E3058 000DFC38  48 00 00 08 */	b lbl_800E3060
lbl_800E305C:
/* 800E305C 000DFC3C  38 00 00 00 */	li r0, 0
lbl_800E3060:
/* 800E3060 000DFC40  2C 00 00 00 */	cmpwi r0, 0
/* 800E3064 000DFC44  41 82 00 88 */	beq lbl_800E30EC
/* 800E3068 000DFC48  88 1F 22 19 */	lbz r0, 0x2219(r31)
/* 800E306C 000DFC4C  54 00 CF FF */	rlwinm. r0, r0, 0x19, 0x1f, 0x1f
/* 800E3070 000DFC50  40 82 00 74 */	bne lbl_800E30E4
/* 800E3074 000DFC54  7F A3 EB 78 */	mr r3, r29
/* 800E3078 000DFC58  4B FA 42 2D */	bl func_800872A4
/* 800E307C 000DFC5C  2C 03 00 19 */	cmpwi r3, 0x19
/* 800E3080 000DFC60  41 82 00 34 */	beq lbl_800E30B4
/* 800E3084 000DFC64  40 80 00 4C */	bge lbl_800E30D0
/* 800E3088 000DFC68  2C 03 00 02 */	cmpwi r3, 2
/* 800E308C 000DFC6C  41 82 00 08 */	beq lbl_800E3094
/* 800E3090 000DFC70  48 00 00 40 */	b lbl_800E30D0
lbl_800E3094:
/* 800E3094 000DFC74  80 DF 05 E8 */	lwz r6, 0x5e8(r31)
/* 800E3098 000DFC78  38 9D 00 00 */	addi r4, r29, 0
/* 800E309C 000DFC7C  4C C6 31 82 */	crclr 6
/* 800E30A0 000DFC80  38 60 04 8F */	li r3, 0x48f
/* 800E30A4 000DFC84  80 A6 00 00 */	lwz r5, 0(r6)
/* 800E30A8 000DFC88  80 C6 03 90 */	lwz r6, 0x390(r6)
/* 800E30AC 000DFC8C  4B F7 CD 31 */	bl ef_Spawn
/* 800E30B0 000DFC90  48 00 00 20 */	b lbl_800E30D0
lbl_800E30B4:
/* 800E30B4 000DFC94  80 DF 05 E8 */	lwz r6, 0x5e8(r31)
/* 800E30B8 000DFC98  38 9D 00 00 */	addi r4, r29, 0
/* 800E30BC 000DFC9C  4C C6 31 82 */	crclr 6
/* 800E30C0 000DFCA0  38 60 05 0B */	li r3, 0x50b
/* 800E30C4 000DFCA4  80 A6 00 00 */	lwz r5, 0(r6)
/* 800E30C8 000DFCA8  80 C6 04 E0 */	lwz r6, 0x4e0(r6)
/* 800E30CC 000DFCAC  4B F7 CD 11 */	bl ef_Spawn
lbl_800E30D0:
/* 800E30D0 000DFCB0  88 1F 22 19 */	lbz r0, 0x2219(r31)
/* 800E30D4 000DFCB4  38 60 00 01 */	li r3, 1
/* 800E30D8 000DFCB8  50 60 3E 30 */	rlwimi r0, r3, 7, 0x18, 0x18
/* 800E30DC 000DFCBC  98 1F 22 19 */	stb r0, 0x2219(r31)
/* 800E30E0 000DFCC0  48 00 00 0C */	b lbl_800E30EC
lbl_800E30E4:
/* 800E30E4 000DFCC4  7F A3 EB 78 */	mr r3, r29
/* 800E30E8 000DFCC8  4B F9 AA 3D */	bl func_8007DB24
lbl_800E30EC:
/* 800E30EC 000DFCCC  80 1F 22 04 */	lwz r0, 0x2204(r31)
/* 800E30F0 000DFCD0  2C 00 00 01 */	cmpwi r0, 1
/* 800E30F4 000DFCD4  41 82 00 2C */	beq lbl_800E3120
/* 800E30F8 000DFCD8  40 80 00 10 */	bge lbl_800E3108
/* 800E30FC 000DFCDC  2C 00 00 00 */	cmpwi r0, 0
/* 800E3100 000DFCE0  40 80 00 14 */	bge lbl_800E3114
/* 800E3104 000DFCE4  48 00 00 48 */	b lbl_800E314C
lbl_800E3108:
/* 800E3108 000DFCE8  2C 00 00 03 */	cmpwi r0, 3
/* 800E310C 000DFCEC  40 80 00 40 */	bge lbl_800E314C
/* 800E3110 000DFCF0  48 00 00 34 */	b lbl_800E3144
lbl_800E3114:
/* 800E3114 000DFCF4  7F A3 EB 78 */	mr r3, r29
/* 800E3118 000DFCF8  4B FA 1D D5 */	bl func_80084EEC
/* 800E311C 000DFCFC  48 00 00 30 */	b lbl_800E314C
lbl_800E3120:
/* 800E3120 000DFD00  C0 3F 00 84 */	lfs f1, 0x84(r31)
/* 800E3124 000DFD04  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 800E3128 000DFD08  EC 01 00 32 */	fmuls f0, f1, f0
/* 800E312C 000DFD0C  D0 1F 00 84 */	stfs f0, 0x84(r31)
/* 800E3130 000DFD10  C0 3F 00 80 */	lfs f1, 0x80(r31)
/* 800E3134 000DFD14  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 800E3138 000DFD18  EC 01 00 32 */	fmuls f0, f1, f0
/* 800E313C 000DFD1C  D0 1F 00 80 */	stfs f0, 0x80(r31)
/* 800E3140 000DFD20  48 00 00 0C */	b lbl_800E314C
lbl_800E3144:
/* 800E3144 000DFD24  7F A3 EB 78 */	mr r3, r29
/* 800E3148 000DFD28  4B FA 1C 69 */	bl func_80084DB0
lbl_800E314C:
/* 800E314C 000DFD2C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800E3150 000DFD30  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 800E3154 000DFD34  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 800E3158 000DFD38  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 800E315C 000DFD3C  38 21 00 30 */	addi r1, r1, 0x30
/* 800E3160 000DFD40  7C 08 03 A6 */	mtlr r0
/* 800E3164 000DFD44  4E 80 00 20 */	blr 

.global func_800E3168
func_800E3168:
/* 800E3168 000DFD48  7C 08 02 A6 */	mflr r0
/* 800E316C 000DFD4C  90 01 00 04 */	stw r0, 4(r1)
/* 800E3170 000DFD50  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 800E3174 000DFD54  93 E1 00 14 */	stw r31, 0x14(r1)
/* 800E3178 000DFD58  93 C1 00 10 */	stw r30, 0x10(r1)
/* 800E317C 000DFD5C  7C 7E 1B 78 */	mr r30, r3
/* 800E3180 000DFD60  4B F9 F6 21 */	bl func_800827A0
/* 800E3184 000DFD64  2C 03 00 00 */	cmpwi r3, 0
/* 800E3188 000DFD68  40 82 00 54 */	bne lbl_800E31DC
/* 800E318C 000DFD6C  83 FE 00 2C */	lwz r31, 0x2c(r30)
/* 800E3190 000DFD70  7F E3 FB 78 */	mr r3, r31
/* 800E3194 000DFD74  4B F9 A4 41 */	bl func_8007D5D4
/* 800E3198 000DFD78  3C 80 0C 4C */	lis r4, 0x0C4C5882@ha
/* 800E319C 000DFD7C  C0 3F 08 94 */	lfs f1, 0x894(r31)
/* 800E31A0 000DFD80  C0 42 98 28 */	lfs f2, lbl_804D9208/*1.0f*/@sda21(r2)
/* 800E31A4 000DFD84  7F C3 F3 78 */	mr r3, r30
/* 800E31A8 000DFD88  C0 62 98 1C */	lfs f3, lbl_804D91FC/*0.0f*/@sda21(r2)
/* 800E31AC 000DFD8C  38 A4 58 82 */	addi r5, r4, 0x0C4C5882@l
/* 800E31B0 000DFD90  38 80 01 5C */	li r4, 0x15c
/* 800E31B4 000DFD94  38 C0 00 00 */	li r6, 0
/* 800E31B8 000DFD98  4B F8 61 F5 */	bl Fighter_ActionStateChange_800693AC
/* 800E31BC 000DFD9C  3C 60 80 06 */	lis r3, efLib_PauseAll@ha
/* 800E31C0 000DFDA0  38 03 BA 40 */	addi r0, r3, efLib_PauseAll@l
/* 800E31C4 000DFDA4  3C 60 80 06 */	lis r3, efLib_ResumeAll@ha
/* 800E31C8 000DFDA8  90 1F 21 D4 */	stw r0, 0x21d4(r31)
/* 800E31CC 000DFDAC  38 03 BA C4 */	addi r0, r3, efLib_ResumeAll@l
/* 800E31D0 000DFDB0  90 1F 21 D8 */	stw r0, 0x21d8(r31)
/* 800E31D4 000DFDB4  7F E3 FB 78 */	mr r3, r31
/* 800E31D8 000DFDB8  4B F9 A2 91 */	bl func_8007D468
lbl_800E31DC:
/* 800E31DC 000DFDBC  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 800E31E0 000DFDC0  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 800E31E4 000DFDC4  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 800E31E8 000DFDC8  38 21 00 18 */	addi r1, r1, 0x18
/* 800E31EC 000DFDCC  7C 08 03 A6 */	mtlr r0
/* 800E31F0 000DFDD0  4E 80 00 20 */	blr

.global func_800E31F4
func_800E31F4:
/* 800E31F4 000DFDD4  7C 08 02 A6 */	mflr r0
/* 800E31F8 000DFDD8  90 01 00 04 */	stw r0, 4(r1)
/* 800E31FC 000DFDDC  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 800E3200 000DFDE0  93 E1 00 14 */	stw r31, 0x14(r1)
/* 800E3204 000DFDE4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 800E3208 000DFDE8  7C 7E 1B 78 */	mr r30, r3
/* 800E320C 000DFDEC  4B F9 EB 01 */	bl func_80081D0C
/* 800E3210 000DFDF0  2C 03 00 00 */	cmpwi r3, 0
/* 800E3214 000DFDF4  41 82 00 4C */	beq lbl_800E3260
/* 800E3218 000DFDF8  83 FE 00 2C */	lwz r31, 0x2c(r30)
/* 800E321C 000DFDFC  7F E3 FB 78 */	mr r3, r31
/* 800E3220 000DFE00  4B F9 A5 DD */	bl func_8007D7FC
/* 800E3224 000DFE04  3C 80 0C 4C */	lis r4, 0x0C4C5882@ha
/* 800E3228 000DFE08  C0 3F 08 94 */	lfs f1, 0x894(r31)
/* 800E322C 000DFE0C  C0 42 98 28 */	lfs f2, lbl_804D9208/*1.0f*/@sda21(r2)
/* 800E3230 000DFE10  7F C3 F3 78 */	mr r3, r30
/* 800E3234 000DFE14  C0 62 98 1C */	lfs f3, lbl_804D91FC/*0.0f*/@sda21(r2)
# SPLIT NO EARLIER THAN HERE
/* 800E3238 000DFE18  38 A4 58 82 */	addi r5, r4, 0x0C4C5882@l
/* 800E323C 000DFE1C  38 80 01 5B */	li r4, 0x15b
/* 800E3240 000DFE20  38 C0 00 00 */	li r6, 0
/* 800E3244 000DFE24  4B F8 61 69 */	bl Fighter_ActionStateChange_800693AC
/* 800E3248 000DFE28  3C 60 80 06 */	lis r3, efLib_PauseAll@ha
/* 800E324C 000DFE2C  38 03 BA 40 */	addi r0, r3, efLib_PauseAll@l
/* 800E3250 000DFE30  3C 60 80 06 */	lis r3, efLib_ResumeAll@ha
/* 800E3254 000DFE34  90 1F 21 D4 */	stw r0, 0x21d4(r31)
/* 800E3258 000DFE38  38 03 BA C4 */	addi r0, r3, efLib_ResumeAll@l
/* 800E325C 000DFE3C  90 1F 21 D8 */	stw r0, 0x21d8(r31)
lbl_800E3260:
/* 800E3260 000DFE40  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 800E3264 000DFE44  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 800E3268 000DFE48  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 800E326C 000DFE4C  38 21 00 18 */	addi r1, r1, 0x18
/* 800E3270 000DFE50  7C 08 03 A6 */	mtlr r0
/* 800E3274 000DFE54  4E 80 00 20 */	blr 

.section .sdata2
    .balign 8
.global lbl_804D91F8/*2.0f*/
lbl_804D91F8/*2.0f*/:
	.4byte 0x40000000
.global lbl_804D91FC/*0.0f*/
lbl_804D91FC/*0.0f*/:
	.4byte 0x00000000
.global lbl_804D9200/*4.0f*/
lbl_804D9200/*4.0f*/:
	.4byte 0x40800000
.global lbl_804D9204/*0.01745329238474369f*/
lbl_804D9204/*0.01745329238474369f*/:
	.4byte 0x3C8EFA35
.global lbl_804D9208/*1.0f*/
lbl_804D9208/*1.0f*/:
	.4byte 0x3F800000
	.4byte 0x00000000
