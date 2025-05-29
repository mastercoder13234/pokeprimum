#pragma once

#define SPECIES_INFO_MILTANK \
{ \
    .baseHP        = 95, \
    .baseAttack    = 80, \
    .baseDefense   = 105, \
    .baseSpeed     = 100, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 70, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 45, \
    .expYield = 200, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 2, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_MOOMOO_MILK, \
    .itemRare   = ITEM_MOOMOO_MILK, \
    .genderRatio = MON_FEMALE, \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_THICK_FAT, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PINK, \
    .noFlip = FALSE, \
}