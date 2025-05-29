#pragma once

#define SPECIES_INFO_WAILORD \
{ \
    .baseHP        = 170, \
    .baseAttack    = 90, \
    .baseDefense   = 45, \
    .baseSpeed     = 60, \
    .baseSpAttack  = 90, \
    .baseSpDefense = 45, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 60, \
    .expYield = 206, \
    .evYield_HP        = 2, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 40, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FLUCTUATING, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_WATER_2 }, \
    .abilities = {ABILITY_WATER_VEIL, ABILITY_OBLIVIOUS}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}