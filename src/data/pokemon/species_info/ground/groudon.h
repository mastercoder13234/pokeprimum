#pragma once

#define SPECIES_INFO_GROUDON \
{ \
    .baseHP        = 100, \
    .baseAttack    = 150, \
    .baseDefense   = 140, \
    .baseSpeed     = 90, \
    .baseSpAttack  = 100, \
    .baseSpDefense = 90, \
    .types = { TYPE_GROUND, TYPE_GROUND }, \
    .catchRate = 5, \
    .expYield = 218, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 3, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 120, \
    .friendship = 0, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_DROUGHT, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}