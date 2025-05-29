#pragma once

#define SPECIES_INFO_JUMPLUFF \
{ \
    .baseHP        = 75, \
    .baseAttack    = 55, \
    .baseDefense   = 70, \
    .baseSpeed     = 110, \
    .baseSpAttack  = 55, \
    .baseSpDefense = 85, \
    .types = { TYPE_GRASS, TYPE_FLYING }, \
    .catchRate = 45, \
    .expYield = 176, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 3, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS }, \
    .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}