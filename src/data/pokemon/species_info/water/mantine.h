#pragma once

#define SPECIES_INFO_MANTINE \
{ \
    .baseHP        = 65, \
    .baseAttack    = 40, \
    .baseDefense   = 70, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 80, \
    .baseSpDefense = 140, \
    .types = { TYPE_WATER, TYPE_FLYING }, \
    .catchRate = 25, \
    .expYield = 168, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 2, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 25, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1 }, \
    .abilities = {ABILITY_SWIFT_SWIM, ABILITY_WATER_ABSORB}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}