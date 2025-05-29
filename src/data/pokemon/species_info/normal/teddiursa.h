#pragma once

#define SPECIES_INFO_TEDDIURSA \
{ \
    .baseHP        = 60, \
    .baseAttack    = 80, \
    .baseDefense   = 50, \
    .baseSpeed     = 40, \
    .baseSpAttack  = 50, \
    .baseSpDefense = 50, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 120, \
    .expYield = 124, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_PICKUP, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = TRUE, \
}