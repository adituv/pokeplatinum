#include <nitro.h>
#include <string.h>

#include "struct_defs/pokemon.h"
#include "struct_decls/struct_party_decl.h"
#include "struct_decls/plitemdata_decl.h"

#include "heap.h"
#include "unk_02073C2C.h"
#include "move_table.h"
#include "party.h"
#include "item.h"
#include "unk_02096420.h"

#include "constants/item.h"

static u8 sub_02096F34(Pokemon * param0, u32 param1);
static u8 sub_02096F84(Pokemon * param0, u32 param1, u32 param2);
static u8 sub_02097004(Pokemon * param0, u32 param1, u32 param2);
static void sub_020970AC(Pokemon * param0, u32 param1, u32 param2, u32 param3);
static s32 sub_020970EC(s32 param0, s32 param1, s32 param2);
static u8 sub_020971D0(Pokemon * param0, s32 param1, s32 param2, u16 param3, u32 param4);
static u8 sub_02097144(Pokemon * param0, PlItemData * param1);

u8 sub_02096420 (Pokemon * param0, u16 param1, u16 param2, u32 param3)
{
    PlItemData * v0;
    s32 v1[8];

    v0 = Item_LoadDataOrGFX(param1, 0, param3);

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_HASEXTRADATA) != 1) {
        Heap_FreeToHeap(v0);
        return 0;
    }

    v1[0] = GetMonData(param0, MON_DATA_160, NULL);

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_CURES_SLEEP) != 0) {
        if ((v1[0] & 0x7) != 0) {
            Heap_FreeToHeap(v0);
            return 1;
        }
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_CURES_POISON) != 0) {
        if ((v1[0] & (0x8 | 0x80)) != 0) {
            Heap_FreeToHeap(v0);
            return 1;
        }
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_CURES_BURN) != 0) {
        if ((v1[0] & 0x10) != 0) {
            Heap_FreeToHeap(v0);
            return 1;
        }
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_CURES_FREEZE) != 0) {
        if ((v1[0] & 0x20) != 0) {
            Heap_FreeToHeap(v0);
            return 1;
        }
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_CURSE_PARALYSIS) != 0) {
        if ((v1[0] & 0x40) != 0) {
            Heap_FreeToHeap(v0);
            return 1;
        }
    }

    v1[0] = GetMonData(param0, MON_DATA_163, NULL);

    if (((Item_GetAttributeFromStruct(v0, ITEM_DATA_HAS_REVIVE_EFFECT) != 0) || (Item_GetAttributeFromStruct(v0, ITEM_DATA_HAS_SACREDASH_EFFECT) != 0)) && (Item_GetAttributeFromStruct(v0, ITEM_DATA_HAS_RARECANDY_EFFECT) == 0)) {
        if (v1[0] == 0) {
            Heap_FreeToHeap(v0);
            return 1;
        }
    } else if (Item_GetAttributeFromStruct(v0, ITEM_DATA_RESTORES_HP) != 0) {
        if ((v1[0] != 0) && (v1[0] < GetMonData(param0, MON_DATA_164, NULL))) {
            Heap_FreeToHeap(v0);
            return 1;
        }
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_HAS_RARECANDY_EFFECT) != 0) {
        if (GetMonData(param0, MON_DATA_161, NULL) < 100) {
            Heap_FreeToHeap(v0);
            return 1;
        }
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_HAS_EVOLUTION_EFFECT) != 0) {
        if (sub_02076B94(NULL, param0, 3, param1, NULL) != 0) {
            Heap_FreeToHeap(v0);
            return 1;
        }
    }

    if ((Item_GetAttributeFromStruct(v0, ITEM_DATA_HAS_PPUP_EFFECT) != 0) || (Item_GetAttributeFromStruct(v0, ITEM_DATA_HAS_PPMAX_EFFECT) != 0)) {
        if ((GetMonData(param0, MON_DATA_62 + param2, NULL) < 3) && (MoveTable_GetMoveMaxPP(GetMonData(param0, MON_DATA_MOVE1 + param2, NULL), 0) >= 5)) {
            Heap_FreeToHeap(v0);
            return 1;
        }
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_RESTORES_PP_SINGLE) != 0) {
        if (sub_02096F34(param0, param2) == 1) {
            Heap_FreeToHeap(v0);
            return 1;
        }
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_RESTORES_PP_ALL) != 0) {
        for (v1[0] = 0; v1[0] < 4; v1[0]++) {
            if (sub_02096F34(param0, v1[0]) == 1) {
                Heap_FreeToHeap(v0);
                return 1;
            }
        }
    }

    v1[0] = GetMonData(param0, MON_DATA_HP_EV, NULL);
    v1[1] = GetMonData(param0, MON_DATA_ATK_EV, NULL);
    v1[2] = GetMonData(param0, MON_DATA_DEF_EV, NULL);
    v1[3] = GetMonData(param0, MON_DATA_SPEED_EV, NULL);
    v1[4] = GetMonData(param0, MON_DATA_SPATK_EV, NULL);
    v1[5] = GetMonData(param0, MON_DATA_SPDEF_EV, NULL);

    if (GetMonData(param0, MON_DATA_SPECIES, NULL) != 292) {
        if (Item_GetAttributeFromStruct(v0, ITEM_DATA_AFFECTS_HP_EVS) != 0) {
            v1[6] = Item_GetAttributeFromStruct(v0, ITEM_DATA_DELTA_HP_EV);

            if (v1[6] > 0) {
                if ((v1[0] < 100) && ((v1[0] + v1[1] + v1[2] + v1[3] + v1[4] + v1[5]) < 510)) {
                    Heap_FreeToHeap(v0);
                    return 1;
                }
            } else if (v1[6] < 0) {
                if (v1[0] > 0) {
                    Heap_FreeToHeap(v0);
                    return 1;
                }

                if (sub_02097144(param0, v0) == 1) {
                    Heap_FreeToHeap(v0);
                    return 1;
                }
            }
        }
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_AFFECTS_ATK_EVS) != 0) {
        v1[6] = Item_GetAttributeFromStruct(v0, ITEM_DATA_DELTA_ATK_EV);

        if (v1[6] > 0) {
            if ((v1[1] < 100) && ((v1[0] + v1[1] + v1[2] + v1[3] + v1[4] + v1[5]) < 510)) {
                Heap_FreeToHeap(v0);
                return 1;
            }
        } else if (v1[6] < 0) {
            if (v1[1] > 0) {
                Heap_FreeToHeap(v0);
                return 1;
            }

            if (sub_02097144(param0, v0) == 1) {
                Heap_FreeToHeap(v0);
                return 1;
            }
        }
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_AFFECTS_DEF_EVS) != 0) {
        v1[6] = Item_GetAttributeFromStruct(v0, ITEM_DATA_DELTA_DEF_EV);

        if (v1[6] > 0) {
            if ((v1[2] < 100) && ((v1[0] + v1[1] + v1[2] + v1[3] + v1[4] + v1[5]) < 510)) {
                Heap_FreeToHeap(v0);
                return 1;
            }
        } else if (v1[6] < 0) {
            if (v1[2] > 0) {
                Heap_FreeToHeap(v0);
                return 1;
            }

            if (sub_02097144(param0, v0) == 1) {
                Heap_FreeToHeap(v0);
                return 1;
            }
        }
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_AFFECTS_SPE_EVS) != 0) {
        v1[6] = Item_GetAttributeFromStruct(v0, ITEM_DATA_DELTA_SPE_EV);

        if (v1[6] > 0) {
            if ((v1[3] < 100) && ((v1[0] + v1[1] + v1[2] + v1[3] + v1[4] + v1[5]) < 510)) {
                Heap_FreeToHeap(v0);
                return 1;
            }
        } else if (v1[6] < 0) {
            if (v1[3] > 0) {
                Heap_FreeToHeap(v0);
                return 1;
            }

            if (sub_02097144(param0, v0) == 1) {
                Heap_FreeToHeap(v0);
                return 1;
            }
        }
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_AFFECTS_SPA_EVS) != 0) {
        v1[6] = Item_GetAttributeFromStruct(v0, ITEM_DATA_DELTA_SPA_EV);

        if (v1[6] > 0) {
            if ((v1[4] < 100) && ((v1[0] + v1[1] + v1[2] + v1[3] + v1[4] + v1[5]) < 510)) {
                Heap_FreeToHeap(v0);
                return 1;
            }
        } else if (v1[6] < 0) {
            if (v1[4] > 0) {
                Heap_FreeToHeap(v0);
                return 1;
            }

            if (sub_02097144(param0, v0) == 1) {
                Heap_FreeToHeap(v0);
                return 1;
            }
        }
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_AFFECTS_SPD_EVS) != 0) {
        v1[6] = Item_GetAttributeFromStruct(v0, ITEM_DATA_DELTA_SPD_EV);

        if (v1[6] > 0) {
            if ((v1[5] < 100) && ((v1[0] + v1[1] + v1[2] + v1[3] + v1[4] + v1[5]) < 510)) {
                Heap_FreeToHeap(v0);
                return 1;
            }
        } else if (v1[6] < 0) {
            if (v1[5] > 0) {
                Heap_FreeToHeap(v0);
                return 1;
            }

            if (sub_02097144(param0, v0) == 1) {
                Heap_FreeToHeap(v0);
                return 1;
            }
        }
    }

    Heap_FreeToHeap(v0);

    return 0;
}

