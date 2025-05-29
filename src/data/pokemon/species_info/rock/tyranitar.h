#pragma once

#define SPECIES_INFO_TYRANITAR \
{ \
    .baseHP        = 100, \
    .baseAttack    = 134, \
    .baseDefense   = 110, \
    .baseSpeed     = 61, \
    .baseSpAttack  = 95, \
    .baseSpDefense = 100, \
    .types = { TYPE_ROCK, TYPE_DARK }, \
    .catchRate = 45, \
    .expYield = 218, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 3, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 40, \
    .friendship = 35, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER }, \
    .abilities = {ABILITY_SAND_STREAM, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}