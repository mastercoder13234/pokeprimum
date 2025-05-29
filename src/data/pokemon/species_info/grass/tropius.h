#pragma once

#define SPECIES_INFO_TROPIUS \
{ \
    .baseHP        = 99, \
    .baseAttack    = 68, \
    .baseDefense   = 83, \
    .baseSpeed     = 51, \
    .baseSpAttack  = 72, \
    .baseSpDefense = 87, \
    .types = { TYPE_GRASS, TYPE_FLYING }, \
    .catchRate = 200, \
    .expYield = 169, \
    .evYield_HP        = 2, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 25, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS }, \
    .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}