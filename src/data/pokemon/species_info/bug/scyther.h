#pragma once

#define SPECIES_INFO_SCYTHER \
{ \
    .baseHP        = 70, \
    .baseAttack    = 110, \
    .baseDefense   = 80, \
    .baseSpeed     = 105, \
    .baseSpAttack  = 55, \
    .baseSpDefense = 80, \
    .types = { TYPE_BUG, TYPE_FLYING }, \
    .catchRate = 45, \
    .expYield = 187, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
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
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}