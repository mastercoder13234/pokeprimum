#pragma once

#define SPECIES_INFO_GEODUDE \
{ \
    .baseHP        = 40, \
    .baseAttack    = 80, \
    .baseDefense   = 100, \
    .baseSpeed     = 20, \
    .baseSpAttack  = 30, \
    .baseSpDefense = 30, \
    .types = { TYPE_ROCK, TYPE_GROUND }, \
    .catchRate = 255, \
    .expYield = 86, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
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
    .safariZoneFleeRate = 4, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}