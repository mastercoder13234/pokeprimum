#pragma once

#define SPECIES_INFO_WEEPINBELL \
{ \
    .baseHP        = 65, \
    .baseAttack    = 90, \
    .baseDefense   = 50, \
    .baseSpeed     = 55, \
    .baseSpAttack  = 85, \
    .baseSpDefense = 45, \
    .types = { TYPE_GRASS, TYPE_POISON }, \
    .catchRate = 120, \
    .expYield = 151, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
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