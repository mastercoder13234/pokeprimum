#pragma once

#define SPECIES_INFO_ARMALDO \
{ \
    .baseHP        = 75, \
    .baseAttack    = 125, \
    .baseDefense   = 100, \
    .baseSpeed     = 45, \
    .baseSpAttack  = 70, \
    .baseSpDefense = 80, \
    .types = { TYPE_ROCK, TYPE_BUG }, \
    .catchRate = 45, \
    .expYield = 200, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(12.5), \
    .eggCycles = 30, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_ERRATIC, \
    .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 }, \
    .abilities = {ABILITY_BATTLE_ARMOR, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}