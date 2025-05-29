#pragma once

#define SPECIES_INFO_REGICE \
{ \
    .baseHP        = 80, \
    .baseAttack    = 50, \
    .baseDefense   = 100, \
    .baseSpeed     = 50, \
    .baseSpAttack  = 100, \
    .baseSpDefense = 200, \
    .types = { TYPE_ICE, TYPE_ICE }, \
    .catchRate = 3, \
    .expYield = 216, \
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
    .abilities = {ABILITY_CLEAR_BODY, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}