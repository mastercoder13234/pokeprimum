#pragma once

#define SPECIES_INFO_LUVDISC \
{ \
    .baseHP        = 43, \
    .baseAttack    = 30, \
    .baseDefense   = 55, \
    .baseSpeed     = 97, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 65, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 225, \
    .expYield = 110, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_HEART_SCALE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(75), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FAST, \
    .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 }, \
    .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PINK, \
    .noFlip = FALSE, \
}