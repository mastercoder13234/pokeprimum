#pragma once

#define SPECIES_INFO_CLOYSTER \
{ \
    .baseHP        = 50, \
    .baseAttack    = 95, \
    .baseDefense   = 180, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 85, \
    .baseSpDefense = 45, \
    .types = { TYPE_WATER, TYPE_ICE }, \
    .catchRate = 60, \
    .expYield = 203, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 2, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_PEARL, \
    .itemRare   = ITEM_BIG_PEARL, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 }, \
    .abilities = {ABILITY_SHELL_ARMOR, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}