#pragma once

#define SPECIES_INFO_ZIGZAGOON \
{ \
    .baseHP        = 38, \
    .baseAttack    = 30, \
    .baseDefense   = 41, \
    .baseSpeed     = 60, \
    .baseSpAttack  = 30, \
    .baseSpDefense = 41, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 255, \
    .expYield = 60, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_ORAN_BERRY, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_PICKUP, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}