#pragma once

#define SPECIES_INFO_VAPOREON \
{ \
    .baseHP        = 130, \
    .baseAttack    = 65, \
    .baseDefense   = 60, \
    .baseSpeed     = 65, \
    .baseSpAttack  = 110, \
    .baseSpDefense = 95, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 45, \
    .expYield = 196, \
    .evYield_HP        = 2, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(12.5), \
    .eggCycles = 35, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_WATER_ABSORB, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}