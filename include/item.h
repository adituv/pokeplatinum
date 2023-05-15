#ifndef POKEPLATINUM_UNK_0207CDEC_H
#define POKEPLATINUM_UNK_0207CDEC_H

#include "struct_decls/struct_02023790_decl.h"
#include "struct_decls/plitemdata_decl.h"

void sub_0207CDEC(void * param0, u16 param1, u16 param2);
u16 sub_0207CE78(u16 param0, u16 param1);
u16 Item_GetItemIDFromGen3ID(u16 param0);
u16 Item_GetIndexOfIconNCER(void);
u16 Item_GetIndexOfIconNANR(void);
void * Item_LoadDataOrGFX(u16 param0, u16 param1, u32 param2);
void Item_GetNameIntoString(UnkStruct_02023790 * param0, u16 param1, u32 param2);
void Item_GetDescriptionIntoString(UnkStruct_02023790 * param0, u16 param1, u16 param2);
s32 Item_GetAttribute(u16 param0, u16 param1, u32 param2);
s32 Item_GetAttributeFromStruct(PlItemData * param0, u16 param1);
const u16 GetMoveFromTMOrHMItemID(u16 param0);
u8 Item_IsMoveHM(u16 param0);
u8 Item_GetTMOrHMNumberFromID(u16 param0);
u8 Item_IsMail(u16 param0);
u8 Item_GetMailIndexFromItemID(u16 param0);
u16 Item_GetItemIDFromMailIndex(u8 param0);
u8 Item_IsBerry(u16 param0);
u8 Item_GetBerryIndexFromItemID(u16 param0);
u16 Item_GetItemIDFromBerryIndex(u8 param0);
u8 Item_IsHerbalMedicine(u16 param0);
void * sub_0207D388(int param0);
PlItemData * sub_0207D3B0(PlItemData * param0, u16 param1);

#endif // POKEPLATINUM_UNK_0207CDEC_H
