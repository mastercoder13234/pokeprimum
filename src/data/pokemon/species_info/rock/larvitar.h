#pragma once

#define SPECIES_INFO_LARVITAR \
{ \
    .baseHP        = 50, \
    .baseAttack    = 64, \
    .baseDefense   = 50, \
    .baseSpeed     = 41, \
    .baseSpAttack  = 45, \
    .baseSpDefense = 50, \
    .types = { TYPE_ROCK, TYPE_GROUND }, \
    .catchRate = 45, \
    .expYield = 67, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
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
    .abilities = {ABILITY_GUTS, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}