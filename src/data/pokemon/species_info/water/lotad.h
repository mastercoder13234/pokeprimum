#pragma once

#define SPECIES_INFO_LOTAD \
{ \
    .baseHP        = 40, \
    .baseAttack    = 30, \
    .baseDefense   = 30, \
    .baseSpeed     = 30, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 50, \
    .types = { TYPE_WATER, TYPE_GRASS }, \
    .catchRate = 255, \
    .expYield = 74, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 1, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_GRASS }, \
    .abilities = {ABILITY_SWIFT_SWIM, ABILITY_RAIN_DISH}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}