u8 sub_0209693C (Party * param0, u16 param1, u8 param2, u8 param3, u32 param4)
{
    Pokemon * v0 = Party_GetPokemonBySlotIndex(param0, param2);
    return sub_02096420(v0, param1, param3, param4);
}

u8 sub_02096954 (Pokemon * param0, u16 param1, u16 param2, u16 param3, u32 param4)
{
    PlItemData * v0;
    s32 v1[8];
    u8 v2;
    u8 v3;

    v0 = Item_LoadDataOrGFX(param1, 0, param4);

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_HASEXTRADATA) != 1) {
        Heap_FreeToHeap(v0);
        return 0;
    }

    v2 = 0;
    v3 = 0;

    v1[0] = GetMonData(param0, MON_DATA_160, NULL);
    v1[1] = v1[0];

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_CURES_SLEEP) != 0) {
        v1[1] &= (0x7 ^ 0xffffffff);
        v3 = 1;
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_CURES_POISON) != 0) {
        v1[1] &= ((0x8 | 0x80 | 0xf00) ^ 0xffffffff);
        v3 = 1;
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_CURES_BURN) != 0) {
        v1[1] &= (0x10 ^ 0xffffffff);
        v3 = 1;
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_CURES_FREEZE) != 0) {
        v1[1] &= (0x20 ^ 0xffffffff);
        v3 = 1;
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_CURSE_PARALYSIS) != 0) {
        v1[1] &= (0x40 ^ 0xffffffff);
        v3 = 1;
    }

    if (v1[0] != v1[1]) {
        sub_02074B30(param0, 160, &v1[1]);
        v2 = 1;
    }

    v1[0] = GetMonData(param0, MON_DATA_163, NULL);
    v1[1] = GetMonData(param0, MON_DATA_164, NULL);

    if (((Item_GetAttributeFromStruct(v0, ITEM_DATA_HAS_REVIVE_EFFECT) != 0) || (Item_GetAttributeFromStruct(v0, ITEM_DATA_HAS_SACREDASH_EFFECT) != 0)) && (Item_GetAttributeFromStruct(v0, ITEM_DATA_HAS_RARECANDY_EFFECT) != 0)) {
        if (v1[0] == 0) {
            sub_020970AC(param0, v1[0], v1[1], Item_GetAttributeFromStruct(v0, ITEM_DATA_AMT_HP_RESTORED));
            v2 = 1;
        }

        v3 = 1;
    } else if (Item_GetAttributeFromStruct(v0, ITEM_DATA_RESTORES_HP) != 0) {
        if (v1[0] < v1[1]) {
            sub_020970AC(param0, v1[0], v1[1], Item_GetAttributeFromStruct(v0, ITEM_DATA_AMT_HP_RESTORED));
            v2 = 1;
        }

        v3 = 1;
    }

    v1[2] = GetMonData(param0, MON_DATA_161, NULL);

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_HAS_RARECANDY_EFFECT) != 0) {
        if (v1[2] < 100) {
            sub_0207536C(param0, MON_DATA_EXP, sub_02075A70(param0));
            sub_0207418C(param0);

            if (v1[0] == 0) {
                v1[3] = GetMonData(param0, MON_DATA_164, NULL);
                sub_020970AC(param0, v1[0], v1[3], v1[3] - v1[1]);
            }

            v2 = 1;
        }

        v3 = 1;
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_HAS_EVOLUTION_EFFECT) != 0) {
        v3 = 1;
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_HAS_PPUP_EFFECT) != 0) {
        if (sub_02097004(param0, param2, 1) == 1) {
            v2 = 1;
        }

        v3 = 1;
    } else if (Item_GetAttributeFromStruct(v0, ITEM_DATA_HAS_PPMAX_EFFECT) != 0) {
        if (sub_02097004(param0, param2, 3) == 1) {
            v2 = 1;
        }

        v3 = 1;
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_RESTORES_PP_SINGLE) != 0) {
        if (sub_02096F84(param0, param2, Item_GetAttributeFromStruct(v0, ITEM_DATA_AMT_PP_RESTORED)) == 1) {
            v2 = 1;
        }

        v3 = 1;
    } else if (Item_GetAttributeFromStruct(v0, ITEM_DATA_RESTORES_PP_ALL) != 0) {
        for (v1[0] = 0; v1[0] < 4; v1[0]++) {
            if (sub_02096F84(param0, v1[0], Item_GetAttributeFromStruct(v0, ITEM_DATA_AMT_PP_RESTORED)) == 1) {
                v2 = 1;
            }
        }

        v3 = 1;
    }

    v1[0] = GetMonData(param0, MON_DATA_HP_EV, NULL);
    v1[1] = GetMonData(param0, MON_DATA_ATK_EV, NULL);
    v1[2] = GetMonData(param0, MON_DATA_DEF_EV, NULL);
    v1[3] = GetMonData(param0, MON_DATA_SPEED_EV, NULL);
    v1[4] = GetMonData(param0, MON_DATA_SPATK_EV, NULL);
    v1[5] = GetMonData(param0, MON_DATA_SPDEF_EV, NULL);

    if (GetMonData(param0, MON_DATA_SPECIES, NULL) != 292) {
        if (Item_GetAttributeFromStruct(v0, ITEM_DATA_AFFECTS_HP_EVS) != 0) {
            v1[7] = Item_GetAttributeFromStruct(v0, ITEM_DATA_DELTA_HP_EV);
            v1[6] = sub_020970EC(v1[0], (v1[1] + v1[2] + v1[3] + v1[4] + v1[5]), v1[7]);

            if (v1[6] != -1) {
                v1[0] = v1[6];
                sub_02074B30(param0, 13, &v1[0]);
                sub_0207418C(param0);
                v2 = 1;
            }

            if (v1[7] > 0) {
                v3 = 1;
            }
        }
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_AFFECTS_ATK_EVS) != 0) {
        v1[7] = Item_GetAttributeFromStruct(v0, ITEM_DATA_DELTA_ATK_EV);
        v1[6] = sub_020970EC(v1[1], (v1[0] + v1[2] + v1[3] + v1[4] + v1[5]), v1[7]);

        if (v1[6] != -1) {
            v1[1] = v1[6];
            sub_02074B30(param0, 14, &v1[1]);
            sub_0207418C(param0);
            v2 = 1;
        }

        if (v1[7] > 0) {
            v3 = 1;
        }
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_AFFECTS_DEF_EVS) != 0) {
        v1[7] = Item_GetAttributeFromStruct(v0, ITEM_DATA_DELTA_DEF_EV);
        v1[6] = sub_020970EC(v1[2], (v1[0] + v1[1] + v1[3] + v1[4] + v1[5]), v1[7]);

        if (v1[6] != -1) {
            v1[2] = v1[6];
            sub_02074B30(param0, 15, &v1[2]);
            sub_0207418C(param0);
            v2 = 1;
        }

        if (v1[7] > 0) {
            v3 = 1;
        }
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_AFFECTS_SPE_EVS) != 0) {
        v1[7] = Item_GetAttributeFromStruct(v0, ITEM_DATA_DELTA_SPE_EV);
        v1[6] = sub_020970EC(v1[3], (v1[0] + v1[1] + v1[2] + v1[4] + v1[5]), v1[7]);

        if (v1[6] != -1) {
            v1[3] = v1[6];
            sub_02074B30(param0, 16, &v1[3]);
            sub_0207418C(param0);
            v2 = 1;
        }

        if (v1[7] > 0) {
            v3 = 1;
        }
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_AFFECTS_SPA_EVS) != 0) {
        v1[7] = Item_GetAttributeFromStruct(v0, ITEM_DATA_DELTA_SPA_EV);
        v1[6] = sub_020970EC(v1[4], (v1[0] + v1[1] + v1[2] + v1[3] + v1[5]), v1[7]);

        if (v1[6] != -1) {
            v1[4] = v1[6];
            sub_02074B30(param0, 17, &v1[4]);
            sub_0207418C(param0);
            v2 = 1;
        }

        if (v1[7] > 0) {
            v3 = 1;
        }
    }

    if (Item_GetAttributeFromStruct(v0, ITEM_DATA_AFFECTS_SPD_EVS) != 0) {
        v1[7] = Item_GetAttributeFromStruct(v0, ITEM_DATA_DELTA_SPD_EV);
        v1[6] = sub_020970EC(v1[5], (v1[0] + v1[1] + v1[2] + v1[3] + v1[4]), v1[7]);

        if (v1[6] != -1) {
            v1[5] = v1[6];
            sub_02074B30(param0, 18, &v1[5]);
            sub_0207418C(param0);
            v2 = 1;
        }

        if (v1[7] > 0) {
            v3 = 1;
        }
    }

    if ((v2 == 0) && (v3 == 1)) {
        Heap_FreeToHeap(v0);
        return 0;
    }

    v1[0] = GetMonData(param0, MON_DATA_FRIENDSHIP, NULL);

    if (v1[0] < 100) {
        if (Item_GetAttributeFromStruct(v0, ITEM_DATA_AFFECTS_FRIENDSHIP_LOW) != 0) {
            if (sub_020971D0(param0, v1[0], Item_GetAttributeFromStruct(v0, ITEM_DATA_DELTA_FRIENDSHIP_LOW), param3, param4) == 0) {
                Heap_FreeToHeap(v0);
                return v2;
            }
        }
    } else if ((v1[0] >= 100) && (v1[0] < 200)) {
        if (Item_GetAttributeFromStruct(v0, ITEM_DATA_AFFECTS_FRIENDSHIP_MID) != 0) {
            if (sub_020971D0(param0, v1[0], Item_GetAttributeFromStruct(v0, ITEM_DATA_DELTA_FRIENDSHIP_MID), param3, param4) == 0) {
                Heap_FreeToHeap(v0);
                return v2;
            }
        }
    } else if ((v1[0] >= 200) && (v1[0] <= 255)) {
        if (Item_GetAttributeFromStruct(v0, ITEM_DATA_AFFECTS_FRIENDSHIP_HIGH) != 0) {
            if (sub_020971D0(param0, v1[0], Item_GetAttributeFromStruct(v0, ITEM_DATA_DELTA_FRIENDSHIP_HIGH), param3, param4) == 0) {
                Heap_FreeToHeap(v0);
                return v2;
            }
        }
    }

    Heap_FreeToHeap(v0);
    return v2;
}

