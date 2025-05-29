#pragma once

#define SPECIES_INFO_FEEBAS \
{ \
    .baseHP        = 20, \
    .baseAttack    = 15, \
    .baseDefense   = 20, \
    .baseSpeed     = 80, \
    .baseSpAttack  = 10, \
    .baseSpDefense = 55, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 255, \
    .expYield = 61, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_ERRATIC, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON }, \
    .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}