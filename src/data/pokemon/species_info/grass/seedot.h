#pragma once

#define SPECIES_INFO_SEEDOT \
{ \
    .baseHP        = 40, \
    .baseAttack    = 40, \
    .baseDefense   = 50, \
    .baseSpeed     = 30, \
    .baseSpAttack  = 30, \
    .baseSpDefense = 30, \
    .types = { TYPE_GRASS, TYPE_GRASS }, \
    .catchRate = 255, \
    .expYield = 74, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
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