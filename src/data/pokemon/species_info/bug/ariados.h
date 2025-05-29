#pragma once

#define SPECIES_INFO_ARIADOS \
{ \
    .baseHP        = 70, \
    .baseAttack    = 90, \
    .baseDefense   = 70, \
    .baseSpeed     = 40, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 60, \
    .types = { TYPE_BUG, TYPE_POISON }, \
    .catchRate = 90, \
    .expYield = 134, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FAST, \
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_SWARM, ABILITY_INSOMNIA}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}