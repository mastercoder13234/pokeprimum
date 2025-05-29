#pragma once

#define SPECIES_INFO_AGGRON \
{ \
    .baseHP        = 70, \
    .baseAttack    = 110, \
    .baseDefense   = 180, \
    .baseSpeed     = 50, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 60, \
    .types = { TYPE_STEEL, TYPE_ROCK }, \
    .catchRate = 45, \
    .expYield = 205, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 3, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_HARD_STONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 35, \
    .friendship = 35, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER }, \
    .abilities = {ABILITY_STURDY, ABILITY_ROCK_HEAD}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}