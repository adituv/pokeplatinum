#ifndef POKEPLATINUM_PLITEMDATAEXTRA_H
#define POKEPLATINUM_PLITEMDATAEXTRA_H

typedef struct PlItemDataExtra_t {
    u8 curesSleep : 1;
    u8 curesPoison : 1;
    u8 curesBurn : 1;
    u8 curesFreeze : 1;
    u8 curesParalysis : 1;
    u8 curesConfusion : 1;
    u8 curesInfatuation : 1;
    u8 hasGuardSpecEffect : 1;
    u8 hasReviveEffect : 1;
    u8 hasSacredAshEffect : 1;
    u8 hasRareCandyEffect : 1;
    u8 hasEvolutionEffect : 1;
    u8 hasXAttackEffect : 4;
    u8 hasXDefendEffect : 4;
    u8 hasXSpecialEffect : 4;
    u8 hasXSpDefEffect : 4;
    u8 hasXSpeedEffect : 4;
    u8 hasXAccuracyEffect : 4;
    u8 hasDireHitEffect : 2;
    u8 hasPpUpEffect : 1;
    u8 hasPpMaxEffect : 1;
    u8 restoresPpSingleMove : 1;
    u8 restoresPpAllMoves : 1;
    u8 restoresHp : 1;
    u8 affectsHpEvs : 1;
    u8 affectsAtkEvs : 1;
    u8 affectsDefEvs : 1;
    u8 affectsSpeedEvs : 1;
    u8 affectsSpAEvs : 1;
    u8 affectsSpDEvs : 1;

    // Low friendship: 0-99
    // Mid friendship: 100-199
    // High friendship: 200-255
    u8 affectsFriendshipLow : 1;
    u8 affectsFriendshipMid : 1;
    u8 affectsFriendshipHigh : 1;
    u8 unk_06_4 : 4;
    s8 hpEvChange;
    s8 atkEvChange;
    s8 defEvChange;
    s8 speedEvChange;
    s8 spAEvChange;
    s8 spDEvChange;

    // Up to 200 known to be a literal quantity.
    // 255 = 100% hp; 254 = 50% hp; 253 = 25% hp
    u8 hpRestored;

    // 127 = 100% pp
    u8 ppRestored;

    s8 friendshipChangeLow;
    s8 friendshipChangeMid;
    s8 friendshipChangeHigh;
    u8 unk_12[2];
} PlItemDataExtra;

#endif // POKEPLATINUM_PLITEMDATAEXTRA_H
