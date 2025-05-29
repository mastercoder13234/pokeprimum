#pragma once

#define SPECIES_INFO_CRAWDAUNT \
{ \
    .baseHP        = 63, \
    .baseAttack    = 120, \
    .baseDefense   = 85, \
    .baseSpeed     = 55, \
    .baseSpAttack  = 90, \
    .baseSpDefense = 55, \
    .types = { TYPE_WATER, TYPE_DARK }, \
    .catchRate = 155, \
    .expYield = 161, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FLUCTUATING, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3 }, \
    .abilities = {ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}