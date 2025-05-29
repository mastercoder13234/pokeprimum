#pragma once

#define SPECIES_INFO_PINSIR \
{ \
    .baseHP        = 65, \
    .baseAttack    = 125, \
    .baseDefense   = 100, \
    .baseSpeed     = 85, \
    .baseSpAttack  = 55, \
    .baseSpDefense = 70, \
    .types = { TYPE_BUG, TYPE_BUG }, \
    .catchRate = 45, \
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
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_HYPER_CUTTER, ABILITY_NONE}, \
    .safariZoneFleeRate = 8, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}