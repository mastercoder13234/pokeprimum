#pragma once

#define SPECIES_INFO_LILEEP \
{ \
    .baseHP        = 66, \
    .baseAttack    = 41, \
    .baseDefense   = 77, \
    .baseSpeed     = 23, \
    .baseSpAttack  = 61, \
    .baseSpDefense = 87, \
    .types = { TYPE_ROCK, TYPE_GRASS }, \
    .catchRate = 45, \
    .expYield = 121, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 1, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(12.5), \
    .eggCycles = 30, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_ERRATIC, \
    .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 }, \
    .abilities = {ABILITY_SUCTION_CUPS, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}