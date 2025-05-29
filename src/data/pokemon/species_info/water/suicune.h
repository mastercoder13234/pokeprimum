#pragma once

#define SPECIES_INFO_SUICUNE \
{ \
    .baseHP        = 100, \
    .baseAttack    = 75, \
    .baseDefense   = 115, \
    .baseSpeed     = 85, \
    .baseSpAttack  = 90, \
    .baseSpDefense = 115, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 3, \
    .expYield = 215, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 2, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 80, \
    .friendship = 35, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_PRESSURE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}