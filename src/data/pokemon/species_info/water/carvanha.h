#pragma once

#define SPECIES_INFO_CARVANHA \
{ \
    .baseHP        = 45, \
    .baseAttack    = 90, \
    .baseDefense   = 20, \
    .baseSpeed     = 65, \
    .baseSpAttack  = 65, \
    .baseSpDefense = 20, \
    .types = { TYPE_WATER, TYPE_DARK }, \
    .catchRate = 225, \
    .expYield = 88, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
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
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}