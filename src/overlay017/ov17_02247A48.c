#include <nitro.h>
#include <string.h>

#include "data_021BF67C.h"
#include "assert.h"

#include "struct_decls/struct_0201CD38_decl.h"

#include "overlay012/struct_ov12_02237728.h"
#include "overlay017/struct_ov17_02243C28.h"
#include "overlay017/struct_ov17_02243C80.h"
#include "overlay017/struct_ov17_02247A48.h"
#include "overlay017/struct_ov17_02247C5C.h"
#include "overlay017/struct_ov17_02247DC8.h"
#include "overlay017/struct_ov17_02247F8C.h"
#include "overlay017/struct_ov17_02248198.h"
#include "overlay017/struct_ov17_022482B0.h"
#include "overlay017/struct_ov17_02248464.h"
#include "overlay017/struct_ov17_02248744.h"
#include "overlay017/struct_ov17_02248860.h"
#include "overlay017/struct_ov17_022489C8.h"
#include "overlay017/struct_ov17_02248A24.h"
#include "overlay017/struct_ov17_02248AA4.h"
#include "overlay017/struct_ov17_02248BE0.h"
#include "overlay017/struct_ov17_02248DA4.h"
#include "overlay017/struct_ov17_02248EC4.h"
#include "overlay017/struct_ov17_02249014.h"
#include "overlay017/struct_ov17_02249260.h"
#include "overlay017/struct_ov17_022492AC.h"
#include "overlay017/struct_ov17_0224F30C.h"
#include "overlay017/struct_ov17_0224F3D8.h"
#include "overlay017/struct_ov17_022539E4.h"
#include "overlay022/struct_ov22_0225AF8C.h"

#include "library/spl.h"

#include "unk_02002F38.h"
#include "unk_02005474.h"
#include "unk_02006E3C.h"
#include "unk_0200762C.h"
#include "unk_0200A9DC.h"
#include "unk_0200D9E8.h"
#include "unk_0200DA60.h"
#include "heap.h"
#include "unk_02018340.h"
#include "unk_02073C2C.h"
#include "unk_020933F8.h"
#include "unk_02094EDC.h"
#include "overlay012/ov12_02235E94.h"
#include "overlay017/ov17_022476F8.h"
#include "overlay017/ov17_02247A48.h"
#include "overlay017/ov17_0224F18C.h"
#include "overlay022/ov22_0225AF8C.h"

static int ov17_02247A88(UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3);
static void ov17_02247A9C(UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3);
static void ov17_02247AAC(UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, UnkStruct_ov17_0224F3D8 * param3, int param4);
static int ov17_02247AEC(UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3);
static void ov17_02247B00(UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3);
static void ov17_02247C5C(UnkStruct_0201CD38 * param0, void * param1);
static int ov17_02247D68(UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3);
static void ov17_02247D7C(UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3);
static void ov17_02247DC8(UnkStruct_0201CD38 * param0, void * param1);
static int ov17_02247E78(UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3);
static void ov17_02247E8C(UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3);
static void ov17_02247EDC(UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3);
static void ov17_02247F2C(UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3);
static void ov17_02247F8C(UnkStruct_0201CD38 * param0, void * param1);
static int ov17_02248138(UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3);
static void ov17_0224814C(UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3);
static void ov17_02248198(UnkStruct_0201CD38 * param0, void * param1);
static int ov17_02247AB0(UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3);
static void ov17_02247AC4(UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3);
static int ov17_02248258(UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3);
static void ov17_0224826C(UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3);
static void ov17_022482B0(UnkStruct_0201CD38 * param0, void * param1);
static int ov17_0224840C(UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3);
static void ov17_02248420(UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3);
static void ov17_02248464(UnkStruct_0201CD38 * param0, void * param1);
static int ov17_022485E8(UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3);
static void ov17_022485FC(UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3);
static void ov17_02248648(UnkStruct_0201CD38 * param0, void * param1);
static int ov17_022486E4(UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3);
static void ov17_022486F8(UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3);
static void ov17_02248744(UnkStruct_0201CD38 * param0, void * param1);
static int ov17_022487E8(UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3);
static void ov17_022487FC(UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3);
static void ov17_02248860(UnkStruct_0201CD38 * param0, void * param1);
static void ov17_022489C8(UnkStruct_0201CD38 * param0, void * param1);
static void ov17_02248A24(UnkStruct_0201CD38 * param0, void * param1);
static void ov17_02248AA4(UnkStruct_0201CD38 * param0, void * param1);
static void ov17_02248BE0(UnkStruct_0201CD38 * param0, void * param1);
static int ov17_02248D28(UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3);
static void ov17_02248D3C(UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3);
static void ov17_02248DA4(UnkStruct_0201CD38 * param0, void * param1);
static int ov17_02248FBC(UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3);
static void ov17_02248FD0(UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3);
static void ov17_02249014(UnkStruct_0201CD38 * param0, void * param1);
static int ov17_02248E58(UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3);
static void ov17_02248E6C(UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3);
static void ov17_02248EC4(UnkStruct_0201CD38 * param0, void * param1);
static int ov17_0224924C(UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3);
static void ov17_02249260(UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3);
static void ov17_022492AC(UnkStruct_0201CD38 * param0, void * param1);

static const UnkStruct_ov17_022539E4 Unk_ov17_02254488[] = {
    {ov17_02247A88, ov17_02247A9C, ov17_02247AAC},
    {ov17_02247AB0, ov17_02247AC4, NULL},
    {ov17_02247AEC, ov17_02247B00, NULL},
    {ov17_02247D68, ov17_02247D7C, NULL},
    {ov17_02247E78, ov17_02247E8C, NULL},
    {ov17_02247E78, ov17_02247EDC, NULL},
    {ov17_02247E78, ov17_02247F2C, NULL},
    {ov17_02248138, ov17_0224814C, NULL},
    {ov17_02248258, ov17_0224826C, NULL},
    {ov17_0224840C, ov17_02248420, NULL},
    {ov17_022485E8, ov17_022485FC, NULL},
    {ov17_022486E4, ov17_022486F8, NULL},
    {ov17_022487E8, ov17_022487FC, NULL},
    {ov17_02248D28, ov17_02248D3C, NULL},
    {ov17_02248E58, ov17_02248E6C, NULL},
    {ov17_02248FBC, ov17_02248FD0, NULL},
    {ov17_0224924C, ov17_02249260, NULL}
};

