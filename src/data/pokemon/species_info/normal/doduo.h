#pragma once

#define SPECIES_INFO_DODUO \
{ \
    .baseHP        = 35, \
    .baseAttack    = 85, \
    .baseDefense   = 45, \
    .baseSpeed     = 75, \
    .baseSpAttack  = 35, \
    .baseSpDefense = 35, \
    .types = { TYPE_NORMAL, TYPE_FLYING }, \
    .catchRate = 190, \
    .expYield = 96, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
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
    .safariZoneFleeRate = 8, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}