u8 sub_02096F14 (Party * param0, u16 param1, u8 param2, u8 param3, u16 param4, u32 param5)
{
    Pokemon * v0 = Party_GetPokemonBySlotIndex(param0, param2);

    return sub_02096954(v0, param1, param3, param4, param5);
}

static u8 sub_02096F34 (Pokemon * param0, u32 param1)
{
    u16 v0;
    u8 v1;
    u8 v2;

    v0 = (u16)GetMonData(param0, MON_DATA_MOVE1 + param1, NULL);

    if (v0 == 0) {
        return 0;
    }

    v1 = (u8)GetMonData(param0, MON_DATA_58 + param1, NULL);
    v2 = (u8)GetMonData(param0, MON_DATA_62 + param1, NULL);

    if (v1 < MoveTable_GetMoveMaxPP(v0, v2)) {
        return 1;
    }

    return 0;
}

static u8 sub_02096F84 (Pokemon * param0, u32 param1, u32 param2)
{
    u16 v0;
    u8 v1;
    u8 v2;

    v0 = (u16)GetMonData(param0, MON_DATA_MOVE1 + param1, NULL);

    if (v0 == 0) {
        return 0;
    }

    v1 = (u8)GetMonData(param0, MON_DATA_58 + param1, NULL);
    v2 = (u8)MoveTable_GetMoveMaxPP(v0, GetMonData(param0, MON_DATA_62 + param1, NULL));

    if (v1 < v2) {
        if (param2 == 127) {
            v1 = v2;
        } else {
            v1 += param2;

            if (v1 > v2) {
                v1 = v2;
            }
        }

        sub_02074B30(param0, 58 + param1, &v1);
        return 1;
    }

    return 0;
}

