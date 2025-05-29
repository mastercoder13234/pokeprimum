#pragma once

#define SPECIES_INFO_KECLEON \
{ \
    .baseHP        = 60, \
    .baseAttack    = 90, \
    .baseDefense   = 70, \
    .baseSpeed     = 40, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 120, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 200, \
    .expYield = 132, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 1, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_PERSIM_BERRY, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_COLOR_CHANGE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}