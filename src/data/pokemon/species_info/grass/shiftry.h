#pragma once

#define SPECIES_INFO_SHIFTRY \
{ \
    .baseHP        = 90, \
    .baseAttack    = 100, \
    .baseDefense   = 60, \
    .baseSpeed     = 80, \
    .baseSpAttack  = 90, \
    .baseSpDefense = 60, \
    .types = { TYPE_GRASS, TYPE_DARK }, \
    .catchRate = 45, \
    .expYield = 181, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 3, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS }, \
    .abilities = {ABILITY_CHLOROPHYLL, ABILITY_EARLY_BIRD}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}