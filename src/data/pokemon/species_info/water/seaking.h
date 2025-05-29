#pragma once

#define SPECIES_INFO_SEAKING \
{ \
    .baseHP        = 80, \
    .baseAttack    = 92, \
    .baseDefense   = 65, \
    .baseSpeed     = 68, \
    .baseSpAttack  = 65, \
    .baseSpDefense = 80, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 60, \
    .expYield = 170, \
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
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 }, \
    .abilities = {ABILITY_SWIFT_SWIM, ABILITY_WATER_VEIL}, \
    .safariZoneFleeRate = 6, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}