#pragma once

#define SPECIES_INFO_OCTILLERY \
{ \
    .baseHP        = 75, \
    .baseAttack    = 105, \
    .baseDefense   = 75, \
    .baseSpeed     = 45, \
    .baseSpAttack  = 105, \
    .baseSpDefense = 75, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 75, \
    .expYield = 164, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_2 }, \
    .abilities = {ABILITY_SUCTION_CUPS, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}