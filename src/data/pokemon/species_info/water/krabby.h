#pragma once

#define SPECIES_INFO_KRABBY \
{ \
    .baseHP        = 30, \
    .baseAttack    = 105, \
    .baseDefense   = 90, \
    .baseSpeed     = 50, \
    .baseSpAttack  = 25, \
    .baseSpDefense = 25, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 225, \
    .expYield = 115, \
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
    .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 }, \
    .abilities = {ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}