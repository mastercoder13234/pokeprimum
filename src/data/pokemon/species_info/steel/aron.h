#pragma once

#define SPECIES_INFO_ARON \
{ \
    .baseHP        = 50, \
    .baseAttack    = 70, \
    .baseDefense   = 100, \
    .baseSpeed     = 30, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 40, \
    .types = { TYPE_STEEL, TYPE_ROCK }, \
    .catchRate = 180, \
    .expYield = 96, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
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