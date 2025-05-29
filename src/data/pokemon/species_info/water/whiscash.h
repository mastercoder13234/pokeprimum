#pragma once

#define SPECIES_INFO_WHISCASH \
{ \
    .baseHP        = 110, \
    .baseAttack    = 78, \
    .baseDefense   = 73, \
    .baseSpeed     = 60, \
    .baseSpAttack  = 76, \
    .baseSpDefense = 71, \
    .types = { TYPE_WATER, TYPE_GROUND }, \
    .catchRate = 75, \
    .expYield = 158, \
    .evYield_HP        = 2, \
    .evYield_Attack    = 0, \
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
    .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 }, \
    .abilities = {ABILITY_OBLIVIOUS, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}