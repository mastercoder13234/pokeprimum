#pragma once

#define SPECIES_INFO_NATU \
{ \
    .baseHP        = 40, \
    .baseAttack    = 50, \
    .baseDefense   = 45, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 70, \
    .baseSpDefense = 45, \
    .types = { TYPE_PSYCHIC, TYPE_FLYING }, \
    .catchRate = 190, \
    .expYield = 73, \
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
    .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING }, \
    .abilities = {ABILITY_SYNCHRONIZE, ABILITY_EARLY_BIRD}, \
    .safariZoneFleeRate = 6, \
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}