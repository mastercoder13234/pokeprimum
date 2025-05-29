#pragma once

#define SPECIES_INFO_CORSOLA \
{ \
    .baseHP        = 55, \
    .baseAttack    = 55, \
    .baseDefense   = 85, \
    .baseSpeed     = 35, \
    .baseSpAttack  = 65, \
    .baseSpDefense = 85, \
    .types = { TYPE_WATER, TYPE_ROCK }, \
    .catchRate = 60, \
    .expYield = 113, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 1, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_RED_SHARD, \
    .genderRatio = PERCENT_FEMALE(75), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FAST, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3 }, \
    .abilities = {ABILITY_HUSTLE, ABILITY_NATURAL_CURE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PINK, \
    .noFlip = FALSE, \
}