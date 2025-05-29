#pragma once

#define SPECIES_INFO_GRAVELER \
{ \
    .baseHP        = 55, \
    .baseAttack    = 95, \
    .baseDefense   = 115, \
    .baseSpeed     = 35, \
    .baseSpAttack  = 45, \
    .baseSpDefense = 45, \
    .types = { TYPE_ROCK, TYPE_GROUND }, \
    .catchRate = 120, \
    .expYield = 134, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 2, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_EVERSTONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL }, \
    .abilities = {ABILITY_ROCK_HEAD, ABILITY_STURDY}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}