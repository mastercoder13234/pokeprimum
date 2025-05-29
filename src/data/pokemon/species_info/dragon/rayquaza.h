#pragma once

#define SPECIES_INFO_RAYQUAZA \
{ \
    .baseHP        = 105, \
    .baseAttack    = 150, \
    .baseDefense   = 90, \
    .baseSpeed     = 95, \
    .baseSpAttack  = 150, \
    .baseSpDefense = 90, \
    .types = { TYPE_DRAGON, TYPE_FLYING }, \
    .catchRate = 3, \
    .expYield = 220, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 120, \
    .friendship = 0, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_AIR_LOCK, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}