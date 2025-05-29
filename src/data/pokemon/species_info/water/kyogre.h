#pragma once

#define SPECIES_INFO_KYOGRE \
{ \
    .baseHP        = 100, \
    .baseAttack    = 100, \
    .baseDefense   = 90, \
    .baseSpeed     = 90, \
    .baseSpAttack  = 150, \
    .baseSpDefense = 140, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 5, \
    .expYield = 218, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 3, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 120, \
    .friendship = 0, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_DRIZZLE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}