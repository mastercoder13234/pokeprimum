#pragma once

#define SPECIES_INFO_WINGULL \
{ \
    .baseHP        = 40, \
    .baseAttack    = 30, \
    .baseDefense   = 30, \
    .baseSpeed     = 85, \
    .baseSpAttack  = 55, \
    .baseSpDefense = 30, \
    .types = { TYPE_WATER, TYPE_FLYING }, \
    .catchRate = 190, \
    .expYield = 64, \
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
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FLYING }, \
    .abilities = {ABILITY_KEEN_EYE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_WHITE, \
    .noFlip = FALSE, \
}