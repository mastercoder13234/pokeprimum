#pragma once

#define SPECIES_INFO_VENUSAUR \
{ \
    .baseHP        = 80, \
    .baseAttack    = 82, \
    .baseDefense   = 83, \
    .baseSpeed     = 80, \
    .baseSpAttack  = 100, \
    .baseSpDefense = 100, \
    .types = { TYPE_GRASS, TYPE_POISON }, \
    .catchRate = 45, \
    .expYield = 208, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 2, \
    .evYield_SpDefense = 1, \
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