#pragma once

#define SPECIES_INFO_SOLROCK \
{ \
    .baseHP        = 70, \
    .baseAttack    = 95, \
    .baseDefense   = 85, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 55, \
    .baseSpDefense = 65, \
    .types = { TYPE_ROCK, TYPE_PSYCHIC }, \
    .catchRate = 45, \
    .expYield = 150, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_SUN_STONE, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 25, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FAST, \
    .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL }, \
    .abilities = {ABILITY_LEVITATE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}