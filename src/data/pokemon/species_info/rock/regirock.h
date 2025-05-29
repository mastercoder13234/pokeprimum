#pragma once

#define SPECIES_INFO_REGIROCK \
{ \
    .baseHP        = 80, \
    .baseAttack    = 100, \
    .baseDefense   = 200, \
    .baseSpeed     = 50, \
    .baseSpAttack  = 50, \
    .baseSpDefense = 100, \
    .types = { TYPE_ROCK, TYPE_ROCK }, \
    .catchRate = 3, \
    .expYield = 217, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 3, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 80, \
    .friendship = 35, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_CLEAR_BODY, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}