#pragma once

#define SPECIES_INFO_GOLDEEN \
{ \
    .baseHP        = 45, \
    .baseAttack    = 67, \
    .baseDefense   = 60, \
    .baseSpeed     = 63, \
    .baseSpAttack  = 35, \
    .baseSpDefense = 50, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 225, \
    .expYield = 111, \
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
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 }, \
    .abilities = {ABILITY_SWIFT_SWIM, ABILITY_WATER_VEIL}, \
    .safariZoneFleeRate = 4, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}