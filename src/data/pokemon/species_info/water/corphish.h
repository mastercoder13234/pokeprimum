#pragma once

#define SPECIES_INFO_CORPHISH \
{ \
    .baseHP        = 43, \
    .baseAttack    = 80, \
    .baseDefense   = 65, \
    .baseSpeed     = 35, \
    .baseSpAttack  = 50, \
    .baseSpDefense = 35, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 205, \
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
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FLUCTUATING, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3 }, \
    .abilities = {ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}