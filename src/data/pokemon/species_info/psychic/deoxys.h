#pragma once

#define SPECIES_INFO_DEOXYS \
{ \
    .baseHP        = 50, \
    .baseAttack    = 150, \
    .baseDefense   = 50, \
    .baseSpeed     = 150, \
    .baseSpAttack  = 150, \
    .baseSpDefense = 50, \
    .types = { TYPE_PSYCHIC, TYPE_PSYCHIC }, \
    .catchRate = 3, \
    .expYield = 215, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 120, \
    .friendship = 0, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_PRESSURE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = TRUE, \
}