static u8 sub_02097004 (Pokemon * param0, u32 param1, u32 param2)
{
    u16 v0;
    u8 v1;
    u8 v2;
    u8 v3;

    v2 = GetMonData(param0, MON_DATA_62 + param1, NULL);

    if (v2 == 3) {
        return 0;
    }

    v0 = (u16)GetMonData(param0, MON_DATA_MOVE1 + param1, NULL);

    if (MoveTable_GetMoveMaxPP(v0, 0) < 5) {
        return 0;
    }

    v1 = (u8)GetMonData(param0, MON_DATA_58 + param1, NULL);
    v3 = (u8)MoveTable_GetMoveMaxPP(v0, v2);

    if (v2 + param2 > 3) {
        v2 = 3;
    } else {
        v2 = v2 + param2;
    }

    v1 = v1 + MoveTable_GetMoveMaxPP(v0, v2) - v3;

    sub_02074B30(param0, 62 + param1, &v2);
    sub_02074B30(param0, 58 + param1, &v1);

    return 1;
}

static void sub_020970AC (Pokemon * param0, u32 param1, u32 param2, u32 param3)
{
    if (param2 == 1) {
        param3 = 1;
    } else if (param3 == 255) {
        param3 = param2;
    } else if (param3 == 254) {
        param3 = param2 / 2;
    } else if (param3 == 253) {
        param3 = param2 / 4;
    }

    if (param1 + param3 > param2) {
        param1 = param2;
    } else {
        param1 += param3;
    }

    sub_02074B30(param0, 163, &param1);
}

