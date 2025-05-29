#pragma once

#define SPECIES_INFO_GLIGAR \
{ \
    .baseHP        = 65, \
    .baseAttack    = 75, \
    .baseDefense   = 105, \
    .baseSpeed     = 85, \
    .baseSpAttack  = 35, \
    .baseSpDefense = 65, \
    .types = { TYPE_GROUND, TYPE_FLYING }, \
    .catchRate = 60, \
    .expYield = 108, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_HYPER_CUTTER, ABILITY_SAND_VEIL}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}