#pragma once

#define SPECIES_INFO_MAGIKARP \
{ \
    .baseHP        = 20, \
    .baseAttack    = 10, \
    .baseDefense   = 55, \
    .baseSpeed     = 80, \
    .baseSpAttack  = 15, \
    .baseSpDefense = 20, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 255, \
    .expYield = 20, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 5, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_DRAGON }, \
    .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE}, \
    .safariZoneFleeRate = 4, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}