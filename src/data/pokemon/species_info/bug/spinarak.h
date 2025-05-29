#pragma once

#define SPECIES_INFO_SPINARAK \
{ \
    .baseHP        = 40, \
    .baseAttack    = 60, \
    .baseDefense   = 40, \
    .baseSpeed     = 30, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 40, \
    .types = { TYPE_BUG, TYPE_POISON }, \
    .catchRate = 255, \
    .expYield = 54, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
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
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}