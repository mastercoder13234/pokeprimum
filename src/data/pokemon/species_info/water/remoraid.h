#pragma once

#define SPECIES_INFO_REMORAID \
{ \
    .baseHP        = 35, \
    .baseAttack    = 65, \
    .baseDefense   = 35, \
    .baseSpeed     = 65, \
    .baseSpAttack  = 65, \
    .baseSpDefense = 35, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 190, \
    .expYield = 78, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
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
    .abilities = {ABILITY_HUSTLE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}