#pragma once

#define SPECIES_INFO_LEDYBA \
{ \
    .baseHP        = 40, \
    .baseAttack    = 20, \
    .baseDefense   = 30, \
    .baseSpeed     = 55, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 80, \
    .types = { TYPE_BUG, TYPE_FLYING }, \
    .catchRate = 255, \
    .expYield = 54, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 1, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FAST, \
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_SWARM, ABILITY_EARLY_BIRD}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}