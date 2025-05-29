#pragma once

#define SPECIES_INFO_SCIZOR \
{ \
    .baseHP        = 70, \
    .baseAttack    = 130, \
    .baseDefense   = 100, \
    .baseSpeed     = 65, \
    .baseSpAttack  = 55, \
    .baseSpDefense = 80, \
    .types = { TYPE_BUG, TYPE_STEEL }, \
    .catchRate = 25, \
    .expYield = 200, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 25, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_SWARM, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}