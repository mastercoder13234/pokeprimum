#pragma once

#define SPECIES_INFO_REGISTEEL \
{ \
    .baseHP        = 80, \
    .baseAttack    = 75, \
    .baseDefense   = 150, \
    .baseSpeed     = 50, \
    .baseSpAttack  = 75, \
    .baseSpDefense = 150, \
    .types = { TYPE_STEEL, TYPE_STEEL }, \
    .catchRate = 3, \
    .expYield = 215, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 2, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 1, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 80, \
    .friendship = 35, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_CLEAR_BODY, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}