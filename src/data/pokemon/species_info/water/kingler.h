#pragma once

#define SPECIES_INFO_KINGLER \
{ \
    .baseHP        = 55, \
    .baseAttack    = 130, \
    .baseDefense   = 115, \
    .baseSpeed     = 75, \
    .baseSpAttack  = 50, \
    .baseSpDefense = 50, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 60, \
    .expYield = 206, \
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
    .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 }, \
    .abilities = {ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = TRUE, \
}