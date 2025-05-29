#pragma once

#define SPECIES_INFO_MEWTWO \
{ \
    .baseHP        = 106, \
    .baseAttack    = 110, \
    .baseDefense   = 90, \
    .baseSpeed     = 130, \
    .baseSpAttack  = 154, \
    .baseSpDefense = 90, \
    .types = { TYPE_PSYCHIC, TYPE_PSYCHIC }, \
    .catchRate = 3, \
    .expYield = 220, \
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
    .abilities = {ABILITY_PRESSURE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}