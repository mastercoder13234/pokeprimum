#pragma once

#define SPECIES_INFO_FLYGON \
{ \
    .baseHP        = 80, \
    .baseAttack    = 100, \
    .baseDefense   = 80, \
    .baseSpeed     = 100, \
    .baseSpAttack  = 80, \
    .baseSpDefense = 80, \
    .types = { TYPE_GROUND, TYPE_DRAGON }, \
    .catchRate = 45, \
    .expYield = 197, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
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
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_LEVITATE, ABILITY_LEVITATE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}