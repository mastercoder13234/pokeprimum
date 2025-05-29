#pragma once

#define SPECIES_INFO_MOLTRES \
{ \
    .baseHP        = 90, \
    .baseAttack    = 100, \
    .baseDefense   = 90, \
    .baseSpeed     = 90, \
    .baseSpAttack  = 125, \
    .baseSpDefense = 85, \
    .types = { TYPE_FIRE, TYPE_FLYING }, \
    .catchRate = 3, \
    .expYield = 217, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 3, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 80, \
    .friendship = 35, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_PRESSURE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}