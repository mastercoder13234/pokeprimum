#pragma once

#define SPECIES_INFO_SWELLOW \
{ \
    .baseHP        = 60, \
    .baseAttack    = 85, \
    .baseDefense   = 60, \
    .baseSpeed     = 125, \
    .baseSpAttack  = 50, \
    .baseSpDefense = 50, \
    .types = { TYPE_NORMAL, TYPE_FLYING }, \
    .catchRate = 45, \
    .expYield = 162, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 2, \
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