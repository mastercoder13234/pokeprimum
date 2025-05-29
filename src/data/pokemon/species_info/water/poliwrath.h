#pragma once

#define SPECIES_INFO_POLIWRATH \
{ \
    .baseHP        = 90, \
    .baseAttack    = 85, \
    .baseDefense   = 95, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 70, \
    .baseSpDefense = 90, \
    .types = { TYPE_WATER, TYPE_FIGHTING }, \
    .catchRate = 45, \
    .expYield = 185, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 3, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_KINGS_ROCK, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1 }, \
    .abilities = {ABILITY_WATER_ABSORB, ABILITY_DAMP}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = TRUE, \
}