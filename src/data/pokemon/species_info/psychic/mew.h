#pragma once

#define SPECIES_INFO_MEW \
{ \
    .baseHP        = 100, \
    .baseAttack    = 100, \
    .baseDefense   = 100, \
    .baseSpeed     = 100, \
    .baseSpAttack  = 100, \
    .baseSpDefense = 100, \
    .types = { TYPE_PSYCHIC, TYPE_PSYCHIC }, \
    .catchRate = 45, \
    .expYield = 64, \
    .evYield_HP        = 3, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_LUM_BERRY, \
    .itemRare   = ITEM_LUM_BERRY, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 120, \
    .friendship = 100, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_SYNCHRONIZE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PINK, \
    .noFlip = FALSE, \
}