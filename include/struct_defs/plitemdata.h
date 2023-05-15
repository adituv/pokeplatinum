#ifndef POKEPLATINUM_PLITEMDATA_H
#define POKEPLATINUM_PLITEMDATA_H

#include "plitemdataextra.h"

typedef struct PlItemData_t {
    u16 price;
    u8 holdEffectId;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    u8 flingPower;
    u8 naturalGiftPower;
    u16 naturalGiftType : 5;
    u16 isKeyItem : 1;
    u16 unk_08_6 : 1; // Is usable key item?
    u16 bagPocket : 4;
    u16 inBattleBagPocket : 5;
    u8 unk_0A; // ~Out of battle effect type
    u8 unk_0B;
    u8 hasExtraItemData; // 0 if the extra data is a byte, 1 if the extra data is the full struct
    u8 unk_0D;
    union {
        u8 unk_0E;
        PlItemDataExtra extra;
    };
} PlItemData;

#endif // POKEPLATINUM_PLITEMDATA_H