__attribute__((aligned(4))) static const s8 Unk_ov17_02254468[] = {
    0xD,
    0x9,
    0x5,
    0x1,
    0xFFFFFFFFFFFFFFFD
};

__attribute__((aligned(4))) static const u16 Unk_ov17_02254470[] = {
    0x20,
    0x28,
    0x30,
    0x38,
    0xA0,
    0xA8,
    0xB0,
    0xB8,
    0x120,
    0x128,
    0x130,
    0x138
};

void ov17_02247A48 (UnkStruct_ov17_02247A48 * param0)
{
    UnkStruct_ov17_02243C28 v0;

    v0.unk_00 = Unk_ov17_02254488;
    v0.unk_04 = NELEMS(Unk_ov17_02254488);
    v0.unk_06 = param0->unk_00->unk_00.unk_113;
    v0.unk_08 = param0->unk_00->unk_00.unk_10C;
    v0.unk_07 = param0->unk_00->unk_155;

    ov17_0224F18C(&param0->unk_4F8, &v0);
}

static int ov17_02247A88 (UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    int v1;

    v1 = ov17_0224F1F8(param0, 0xff, param2, NULL, 0);
    return v1;
}

static void ov17_02247A9C (UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    ov17_0224F26C(param0, param2, NULL, 0);
}

static void ov17_02247AAC (UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, UnkStruct_ov17_0224F3D8 * param3, int param4)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    return;
}

static int ov17_02247AB0 (UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    int v1;

    v1 = ov17_0224F1F8(param0, 0xff, param2, NULL, 0);
    return v1;
}

static void ov17_02247AC4 (UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;

    v0->unk_F14 = 1;

    if (sub_02094EDC(v0->unk_00) == 0) {
        ov17_0224F26C(param0, param2, NULL, 0);
    }
}

static int ov17_02247AEC (UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    int v1;

    v1 = ov17_0224F1F8(param0, 0xff, param2, param3, sizeof(UnkStruct_ov17_02249260));
    return v1;
}

static void ov17_02247B00 (UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    UnkStruct_ov17_02249260 * v1 = param3;
    UnkStruct_ov17_02247DC8 * v2;
    s32 v3;
    int v4;

    v2 = Heap_AllocFromHeap(22, sizeof(UnkStruct_ov17_02247DC8));
    MI_CpuClear8(v2, sizeof(UnkStruct_ov17_02247DC8));

    v2->unk_00 = v0;
    v2->unk_04 = *param2;
    v2->unk_0C = param0;
    v2->unk_11 = v1->unk_00;

    for (v4 = 0; v4 < 4; v4++) {
        if (v2->unk_00->unk_F18[v4].unk_00 != NULL) {
            ov22_0225B020(v2->unk_00->unk_F18[v4].unk_00);
            v2->unk_00->unk_F18[v4].unk_00 = NULL;
        }
    }

    v3 = sub_020765B8(v0->unk_0C.unk_00->unk_00[v1->unk_00], 2);

    {
        UnkStruct_ov22_0225AF8C v5;

        MI_CpuClear8(&v5, sizeof(UnkStruct_ov22_0225AF8C));

        v5.unk_0C = 22;
        v5.unk_04 = 128;
        v5.unk_08 = (96 - 32) + 80 / 2;
        v0->unk_F18[v1->unk_00].unk_04 = 128;
        v0->unk_F18[v1->unk_00].unk_08 = (96 - 32) + 80 / 2;
        v0->unk_F18[v1->unk_00].unk_00 = ov22_0225AFD4(&v5, v0->unk_00->unk_00.unk_E8[v1->unk_00]);

        ov22_0225B074(v0->unk_F18[v1->unk_00].unk_00, 0);
    }

    {
        G2_SetWnd0InsidePlane(GX_WND_PLANEMASK_BG0 | GX_WND_PLANEMASK_BG1 | GX_WND_PLANEMASK_BG2 | GX_WND_PLANEMASK_BG3 | GX_WND_PLANEMASK_OBJ, 1);
        G2_SetWndOutsidePlane(GX_WND_PLANEMASK_BG0 | GX_WND_PLANEMASK_BG1 | GX_WND_PLANEMASK_BG2 | GX_WND_PLANEMASK_BG3 | GX_WND_PLANEMASK_OBJ, 0);
        G2_SetBlendBrightness(GX_BLEND_PLANEMASK_BG0, -16);
        GX_SetVisibleWnd(GX_WNDMASK_W0);

        v0->unk_F58 = 0;
        v0->unk_F59 = 0;
        v0->unk_F5A = 255;
        v0->unk_F5B = (Unk_ov17_02254468[0] + 4) * 8;
    }

    sub_02006E60(45, 21, v0->unk_0C.unk_24, 2, 0, 0, 1, 22);
    sub_0200D9E8(ov17_02247C5C, v2, 30000);
}

static void ov17_02247C5C (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov17_02247C5C * v0 = param1;
    int v1;

    switch (v0->unk_10) {
    case 0:
        v0->unk_10++;
        break;
    case 1:
        G2_SetWnd0InsidePlane(GX_WND_PLANEMASK_BG1 | GX_WND_PLANEMASK_BG2 | GX_WND_PLANEMASK_BG3 | GX_WND_PLANEMASK_OBJ, 1);
        v1 = sub_020765B8(v0->unk_00->unk_0C.unk_00->unk_00[v0->unk_11], 2);
        ov22_0225B158(v0->unk_00->unk_F18[v0->unk_11].unk_00, v0->unk_00->unk_F18[v0->unk_11].unk_04, v0->unk_00->unk_F18[v0->unk_11].unk_08, v1);
        ov22_0225B074(v0->unk_00->unk_F18[v0->unk_11].unk_00, 1);
        v0->unk_10++;
        break;
    case 2:
        v0->unk_10++;
        break;
    case 3:
        G2_SetWnd0InsidePlane(GX_WND_PLANEMASK_BG0 | GX_WND_PLANEMASK_BG1 | GX_WND_PLANEMASK_BG2 | GX_WND_PLANEMASK_BG3 | GX_WND_PLANEMASK_OBJ, 1);
        sub_02003A2C(v0->unk_00->unk_0C.unk_44, 0, 0x1fff, 0, 0x0);
        sub_02003A2C(v0->unk_00->unk_0C.unk_44, 2, 0x3fff, 0, 0x0);
        sub_02005748(1772);
        v0->unk_10++;
        break;
    case 4:
        v0->unk_12++;

        if (v0->unk_12 > 10) {
            v0->unk_12 = 0;
            v0->unk_10++;
        }
        break;
    default:
        ov17_0224F26C(v0->unk_0C, &v0->unk_04, NULL, 0);
        Heap_FreeToHeap(v0);
        sub_0200DA58(param0);
        return;
    }
}

