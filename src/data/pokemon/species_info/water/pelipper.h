#pragma once

#define SPECIES_INFO_PELIPPER \
{ \
    .baseHP        = 60, \
    .baseAttack    = 50, \
    .baseDefense   = 100, \
    .baseSpeed     = 65, \
    .baseSpAttack  = 85, \
    .baseSpDefense = 70, \
    .types = { TYPE_WATER, TYPE_FLYING }, \
    .catchRate = 45, \
    .expYield = 164, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 2, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FLYING }, \
    .abilities = {ABILITY_KEEN_EYE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}