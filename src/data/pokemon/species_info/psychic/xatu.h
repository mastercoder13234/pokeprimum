#pragma once

#define SPECIES_INFO_XATU \
{ \
    .baseHP        = 65, \
    .baseAttack    = 75, \
    .baseDefense   = 70, \
    .baseSpeed     = 95, \
    .baseSpAttack  = 95, \
    .baseSpDefense = 70, \
    .types = { TYPE_PSYCHIC, TYPE_FLYING }, \
    .catchRate = 75, \
    .expYield = 171, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING }, \
    .abilities = {ABILITY_SYNCHRONIZE, ABILITY_EARLY_BIRD}, \
    .safariZoneFleeRate = 8, \
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}