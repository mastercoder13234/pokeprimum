#pragma once

#define SPECIES_INFO_POLIWAG \
{ \
    .baseHP        = 40, \
    .baseAttack    = 50, \
    .baseDefense   = 40, \
    .baseSpeed     = 90, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 40, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 255, \
    .expYield = 77, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1 }, \
    .abilities = {ABILITY_WATER_ABSORB, ABILITY_DAMP}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = TRUE, \
}