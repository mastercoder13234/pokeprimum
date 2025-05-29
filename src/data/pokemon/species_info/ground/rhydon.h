#pragma once

#define SPECIES_INFO_RHYDON \
{ \
    .baseHP        = 105, \
    .baseAttack    = 130, \
    .baseDefense   = 120, \
    .baseSpeed     = 40, \
    .baseSpAttack  = 45, \
    .baseSpDefense = 45, \
    .types = { TYPE_GROUND, TYPE_ROCK }, \
    .catchRate = 60, \
    .expYield = 204, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}