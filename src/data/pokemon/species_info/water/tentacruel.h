#pragma once

#define SPECIES_INFO_TENTACRUEL \
{ \
    .baseHP        = 80, \
    .baseAttack    = 70, \
    .baseDefense   = 65, \
    .baseSpeed     = 100, \
    .baseSpAttack  = 80, \
    .baseSpDefense = 120, \
    .types = { TYPE_WATER, TYPE_POISON }, \
    .catchRate = 60, \
    .expYield = 205, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 2, \
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