#pragma once

#define SPECIES_INFO_BELLSPROUT \
{ \
    .baseHP        = 50, \
    .baseAttack    = 75, \
    .baseDefense   = 35, \
    .baseSpeed     = 40, \
    .baseSpAttack  = 70, \
    .baseSpDefense = 30, \
    .types = { TYPE_GRASS, TYPE_POISON }, \
    .catchRate = 255, \
    .expYield = 84, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
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