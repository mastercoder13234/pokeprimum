#pragma once

#define SPECIES_INFO_DODRIO \
{ \
    .baseHP        = 60, \
    .baseAttack    = 110, \
    .baseDefense   = 70, \
    .baseSpeed     = 100, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 60, \
    .types = { TYPE_NORMAL, TYPE_FLYING }, \
    .catchRate = 45, \
    .expYield = 158, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_SHARP_BEAK, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING }, \
    .abilities = {ABILITY_RUN_AWAY, ABILITY_EARLY_BIRD}, \
    .safariZoneFleeRate = 10, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}