#pragma once

#define SPECIES_INFO_VOLTORB \
{ \
    .baseHP        = 40, \
    .baseAttack    = 30, \
    .baseDefense   = 50, \
    .baseSpeed     = 100, \
    .baseSpAttack  = 55, \
    .baseSpDefense = 55, \
    .types = { TYPE_ELECTRIC, TYPE_ELECTRIC }, \
    .catchRate = 190, \
    .expYield = 103, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL }, \
    .abilities = {ABILITY_SOUNDPROOF, ABILITY_STATIC}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}