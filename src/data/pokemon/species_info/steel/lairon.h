#pragma once

#define SPECIES_INFO_LAIRON \
{ \
    .baseHP        = 60, \
    .baseAttack    = 90, \
    .baseDefense   = 140, \
    .baseSpeed     = 40, \
    .baseSpAttack  = 50, \
    .baseSpDefense = 50, \
    .types = { TYPE_STEEL, TYPE_ROCK }, \
    .catchRate = 90, \
    .expYield = 152, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 2, \
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