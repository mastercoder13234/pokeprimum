#pragma once

#define SPECIES_INFO_SHARPEDO \
{ \
    .baseHP        = 70, \
    .baseAttack    = 120, \
    .baseDefense   = 40, \
    .baseSpeed     = 95, \
    .baseSpAttack  = 95, \
    .baseSpDefense = 40, \
    .types = { TYPE_WATER, TYPE_DARK }, \
    .catchRate = 60, \
    .expYield = 175, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = 35, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 }, \
    .abilities = {ABILITY_ROUGH_SKIN, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}