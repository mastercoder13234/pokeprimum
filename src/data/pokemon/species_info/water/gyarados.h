#pragma once

#define SPECIES_INFO_GYARADOS \
{ \
    .baseHP        = 95, \
    .baseAttack    = 125, \
    .baseDefense   = 79, \
    .baseSpeed     = 81, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 100, \
    .types = { TYPE_WATER, TYPE_FLYING }, \
    .catchRate = 45, \
    .expYield = 214, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 5, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_DRAGON }, \
    .abilities = {ABILITY_INTIMIDATE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}