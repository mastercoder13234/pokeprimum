#pragma once

#define SPECIES_INFO_SKIPLOOM \
{ \
    .baseHP        = 55, \
    .baseAttack    = 45, \
    .baseDefense   = 50, \
    .baseSpeed     = 80, \
    .baseSpAttack  = 45, \
    .baseSpDefense = 65, \
    .types = { TYPE_GRASS, TYPE_FLYING }, \
    .catchRate = 120, \
    .expYield = 136, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 2, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS }, \
    .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}