static int ov17_02247D68 (UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    int v1;

    v1 = ov17_0224F1F8(param0, 0xff, param2, param3, sizeof(UnkStruct_ov17_02249260));
    return v1;
}

static void ov17_02247D7C (UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    UnkStruct_ov17_02249260 * v1 = param3;
    UnkStruct_ov17_02247DC8 * v2;

    v2 = Heap_AllocFromHeap(22, sizeof(UnkStruct_ov17_02247DC8));
    MI_CpuClear8(v2, sizeof(UnkStruct_ov17_02247DC8));

    v2->unk_00 = v0;
    v2->unk_04 = *param2;
    v2->unk_0C = param0;
    v2->unk_11 = v1->unk_00;

    sub_0200D9E8(ov17_02247DC8, v2, 30000);
}

static void ov17_02247DC8 (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov17_02247DC8 * v0 = param1;
    int v1;

    switch (v0->unk_10) {
    case 0:
        v0->unk_14 = sub_020080C0(v0->unk_00->unk_0C.unk_08[v0->unk_11], 0) << 8;
        v0->unk_18 = sub_020080C0(v0->unk_00->unk_0C.unk_08[v0->unk_11], 1) << 8;
        v0->unk_10++;
        break;
    case 1:
        v1 = sub_020765B8(v0->unk_00->unk_0C.unk_00->unk_00[v0->unk_11], 2);
        v0->unk_18 += 0x100;

        if (v0->unk_18 >= ((96 - 32) << 8)) {
            v0->unk_18 = (96 - 32) << 8;
            v0->unk_10++;
        }

        sub_02007DEC(v0->unk_00->unk_0C.unk_08[v0->unk_11], 0, v0->unk_14 >> 8);
        sub_02007DEC(v0->unk_00->unk_0C.unk_08[v0->unk_11], 1, v0->unk_18 >> 8);
        break;
    default:
        ov17_0224F26C(v0->unk_0C, &v0->unk_04, NULL, 0);
        Heap_FreeToHeap(v0);
        sub_0200DA58(param0);
        return;
    }
}

static int ov17_02247E78 (UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    int v1;

    v1 = ov17_0224F1F8(param0, 0xff, param2, param3, sizeof(UnkStruct_ov17_02249260));
    return v1;
}

static void ov17_02247E8C (UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    UnkStruct_ov17_02249260 * v1 = param3;
    UnkStruct_ov17_02247F8C * v2;

    v2 = Heap_AllocFromHeap(22, sizeof(UnkStruct_ov17_02247F8C));
    MI_CpuClear8(v2, sizeof(UnkStruct_ov17_02247F8C));

    v2->unk_00 = v0;
    v2->unk_04 = *param2;
    v2->unk_0C = param0;
    v2->unk_12 = v1->unk_01;
    v2->unk_1A = 0;

    sub_0200D9E8(ov17_02247F8C, v2, 30000);
}

static void ov17_02247EDC (UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    UnkStruct_ov17_02249260 * v1 = param3;
    UnkStruct_ov17_02247F8C * v2;

    v2 = Heap_AllocFromHeap(22, sizeof(UnkStruct_ov17_02247F8C));
    MI_CpuClear8(v2, sizeof(UnkStruct_ov17_02247F8C));

    v2->unk_00 = v0;
    v2->unk_04 = *param2;
    v2->unk_0C = param0;
    v2->unk_12 = v1->unk_02;
    v2->unk_1A = 1;

    sub_0200D9E8(ov17_02247F8C, v2, 30000);
}

static void ov17_02247F2C (UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    UnkStruct_ov17_02249260 * v1 = param3;
    UnkStruct_ov17_02247F8C * v2;

    v2 = Heap_AllocFromHeap(22, sizeof(UnkStruct_ov17_02247F8C));
    MI_CpuClear8(v2, sizeof(UnkStruct_ov17_02247F8C));

    v2->unk_00 = v0;
    v2->unk_04 = *param2;
    v2->unk_0C = param0;
    v2->unk_12 = v1->unk_01 + v1->unk_02;
    v2->unk_14 = v1->unk_01;
    v2->unk_15 = v1->unk_02;
    v2->unk_1A = 0;
    v2->unk_1B = 1;

    sub_0200D9E8(ov17_02247F8C, v2, 30000);
}

static void ov17_02247F8C (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov17_02247F8C * v0 = param1;
    int v1;

    switch (v0->unk_10) {
    case 0:
        sub_02005748(1765);
        v0->unk_11 = 15;
        v0->unk_10++;
    case 1:
        if (v0->unk_13 >= v0->unk_12) {
            v0->unk_11 = 0;
            sub_02005748(1765);
            v0->unk_10++;
            break;
        } else if (v0->unk_1B == 1) {
            if (v0->unk_13 >= v0->unk_14) {
                v0->unk_1A = 1;
            }
        }

        if (v0->unk_11 > 0) {
            v0->unk_11--;
            break;
        }

        v0->unk_11 = 3;

        {
            s16 v2, v3, v4, v5;

            v4 = sub_02094E98(v0->unk_00->unk_00) % ((256 - 32 - 32) / 2);
            v5 = sub_02094E98(v0->unk_00->unk_00) % ((192 - 32 - 32) / 2);

            if (sub_02094E98(v0->unk_00->unk_00) & 1) {
                v2 = 128 + v4;
            } else {
                v2 = 128 - v4;
            }

            if (sub_02094E98(v0->unk_00->unk_00) & 1) {
                v3 = 96 + v5;
            } else {
                v3 = 96 - v5;
            }

            if (v0->unk_13 > 0) {
                if ((((v0->unk_16 < 128) && (v2 < 128)) || ((v0->unk_16 > 128) && (v2 > 128))) && (((v0->unk_18 < 96) && (v3 < 96)) || ((v0->unk_18 > 96) && (v3 > 96)))) {
                    if (sub_02094E98(v0->unk_00->unk_00) & 1) {
                        if (v2 < 128) {
                            v2 = 128 + v4;
                        } else {
                            v2 = 128 - v4;
                        }
                    } else {
                        if (v3 < 96) {
                            v3 = 96 + v5;
                        } else {
                            v3 = 96 - v5;
                        }
                    }
                }
            }

            if (v0->unk_13 & 1) {
                ov17_022477B8(v0->unk_00, v2, v3, 180 << FX32_SHIFT, v0->unk_1A);
            } else {
                ov17_022477B8(v0->unk_00, v2, v3, 0, v0->unk_1A);
            }

            v0->unk_16 = v2;
            v0->unk_18 = v3;
        }
        v0->unk_13++;
        break;
    case 2:
        v0->unk_11++;

        if (v0->unk_11 > 30) {
            v0->unk_11 = 0;
            v0->unk_10++;
        }
        break;
    default:
        ov17_0224F26C(v0->unk_0C, &v0->unk_04, NULL, 0);
        Heap_FreeToHeap(v0);
        sub_0200DA58(param0);
        return;
    }
}

