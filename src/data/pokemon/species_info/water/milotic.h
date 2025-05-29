#pragma once

#define SPECIES_INFO_MILOTIC \
{ \
    .baseHP        = 95, \
    .baseAttack    = 60, \
    .baseDefense   = 79, \
    .baseSpeed     = 81, \
    .baseSpAttack  = 100, \
    .baseSpDefense = 125, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 60, \
    .expYield = 213, \
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
    .growthRate = GROWTH_ERRATIC, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON }, \
    .abilities = {ABILITY_MARVEL_SCALE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PINK, \
    .noFlip = FALSE, \
}