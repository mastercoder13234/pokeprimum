#pragma once

#define SPECIES_INFO_ONIX \
{ \
    .baseHP        = 35, \
    .baseAttack    = 45, \
    .baseDefense   = 160, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 30, \
    .baseSpDefense = 45, \
    .types = { TYPE_ROCK, TYPE_GROUND }, \
    .catchRate = 45, \
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
    .eggCycles = 25, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL }, \
    .abilities = {ABILITY_ROCK_HEAD, ABILITY_STURDY}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}