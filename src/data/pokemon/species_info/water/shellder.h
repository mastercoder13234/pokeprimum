#pragma once

#define SPECIES_INFO_SHELLDER \
{ \
    .baseHP        = 30, \
    .baseAttack    = 65, \
    .baseDefense   = 100, \
    .baseSpeed     = 40, \
    .baseSpAttack  = 45, \
    .baseSpDefense = 25, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 190, \
    .expYield = 97, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
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