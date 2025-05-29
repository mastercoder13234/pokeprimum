#pragma once

#define SPECIES_INFO_TAILLOW \
{ \
    .baseHP        = 40, \
    .baseAttack    = 55, \
    .baseDefense   = 30, \
    .baseSpeed     = 85, \
    .baseSpAttack  = 30, \
    .baseSpDefense = 30, \
    .types = { TYPE_NORMAL, TYPE_FLYING }, \
    .catchRate = 200, \
    .expYield = 59, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING }, \
    .abilities = {ABILITY_GUTS, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}