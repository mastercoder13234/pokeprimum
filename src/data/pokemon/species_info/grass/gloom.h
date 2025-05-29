#pragma once

#define SPECIES_INFO_GLOOM \
{ \
    .baseHP        = 60, \
    .baseAttack    = 65, \
    .baseDefense   = 70, \
    .baseSpeed     = 40, \
    .baseSpAttack  = 85, \
    .baseSpDefense = 75, \
    .types = { TYPE_GRASS, TYPE_POISON }, \
    .catchRate = 120, \
    .expYield = 132, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 2, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS }, \
    .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE}, \
    .safariZoneFleeRate = 6, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}