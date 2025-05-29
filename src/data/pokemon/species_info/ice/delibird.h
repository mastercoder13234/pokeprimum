#pragma once

#define SPECIES_INFO_DELIBIRD \
{ \
    .baseHP        = 45, \
    .baseAttack    = 55, \
    .baseDefense   = 45, \
    .baseSpeed     = 75, \
    .baseSpAttack  = 65, \
    .baseSpDefense = 45, \
    .types = { TYPE_ICE, TYPE_FLYING }, \
    .catchRate = 45, \
    .expYield = 183, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FAST, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_VITAL_SPIRIT, ABILITY_HUSTLE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}