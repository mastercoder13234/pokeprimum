#pragma once

#define SPECIES_INFO_SUDOWOODO \
{ \
    .baseHP        = 70, \
    .baseAttack    = 100, \
    .baseDefense   = 115, \
    .baseSpeed     = 30, \
    .baseSpAttack  = 30, \
    .baseSpDefense = 65, \
    .types = { TYPE_ROCK, TYPE_ROCK }, \
    .catchRate = 65, \
    .expYield = 135, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 2, \
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
    .abilities = {ABILITY_STURDY, ABILITY_ROCK_HEAD}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}