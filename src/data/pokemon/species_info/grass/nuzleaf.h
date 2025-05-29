#pragma once

#define SPECIES_INFO_NUZLEAF \
{ \
    .baseHP        = 70, \
    .baseAttack    = 70, \
    .baseDefense   = 40, \
    .baseSpeed     = 60, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 40, \
    .types = { TYPE_GRASS, TYPE_DARK }, \
    .catchRate = 120, \
    .expYield = 141, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
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