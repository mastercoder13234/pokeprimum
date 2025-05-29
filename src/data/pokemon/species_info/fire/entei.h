#pragma once

#define SPECIES_INFO_ENTEI \
{ \
    .baseHP        = 115, \
    .baseAttack    = 115, \
    .baseDefense   = 85, \
    .baseSpeed     = 100, \
    .baseSpAttack  = 90, \
    .baseSpDefense = 75, \
    .types = { TYPE_FIRE, TYPE_FIRE }, \
    .catchRate = 3, \
    .expYield = 217, \
    .evYield_HP        = 1, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
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
    .abilities = {ABILITY_PRESSURE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}