static int ov17_02248138 (UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    int v1;

    v1 = ov17_0224F1F8(param0, 0xff, param2, param3, sizeof(UnkStruct_ov17_02249260));
    return v1;
}

static void ov17_0224814C (UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    UnkStruct_ov17_02249260 * v1 = param3;
    UnkStruct_ov17_02248198 * v2;

    v2 = Heap_AllocFromHeap(22, sizeof(UnkStruct_ov17_02248198));
    MI_CpuClear8(v2, sizeof(UnkStruct_ov17_02248198));

    v2->unk_00 = v0;
    v2->unk_04 = *param2;
    v2->unk_0C = param0;
    v2->unk_11 = v1->unk_00;

    sub_0200D9E8(ov17_02248198, v2, 30000);
}

static void ov17_02248198 (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov17_02248198 * v0 = param1;
    int v1;

    v1 = sub_020765B8(v0->unk_00->unk_0C.unk_00->unk_00[v0->unk_11], 2);

    switch (v0->unk_10) {
    case 0:
        v0->unk_14 = v0->unk_00->unk_F18[v0->unk_11].unk_04 << 8;
        v0->unk_18 = v0->unk_00->unk_F18[v0->unk_11].unk_08 << 8;
        v0->unk_10++;
        break;
    case 1:
        v0->unk_14 += 0x300;

        if (v0->unk_14 >= (300 << 8)) {
            v0->unk_10++;
        }

        ov22_0225B158(v0->unk_00->unk_F18[v0->unk_11].unk_00, v0->unk_14 >> 8, v0->unk_18 >> 8, v1);
        break;
    default:
        ov22_0225B020(v0->unk_00->unk_F18[v0->unk_11].unk_00);
        v0->unk_00->unk_F18[v0->unk_11].unk_00 = NULL;
        ov17_0224F26C(v0->unk_0C, &v0->unk_04, NULL, 0);
        Heap_FreeToHeap(v0);
        sub_0200DA58(param0);
        return;
    }
}

static int ov17_02248258 (UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    int v1;

    v1 = ov17_0224F1F8(param0, 0xff, param2, NULL, 0);
    return v1;
}

static void ov17_0224826C (UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    UnkStruct_ov17_022482B0 * v1;

    v1 = Heap_AllocFromHeap(22, sizeof(UnkStruct_ov17_022482B0));
    MI_CpuClear8(v1, sizeof(UnkStruct_ov17_022482B0));

    v1->unk_00 = v0;
    v1->unk_04 = *param2;
    v1->unk_0C = param0;

    sub_0200D9E8(ov17_022482B0, v1, 30000);
}

static void ov17_022482B0 (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov17_022482B0 * v0 = param1;

    switch (v0->unk_10) {
    case 0:

        if (v0->unk_14 > 0) {
            v0->unk_14--;
            break;
        }

        if (v0->unk_13 > 0) {
            v0->unk_13--;
            break;
        }

        v0->unk_13 = 1;

        {
            u16 * v1, * v2;
            int v3, v4, v5, v6, v7;

            v1 = sub_02019FE4(v0->unk_00->unk_0C.unk_24, 2);

            for (v4 = 0; v4 < 4; v4++) {
                if (Unk_ov17_02254468[v0->unk_11] + v4 < 0) {
                    continue;
                }

                v2 = &v1[32 * (Unk_ov17_02254468[v0->unk_11] + v4)];
                v7 = Unk_ov17_02254470[v0->unk_12] + 32 * v4;
                v5 = 0;

                for (v6 = 0; v6 < 32 / 8; v6++) {
                    for (v3 = 0; v3 < 8; v3++) {
                        v2[v5 + v3] &= 0xfc00;
                        v2[v5 + v3] |= v7 + v3;
                    }

                    v5 += 8;
                }
            }

            {
                if ((v0->unk_11 > 0) && (v0->unk_12 == 0)) {
                    v2 = &v1[32 * Unk_ov17_02254468[v0->unk_11 - 1]];

                    for (v6 = 0; v6 < 32; v6++) {
                        v2[v6] &= 0xfc00;
                    }
                }
            }

            sub_0201C3C0(v0->unk_00->unk_0C.unk_24, 2);
        }

        v0->unk_12++;

        if (v0->unk_12 >= NELEMS(Unk_ov17_02254470)) {
            v0->unk_12 = 0;
            v0->unk_11++;
            v0->unk_14 = 0;

            if (v0->unk_11 >= NELEMS(Unk_ov17_02254468)) {
                v0->unk_10++;
            }
        }
        break;
    default:
        ov17_0224F26C(v0->unk_0C, &v0->unk_04, NULL, 0);
        Heap_FreeToHeap(v0);
        sub_0200DA58(param0);
        return;
    }
}

static int ov17_0224840C (UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    int v1;

    v1 = ov17_0224F1F8(param0, 0xff, param2, NULL, 0);
    return v1;
}

static void ov17_02248420 (UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    UnkStruct_ov17_02248464 * v1;

    v1 = Heap_AllocFromHeap(22, sizeof(UnkStruct_ov17_02248464));
    MI_CpuClear8(v1, sizeof(UnkStruct_ov17_02248464));

    v1->unk_00 = v0;
    v1->unk_04 = *param2;
    v1->unk_0C = param0;

    sub_0200D9E8(ov17_02248464, v1, 30000);
}

