#pragma once

#define SPECIES_INFO_LUGIA \
{ \
    .baseHP        = 106, \
    .baseAttack    = 90, \
    .baseDefense   = 130, \
    .baseSpeed     = 110, \
    .baseSpAttack  = 90, \
    .baseSpDefense = 154, \
    .types = { TYPE_PSYCHIC, TYPE_FLYING }, \
    .catchRate = 3, \
    .expYield = 220, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 3, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 120, \
    .friendship = 0, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_PRESSURE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_WHITE, \
    .noFlip = FALSE, \
}