#pragma once

#define SPECIES_INFO_TENTACOOL \
{ \
    .baseHP        = 40, \
    .baseAttack    = 40, \
    .baseDefense   = 35, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 50, \
    .baseSpDefense = 100, \
    .types = { TYPE_WATER, TYPE_POISON }, \
    .catchRate = 190, \
    .expYield = 105, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 1, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 }, \
    .abilities = {ABILITY_CLEAR_BODY, ABILITY_LIQUID_OOZE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}