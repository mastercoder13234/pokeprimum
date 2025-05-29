#pragma once

#define SPECIES_INFO_LATIOS \
{ \
    .baseHP        = 80, \
    .baseAttack    = 90, \
    .baseDefense   = 80, \
    .baseSpeed     = 110, \
    .baseSpAttack  = 130, \
    .baseSpDefense = 110, \
    .types = { TYPE_DRAGON, TYPE_PSYCHIC }, \
    .catchRate = 3, \
    .expYield = 211, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 3, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_MALE, \
    .eggCycles = 120, \
    .friendship = 90, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_LEVITATE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}