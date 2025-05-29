#pragma once

#define SPECIES_INFO_ARTICUNO \
{ \
    .baseHP        = 90, \
    .baseAttack    = 85, \
    .baseDefense   = 100, \
    .baseSpeed     = 85, \
    .baseSpAttack  = 95, \
    .baseSpDefense = 125, \
    .types = { TYPE_ICE, TYPE_FLYING }, \
    .catchRate = 3, \
    .expYield = 215, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 3, \
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