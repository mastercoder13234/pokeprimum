#pragma once

#define SPECIES_INFO_BULBASAUR \
{ \
    .baseHP        = 45, \
    .baseAttack    = 49, \
    .baseDefense   = 49, \
    .baseSpeed     = 45, \
    .baseSpAttack  = 65, \
    .baseSpDefense = 65, \
    .types = { TYPE_GRASS, TYPE_POISON }, \
    .catchRate = 45, \
    .expYield = 64, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(12.5), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS }, \
    .abilities = {ABILITY_OVERGROW, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}