static void ov17_02248464 (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov17_02248464 * v0 = param1;

    switch (v0->unk_10) {
    case 0:

        if (v0->unk_14 > 0) {
            v0->unk_14--;
            break;
        }

        if (v0->unk_13 > 0) {
            v0->unk_13--;
            break;
        }

        v0->unk_13 = 1;

        {
            u16 * v1, * v2;
            int v3, v4, v5, v6, v7;
            int v8;

            v1 = sub_02019FE4(v0->unk_00->unk_0C.unk_24, 2);

            for (v4 = 0; v4 < 4; v4++) {
                v8 = Unk_ov17_02254468[NELEMS(Unk_ov17_02254468) - 1 - v0->unk_11];

                if (v8 + v4 < 0) {
                    continue;
                }

                v2 = &v1[32 * (v8 + v4)];
                v7 = Unk_ov17_02254470[NELEMS(Unk_ov17_02254470) - 1 - v0->unk_12] + 32 * v4;
                v5 = 0;

                for (v6 = 0; v6 < 32 / 8; v6++) {
                    for (v3 = 0; v3 < 8; v3++) {
                        v2[v5 + v3] &= 0xfc00;
                        v2[v5 + v3] |= v7 + v3;
                    }

                    v5 += 8;
                }
            }

            {
                if ((v0->unk_11 > 0) && (v0->unk_12 == 0)) {
                    v8 = Unk_ov17_02254468[NELEMS(Unk_ov17_02254468) - 1 - v0->unk_11 + 1];
                    v8 += 4 - 1;
                    v2 = &v1[v8 * 32];

                    for (v6 = 0; v6 < 32; v6++) {
                        v2[v6] &= 0xfc00;
                        v2[v6] |= 0x200 + (v6 % 8);
                    }
                }
            }

            sub_0201C3C0(v0->unk_00->unk_0C.unk_24, 2);
        }

        v0->unk_12++;

        if (v0->unk_12 >= NELEMS(Unk_ov17_02254470)) {
            v0->unk_12 = 0;
            v0->unk_11++;
            v0->unk_14 = 0;

            if (v0->unk_11 >= NELEMS(Unk_ov17_02254468)) {
                v0->unk_10++;
            }
        }

        break;
    default:
        ov17_0224F26C(v0->unk_0C, &v0->unk_04, NULL, 0);
        Heap_FreeToHeap(v0);
        sub_0200DA58(param0);
        return;
    }
}

static int ov17_022485E8 (UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    int v1;

    v1 = ov17_0224F1F8(param0, 0xff, param2, param3, sizeof(UnkStruct_ov17_02249260));
    return v1;
}

static void ov17_022485FC (UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    UnkStruct_ov17_02249260 * v1 = param3;
    UnkStruct_ov17_02248744 * v2;

    v2 = Heap_AllocFromHeap(22, sizeof(UnkStruct_ov17_02248744));
    MI_CpuClear8(v2, sizeof(UnkStruct_ov17_02248744));

    v2->unk_00 = v0;
    v2->unk_04 = *param2;
    v2->unk_0C = param0;
    v2->unk_11 = v1->unk_00;

    sub_0200D9E8(ov17_02248648, v2, 30000);
}

static void ov17_02248648 (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov17_02248744 * v0 = param1;

    switch (v0->unk_10) {
    case 0:
        ov17_022478D0(v0->unk_00, v0->unk_11);
        v0->unk_14 = sub_020080C0(v0->unk_00->unk_0C.unk_18, 0) * 0x100;
        v0->unk_18 = sub_020080C0(v0->unk_00->unk_0C.unk_18, 1) * 0x100;
        v0->unk_10++;
    case 1:
        v0->unk_14 -= 0x400;

        if (v0->unk_14 <= (230 * 0x100)) {
            v0->unk_14 = 230 * 0x100;
            v0->unk_10++;
        }

        sub_02007DEC(v0->unk_00->unk_0C.unk_18, 0, v0->unk_14 / 0x100);
        sub_02007DEC(v0->unk_00->unk_0C.unk_18, 1, v0->unk_18 / 0x100);
        break;
    default:
        ov17_0224F26C(v0->unk_0C, &v0->unk_04, NULL, 0);
        Heap_FreeToHeap(v0);
        sub_0200DA58(param0);
        return;
    }
}

static int ov17_022486E4 (UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    int v1;

    v1 = ov17_0224F1F8(param0, 0xff, param2, param3, sizeof(UnkStruct_ov17_02249260));
    return v1;
}

static void ov17_022486F8 (UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    UnkStruct_ov17_02249260 * v1 = param3;
    UnkStruct_ov17_02248744 * v2;

    v2 = Heap_AllocFromHeap(22, sizeof(UnkStruct_ov17_02248744));
    MI_CpuClear8(v2, sizeof(UnkStruct_ov17_02248744));

    v2->unk_00 = v0;
    v2->unk_04 = *param2;
    v2->unk_0C = param0;
    v2->unk_11 = v1->unk_00;

    sub_0200D9E8(ov17_02248744, v2, 30000);
}

static void ov17_02248744 (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov17_02248744 * v0 = param1;

    switch (v0->unk_10) {
    case 0:
        GF_ASSERT(v0->unk_00->unk_0C.unk_18 != NULL);
        v0->unk_14 = sub_020080C0(v0->unk_00->unk_0C.unk_18, 0) * 0x100;
        v0->unk_18 = sub_020080C0(v0->unk_00->unk_0C.unk_18, 1) * 0x100;
        v0->unk_10++;
    case 1:
        v0->unk_14 += 0x400;

        if (v0->unk_14 >= (320 * 0x100)) {
            v0->unk_14 = 320 * 0x100;
            v0->unk_10++;
        }

        sub_02007DEC(v0->unk_00->unk_0C.unk_18, 0, v0->unk_14 / 0x100);
        sub_02007DEC(v0->unk_00->unk_0C.unk_18, 1, v0->unk_18 / 0x100);
        break;
    default:
        ov17_02247918(v0->unk_00);
        ov17_0224F26C(v0->unk_0C, &v0->unk_04, NULL, 0);
        Heap_FreeToHeap(v0);
        sub_0200DA58(param0);
        return;
    }
}

static int ov17_022487E8 (UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    int v1;

    v1 = ov17_0224F1F8(param0, 0xff, param2, param3, sizeof(UnkStruct_ov17_02249260));
    return v1;
}

static void ov17_022487FC (UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    UnkStruct_ov17_02249260 * v1 = param3;
    UnkStruct_ov17_02248860 * v2;

    v2 = Heap_AllocFromHeap(22, sizeof(UnkStruct_ov17_02248860));
    MI_CpuClear8(v2, sizeof(UnkStruct_ov17_02248860));

    v2->unk_00 = v0;
    v2->unk_04 = *param2;
    v2->unk_0C = param0;
    v2->unk_11 = v1->unk_00;
    v2->unk_2C.unk_00 = v0;
    v2->unk_38.unk_00 = v0;
    v2->unk_38.unk_0E = v1->unk_00;
    v2->unk_48.unk_00 = v0;
    v2->unk_14.unk_10 = v0->unk_0C.unk_00->unk_00[v1->unk_00];

    sub_0200D9E8(ov17_02248860, v2, 30000);
}

