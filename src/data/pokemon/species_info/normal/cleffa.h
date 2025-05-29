#pragma once

#define SPECIES_INFO_CLEFFA \
{ \
    .baseHP        = 50, \
    .baseAttack    = 25, \
    .baseDefense   = 28, \
    .baseSpeed     = 15, \
    .baseSpAttack  = 45, \
    .baseSpDefense = 55, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 150, \
    .expYield = 37, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 1, \
    .itemCommon = ITEM_LEPPA_BERRY, \
    .itemRare   = ITEM_MOON_STONE, \
    .genderRatio = PERCENT_FEMALE(75), \
    .eggCycles = 10, \
    .friendship = 140, \
    .growthRate = GROWTH_FAST, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_CUTE_CHARM, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PINK, \
    .noFlip = FALSE, \
}