static s32 sub_020970EC (s32 param0, s32 param1, s32 param2)
{
    if ((param0 == 0) && (param2 < 0)) {
        return -1;
    }

    if ((param0 >= 100) && (param2 > 0)) {
        return -1;
    }

    if (((param0 + param1) >= 510) && (param2 > 0)) {
        return -1;
    }

    param0 += param2;

    if (param0 > 100) {
        param0 = 100;
    } else if (param0 < 0) {
        param0 = 0;
    }

    if ((param0 + param1) > 510) {
        param0 = 510 - param1;
    }

    return param0;
}

static u8 sub_02097144 (Pokemon * param0, PlItemData * param1)
{
    s32 v0;
    s32 v1;

    v0 = GetMonData(param0, MON_DATA_FRIENDSHIP, NULL);

    if (v0 >= 255) {
        return 0;
    }

    if (v0 < 100) {
        if (Item_GetAttributeFromStruct(param1, ITEM_DATA_AFFECTS_FRIENDSHIP_LOW) != 0) {
            if (Item_GetAttributeFromStruct(param1, ITEM_DATA_DELTA_FRIENDSHIP_LOW) > 0) {
                return 1;
            }
        }

        return 0;
    } else if ((v0 >= 100) && (v0 < 200)) {
        if (Item_GetAttributeFromStruct(param1, ITEM_DATA_AFFECTS_FRIENDSHIP_MID) != 0) {
            if (Item_GetAttributeFromStruct(param1, ITEM_DATA_DELTA_FRIENDSHIP_MID) > 0) {
                return 1;
            }
        }

        return 0;
    } else if ((v0 >= 200) && (v0 < 255)) {
        if (Item_GetAttributeFromStruct(param1, ITEM_DATA_AFFECTS_FRIENDSHIP_HIGH) != 0) {
            if (Item_GetAttributeFromStruct(param1, ITEM_DATA_DELTA_FRIENDSHIP_HIGH) > 0) {
                return 1;
            }
        }

        return 0;
    }

    return 0;
}