static void ov17_02248860 (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov17_02248860 * v0 = param1;

    switch (v0->unk_10) {
    case 0:
        sub_0200D9E8(ov17_02248A24, &v0->unk_2C, (30000 + 10));
        sub_0200D9E8(ov17_02248BE0, &v0->unk_48, (30000 + 10));

        {
            UnkStruct_ov22_0225AF8C v1;
            int v2;

            v2 = sub_020765B8(v0->unk_38.unk_00->unk_0C.unk_00->unk_00[v0->unk_38.unk_0E], 2);
            MI_CpuClear8(&v1, sizeof(UnkStruct_ov22_0225AF8C));

            v1.unk_0C = 22;
            v1.unk_04 = 128;
            v1.unk_08 = (96 - 32) + v2;
            v0->unk_38.unk_00->unk_F18[v0->unk_38.unk_0E].unk_00 = ov22_0225AFD4(&v1, v0->unk_38.unk_00->unk_00->unk_00.unk_E8[v0->unk_38.unk_0E]);

            ov22_0225B074(v0->unk_38.unk_00->unk_F18[v0->unk_38.unk_0E].unk_00, 0);
        }

        v0->unk_10++;
        break;
    case 1:
        if (v0->unk_2C.unk_09 == 1) {
            sub_0200D9E8(ov17_022489C8, &v0->unk_14, (30000 + 10));
            sub_0200D9E8(ov17_02248AA4, &v0->unk_38, (30000 + 10));
            v0->unk_10++;
        }
        break;
    case 2:
        if ((v0->unk_14.unk_15 == 1) && (v0->unk_38.unk_0D == 1) && (v0->unk_48.unk_0D == 1)) {
            sub_02005748(1765);
            v0->unk_10++;
        }
        break;
    default:
        ov17_0224F26C(v0->unk_0C, &v0->unk_04, NULL, 0);
        Heap_FreeToHeap(param1);
        sub_0200DA58(param0);
        return;
    }
}

static void ov17_02248990 (UnkSPLStruct6 * param0)
{
    {
        VecFx32 v0 = {0, 0, 0};
        SPL_UnkInline1(param0, &v0);
    }
}

static void ov17_022489C8 (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov17_022489C8 * v0 = param1;

    switch (v0->unk_14) {
    case 0:
        v0->unk_00.unk_00 = 0;
        v0->unk_00.unk_08 = v0->unk_10;
        v0->unk_0C = ov12_02236004(22, &v0->unk_00);
        ov12_02236320(v0->unk_0C);
        ov12_02236384(v0->unk_0C, ov17_02248990);
        v0->unk_14++;
        break;
    case 1:
        if (ov12_022363C4(v0->unk_0C) == 0) {
            ov12_02236428(v0->unk_0C);
            v0->unk_14++;
        }
        break;
    default:
        v0->unk_15 = 1;
        sub_0200DA58(param0);
        return;
    }
}

static void ov17_02248A24 (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov17_02248A24 * v0 = param1;

    switch (v0->unk_08) {
    case 0:
        v0->unk_0A++;

        if (v0->unk_0A >= 1) {
            v0->unk_0A = 0;
            v0->unk_08++;
        }
        break;
    case 1:
    {
        UnkStruct_ov12_02237728 v1;

        v1.unk_00 = 14;
        v1.unk_04 = 22;
        v1.unk_08 = 0;
        v1.unk_0C = 0;
        v1.unk_1C = v0->unk_00->unk_0C.unk_1C;
        v1.unk_20 = v0->unk_00->unk_0C.unk_44;
        v1.unk_14 = 1;

        v0->unk_04 = ov12_02237728(&v1);
    }
        v0->unk_08++;
        break;
    case 2:
        if (ov12_022377F8(v0->unk_04) == 1) {
            break;
        }
    default:
        ov12_0223783C(v0->unk_04);
        v0->unk_09 = 1;
        sub_0200DA58(param0);
        return;
    }
}

static void ov17_02248AA4 (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov17_02248AA4 * v0 = param1;
    s32 v1;
    s32 v2, v3;

    v1 = sub_020765B8(v0->unk_00->unk_0C.unk_00->unk_00[v0->unk_0E], 2);

    switch (v0->unk_0C) {
    case 0:
    {
        v0->unk_04 = 0;
        v0->unk_08 = 0;
        ov22_0225B0EC(v0->unk_00->unk_F18[v0->unk_0E].unk_00, 0, 0, FX32_ONE);

        v0->unk_00->unk_F18[v0->unk_0E].unk_04 = 128;
        v0->unk_00->unk_F18[v0->unk_0E].unk_08 = (96 - 32) + 80 / 2;
        ov22_0225B074(v0->unk_00->unk_F18[v0->unk_0E].unk_00, 1);
    }
        v0->unk_0C++;
    case 1:
        v0->unk_04 += (FX32_ONE / (0x100 / 0x20));
        v0->unk_08 += (FX32_ONE / (0x100 / 0x20));

        if (v0->unk_04 >= FX32_ONE) {
            v0->unk_04 = FX32_ONE;
            v0->unk_08 = FX32_ONE;
        }

        ov22_0225B0EC(v0->unk_00->unk_F18[v0->unk_0E].unk_00, v0->unk_04, v0->unk_08, FX32_ONE);
        ov22_0225B158(v0->unk_00->unk_F18[v0->unk_0E].unk_00, v0->unk_00->unk_F18[v0->unk_0E].unk_04, v0->unk_00->unk_F18[v0->unk_0E].unk_08, v1);

        if (v0->unk_04 >= FX32_ONE) {
            v2 = GetMonData(v0->unk_00->unk_0C.unk_00->unk_00[v0->unk_0E], MON_DATA_SPECIES, NULL);
            v3 = GetMonData(v0->unk_00->unk_0C.unk_00->unk_00[v0->unk_0E], MON_DATA_FORM, NULL);
            sub_02077D3C(v0->unk_00->unk_00->unk_14C[v0->unk_0E], 0, v2, v3, 0, 127, NULL, 22);
            v0->unk_0C++;
        }
        break;
    default:
        v0->unk_0D = 1;
        sub_0200DA58(param0);
        return;
    }
}

