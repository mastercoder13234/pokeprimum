#pragma once

#define SPECIES_INFO_NOSEPASS \
{ \
    .baseHP        = 30, \
    .baseAttack    = 45, \
    .baseDefense   = 135, \
    .baseSpeed     = 30, \
    .baseSpAttack  = 45, \
    .baseSpDefense = 90, \
    .types = { TYPE_ROCK, TYPE_ROCK }, \
    .catchRate = 255, \
    .expYield = 108, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL }, \
    .abilities = {ABILITY_STURDY, ABILITY_MAGNET_PULL}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}