static u8 sub_020971D0 (Pokemon * param0, s32 param1, s32 param2, u16 param3, u32 param4)
{
    if ((param1 == 255) && (param2 > 0)) {
        return 0;
    }

    if ((param1 == 0) && (param2 < 0)) {
        return 0;
    }

    if (param2 > 0) {
        if (Item_GetAttribute(GetMonData(param0, MON_DATA_HELD_ITEM, NULL), ITEM_DATA_HOLDEFFECT_ID, param4) == HOLD_EFFECT_SOOTHE_BELL) {
            param2 = param2 * 150 / 100;
        }

        if (GetMonData(param0, MON_DATA_POKEBALL, NULL) == 11) {
            param2++;
        }

        if (GetMonData(param0, MON_DATA_152, NULL) == param3) {
            param2++;
        }
    }

    param2 += param1;

    if (param2 > 255) {
        param2 = 255;
    }

    if (param2 < 0) {
        param2 = 0;
    }

    sub_02074B30(param0, 9, &param2);
    return 1;
}

void sub_02097284 (Party * param0)
{
    int v0, v1, v2;
    u32 v3;
    Pokemon * v4;

    v2 = Party_GetCurrentCount(param0);

    for (v0 = 0; v0 < v2; v0++) {
        v4 = Party_GetPokemonBySlotIndex(param0, v0);

        if (GetMonData(v4, MON_DATA_172, NULL) == 0) {
            continue;
        }

        v3 = GetMonData(v4, MON_DATA_164, NULL);
        sub_02074B30(v4, 163, &v3);

        v3 = 0;
        sub_02074B30(v4, 160, &v3);

        for (v1 = 0; v1 < 4; v1++) {
            if (sub_02096F34(v4, v1) == 1) {
                sub_02096F84(v4, v1, 127);
            }
        }
    }
}