static void ov17_02248BE0 (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov17_02248BE0 * v0 = param1;

    switch (v0->unk_0C) {
    case 0:
        GF_ASSERT(v0->unk_00->unk_0C.unk_18 != NULL);

        v0->unk_0F++;

        if (v0->unk_0F > 1) {
            v0->unk_0F = 0;
            v0->unk_0C++;
        }
        break;
    case 1:
        v0->unk_04 = sub_020080C0(v0->unk_00->unk_0C.unk_18, 0) * 0x100;
        v0->unk_08 = sub_020080C0(v0->unk_00->unk_0C.unk_18, 1) * 0x100;
        v0->unk_0C++;
    case 2:
        if (v0->unk_0E & 1) {
            sub_02007DEC(v0->unk_00->unk_0C.unk_18, 0, v0->unk_04 / 0x100);
            sub_02007DEC(v0->unk_00->unk_0C.unk_18, 1, v0->unk_08 / 0x100);
        } else {
            sub_02007DEC(v0->unk_00->unk_0C.unk_18, 0, v0->unk_04 / 0x100);
            sub_02007DEC(v0->unk_00->unk_0C.unk_18, 1, v0->unk_08 / 0x100 - 3);
        }

        v0->unk_0E++;

        if (v0->unk_0E >= 3) {
            v0->unk_0C++;
        }
        break;
    case 3:
        v0->unk_0F++;

        if (v0->unk_0F >= 7) {
            v0->unk_0F = 0;
            v0->unk_0C++;
        }
        break;
    case 4:
        v0->unk_04 += 0x400;

        if (v0->unk_04 >= (320 * 0x100)) {
            v0->unk_04 = 320 * 0x100;
            v0->unk_0C++;
        }

        sub_02007DEC(v0->unk_00->unk_0C.unk_18, 0, v0->unk_04 / 0x100);
        sub_02007DEC(v0->unk_00->unk_0C.unk_18, 1, v0->unk_08 / 0x100);
        break;
    default:
        ov17_02247918(v0->unk_00);
        v0->unk_0D = 1;
        sub_0200DA58(param0);
        return;
    }
}

static int ov17_02248D28 (UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    int v1;

    v1 = ov17_0224F1F8(param0, 0xff, param2, param3, sizeof(UnkStruct_ov17_02249260));
    return v1;
}

static void ov17_02248D3C (UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    UnkStruct_ov17_02249260 * v1 = param3;
    UnkStruct_ov17_02248DA4 * v2;

    v2 = Heap_AllocFromHeap(22, sizeof(UnkStruct_ov17_02248DA4));
    MI_CpuClear8(v2, sizeof(UnkStruct_ov17_02248DA4));

    v2->unk_00 = v0;
    v2->unk_04 = *param2;
    v2->unk_0C = param0;
    v2->unk_11 = v1->unk_00;
    v2->unk_13 = v1->unk_03;
    v2->unk_17 = v1->unk_07;
    v2->unk_19 = v1->unk_09;
    v2->unk_18 = v1->unk_08;

    sub_0200D9E8(ov17_02248DA4, v2, 30000);
}

static void ov17_02248DA4 (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov17_02248DA4 * v0 = param1;

    switch (v0->unk_10) {
    case 0:
        if (v0->unk_17 != 0) {
            sub_0200E060(&v0->unk_00->unk_0C.unk_28[0], 1, 1, 14);
            sub_0201C3C0(v0->unk_00->unk_0C.unk_24, 1);
            ov17_02247A08(v0->unk_00, v0->unk_17, &v0->unk_13);
            v0->unk_10++;
        } else {
            v0->unk_10 = 100;
        }
        break;
    case 1:
        if (ov17_02247A3C(v0->unk_00) == 0) {
            v0->unk_10++;
        }
        break;
    case 2:
        v0->unk_12++;

        if (v0->unk_19 == 1) {
            v0->unk_10++;
        } else if (v0->unk_12 >= v0->unk_18) {
            sub_0200E084(&v0->unk_00->unk_0C.unk_28[0], 1);
            sub_0201C3C0(v0->unk_00->unk_0C.unk_24, 1);
            v0->unk_10++;
        }
        break;
    default:
        ov17_0224F26C(v0->unk_0C, &v0->unk_04, NULL, 0);
        Heap_FreeToHeap(v0);
        sub_0200DA58(param0);
        return;
    }
}

static int ov17_02248E58 (UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    int v1;

    v1 = ov17_0224F1F8(param0, 0xff, param2, param3, sizeof(UnkStruct_ov17_02249260));
    return v1;
}

static void ov17_02248E6C (UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    UnkStruct_ov17_02248EC4 * v1;
    UnkStruct_ov17_02249260 * v2 = param3;

    v1 = Heap_AllocFromHeap(22, sizeof(UnkStruct_ov17_02248EC4));
    MI_CpuClear8(v1, sizeof(UnkStruct_ov17_02248EC4));

    v1->unk_00 = v0;
    v1->unk_04 = *param2;
    v1->unk_0C = param0;
    v1->unk_11 = v2->unk_0A;
    v1->unk_12 = v2->unk_0B;
    v1->unk_13 = v2->unk_0C;
    v1->unk_14 = v1->unk_14;

    sub_0200D9E8(ov17_02248EC4, v1, 30000);
}

static void ov17_02248EC4 (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov17_02248EC4 * v0 = param1;
    int v1;

    switch (v0->unk_10) {
    case 0:
        if (v0->unk_00->unk_00->unk_155 == 1) {
            G2_SetWnd1InsidePlane(GX_WND_PLANEMASK_BG0 | GX_WND_PLANEMASK_BG1 | GX_WND_PLANEMASK_BG2 | GX_WND_PLANEMASK_BG3 | GX_WND_PLANEMASK_OBJ, 0);
            G2_SetWndOutsidePlane(GX_WND_PLANEMASK_BG0 | GX_WND_PLANEMASK_BG1 | GX_WND_PLANEMASK_BG2 | GX_WND_PLANEMASK_BG3 | GX_WND_PLANEMASK_OBJ, 1);
            GX_SetVisibleWnd(GX_WNDMASK_W1);

            v0->unk_00->unk_F5C = 256 - 16;
            v0->unk_00->unk_F5D = 0;
            v0->unk_00->unk_F5E = 255;
            v0->unk_00->unk_F5F = 16;
        }

        sub_0200AAE0(v0->unk_13, v0->unk_12, v0->unk_11, (GX_BLEND_PLANEMASK_BG0 | GX_BLEND_PLANEMASK_BG1 | GX_BLEND_PLANEMASK_BG2 | GX_BLEND_PLANEMASK_BG3 | GX_BLEND_PLANEMASK_OBJ | GX_BLEND_PLANEMASK_BD) ^ GX_BLEND_PLANEMASK_BG1, 1);

        v0->unk_10++;
        break;
    case 1:
        if (sub_0200AC1C(1) == 1) {
            sub_020038B0(v0->unk_00->unk_0C.unk_44, 0, 0, 0x0, 0, (13 * 16));
            sub_020038B0(v0->unk_00->unk_0C.unk_44, 2, 0, 0x0, 0, (((16 - 2) * 16)));
            v0->unk_10++;
        }
        break;
    default:
        ov17_0224F26C(v0->unk_0C, &v0->unk_04, NULL, 0);
        Heap_FreeToHeap(v0);
        sub_0200DA58(param0);
        return;
    }
}

