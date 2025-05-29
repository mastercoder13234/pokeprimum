#pragma once

#define SPECIES_INFO_TRAPINCH \
{ \
    .baseHP        = 45, \
    .baseAttack    = 100, \
    .baseDefense   = 45, \
    .baseSpeed     = 10, \
    .baseSpAttack  = 45, \
    .baseSpDefense = 45, \
    .types = { TYPE_GROUND, TYPE_GROUND }, \
    .catchRate = 255, \
    .expYield = 73, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_SOFT_SAND, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_HYPER_CUTTER, ABILITY_ARENA_TRAP}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}