#pragma once

#define SPECIES_INFO_LAPRAS \
{ \
    .baseHP        = 130, \
    .baseAttack    = 85, \
    .baseDefense   = 80, \
    .baseSpeed     = 60, \
    .baseSpAttack  = 85, \
    .baseSpDefense = 95, \
    .types = { TYPE_WATER, TYPE_ICE }, \
    .catchRate = 45, \
    .expYield = 219, \
    .evYield_HP        = 2, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 40, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 }, \
    .abilities = {ABILITY_WATER_ABSORB, ABILITY_SHELL_ARMOR}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}