#pragma once

#define SPECIES_INFO_QWILFISH \
{ \
    .baseHP        = 65, \
    .baseAttack    = 95, \
    .baseDefense   = 75, \
    .baseSpeed     = 85, \
    .baseSpAttack  = 55, \
    .baseSpDefense = 55, \
    .types = { TYPE_WATER, TYPE_POISON }, \
    .catchRate = 45, \
    .expYield = 100, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 }, \
    .abilities = {ABILITY_POISON_POINT, ABILITY_SWIFT_SWIM}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}