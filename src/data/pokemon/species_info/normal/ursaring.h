#pragma once

#define SPECIES_INFO_URSARING \
{ \
    .baseHP        = 90, \
    .baseAttack    = 130, \
    .baseDefense   = 75, \
    .baseSpeed     = 55, \
    .baseSpAttack  = 75, \
    .baseSpDefense = 75, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 60, \
    .expYield = 189, \
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
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_GUTS, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}