static int ov17_02248FBC (UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    int v1;

    v1 = ov17_0224F1F8(param0, 0xff, param2, NULL, 0);
    return v1;
}

static void ov17_02248FD0 (UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    UnkStruct_ov17_02249014 * v1;

    v1 = Heap_AllocFromHeap(22, sizeof(UnkStruct_ov17_02249014));
    MI_CpuClear8(v1, sizeof(UnkStruct_ov17_02249014));

    v1->unk_00 = v0;
    v1->unk_04 = *param2;
    v1->unk_0C = param0;

    sub_0200D9E8(ov17_02249014, v1, 30000);
}

static void ov17_02249014 (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov17_02249014 * v0 = param1;
    int v1;

    v0->unk_18++;

    if (v0->unk_18 == 30) {
        v1 = 0;
        v0->unk_13 = 30;
        v0->unk_15 = 1;
    }

    if ((v0->unk_00->unk_00->unk_155 == 0) && (v0->unk_18 < 30) && ((Unk_021BF67C.unk_48 & PAD_BUTTON_A) || (Unk_021BF67C.unk_60))) {
        v0->unk_18 = 30;
        v1 = 0;
        v0->unk_13 = 0;
        v0->unk_15 = 1;
    } else if (v0->unk_18 > 30) {
        v1 = 0;
    } else {
        v1 = 1;
    }

    switch (v0->unk_10) {
    case 0:
        if (v0->unk_14 > 0) {
            v0->unk_14--;
            break;
        }

        if (v0->unk_13 > 0) {
            v0->unk_13--;
            break;
        }

        v0->unk_13 = v1;

        if (v0->unk_15 == 1) {
            sub_02005748(1773);
            v0->unk_15 = 0;
        }

        {
            u16 * v2, * v3;
            int v4, v5, v6, v7, v8;

            v2 = sub_02019FE4(v0->unk_00->unk_0C.unk_24, 2);

            for (v5 = 0; v5 < 4; v5++) {
                if (Unk_ov17_02254468[v0->unk_11] + v5 < 0) {
                    continue;
                }

                v3 = &v2[32 * (Unk_ov17_02254468[v0->unk_11] + v5)];
                v8 = Unk_ov17_02254470[v0->unk_12] + 32 * v5;
                v6 = 0;

                for (v7 = 0; v7 < 32 / 8; v7++) {
                    for (v4 = 0; v4 < 8; v4++) {
                        v3[v6 + v4] &= 0xfc00;
                        v3[v6 + v4] |= v8 + v4;
                    }

                    v6 += 8;
                }
            }

            {
                if ((v0->unk_11 > 0) && (v0->unk_12 == 0)) {
                    v3 = &v2[32 * Unk_ov17_02254468[v0->unk_11 - 1]];

                    for (v7 = 0; v7 < 32; v7++) {
                        v3[v7] &= 0xfc00;
                    }
                }
            }

            sub_0201C3C0(v0->unk_00->unk_0C.unk_24, 2);
        }

        {
            v0->unk_00->unk_F5B = (Unk_ov17_02254468[v0->unk_11] + 4) * 8 - (v0->unk_12 * (4 * 8) / NELEMS(Unk_ov17_02254470));

            if (v0->unk_00->unk_F5B == 0) {
                G2_BlendNone();
                GX_SetVisibleWnd(GX_WNDMASK_NONE);
            }
        }

        v0->unk_12++;

        if (v0->unk_12 >= NELEMS(Unk_ov17_02254470)) {
            v0->unk_12 = 0;
            v0->unk_11++;
            v0->unk_14 = 0;

            if (v0->unk_11 >= NELEMS(Unk_ov17_02254468)) {
                v0->unk_10++;
            }
        }
        break;
    default:
        G2_BlendNone();
        GX_SetVisibleWnd(GX_WNDMASK_NONE);

        ov17_0224F26C(v0->unk_0C, &v0->unk_04, NULL, 0);
        Heap_FreeToHeap(v0);
        sub_0200DA58(param0);
        return;
    }
}

static int ov17_0224924C (UnkStruct_ov17_0224F30C * param0, void * param1, int param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    int v1;

    v1 = ov17_0224F1F8(param0, 0xff, param2, param3, sizeof(UnkStruct_ov17_02249260));
    return v1;
}

static void ov17_02249260 (UnkStruct_ov17_0224F30C * param0, void * param1, const UnkStruct_ov17_02243C80 * param2, void * param3)
{
    UnkStruct_ov17_02247A48 * v0 = param1;
    UnkStruct_ov17_02249260 * v1 = param3;
    UnkStruct_ov17_022492AC * v2;

    v2 = Heap_AllocFromHeap(22, sizeof(UnkStruct_ov17_022492AC));
    MI_CpuClear8(v2, sizeof(UnkStruct_ov17_022492AC));

    v2->unk_00 = v0;
    v2->unk_04 = *param2;
    v2->unk_0C = param0;

    sub_02005748(v1->unk_10);
    sub_0200D9E8(ov17_022492AC, v2, 30000);
}

static void ov17_022492AC (UnkStruct_0201CD38 * param0, void * param1)
{
    UnkStruct_ov17_022492AC * v0 = param1;

    switch (v0->unk_10) {
    case 0:
    default:
        if (v0->unk_00->unk_4F7 == 0) {
            ov17_0224F26C(v0->unk_0C, &v0->unk_04, NULL, 0);
            Heap_FreeToHeap(v0);
            sub_0200DA58(param0);
            return;
        }
        break;
    }
}
