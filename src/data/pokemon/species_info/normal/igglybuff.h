#pragma once

#define SPECIES_INFO_IGGLYBUFF \
{ \
    .baseHP        = 90, \
    .baseAttack    = 30, \
    .baseDefense   = 15, \
    .baseSpeed     = 15, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 20, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 170, \
    .expYield = 39, \
    .evYield_HP        = 1, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(75), \
    .eggCycles = 10, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FAST, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_CUTE_CHARM, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PINK, \
    .noFlip = TRUE, \
}