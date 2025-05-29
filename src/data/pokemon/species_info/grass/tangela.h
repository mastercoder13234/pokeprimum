#pragma once

#define SPECIES_INFO_TANGELA \
{ \
    .baseHP        = 65, \
    .baseAttack    = 55, \
    .baseDefense   = 115, \
    .baseSpeed     = 60, \
    .baseSpAttack  = 100, \
    .baseSpDefense = 40, \
    .types = { TYPE_GRASS, TYPE_GRASS }, \
    .catchRate = 45, \
    .expYield = 166, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS }, \
    .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}