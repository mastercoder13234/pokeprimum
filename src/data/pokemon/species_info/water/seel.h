#pragma once

#define SPECIES_INFO_SEEL \
{ \
    .baseHP        = 65, \
    .baseAttack    = 45, \
    .baseDefense   = 55, \
    .baseSpeed     = 45, \
    .baseSpAttack  = 45, \
    .baseSpDefense = 70, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 190, \
    .expYield = 100, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 1, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_THICK_FAT, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_WHITE, \
    .noFlip = FALSE, \
}