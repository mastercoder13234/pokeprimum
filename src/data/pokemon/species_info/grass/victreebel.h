#pragma once

#define SPECIES_INFO_VICTREEBEL \
{ \
    .baseHP        = 80, \
    .baseAttack    = 105, \
    .baseDefense   = 65, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 100, \
    .baseSpDefense = 60, \
    .types = { TYPE_GRASS, TYPE_POISON }, \
    .catchRate = 45, \
    .expYield = 191, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 3, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS }, \
    .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}