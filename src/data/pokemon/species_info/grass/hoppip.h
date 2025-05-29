#pragma once

#define SPECIES_INFO_HOPPIP \
{ \
    .baseHP        = 35, \
    .baseAttack    = 35, \
    .baseDefense   = 40, \
    .baseSpeed     = 50, \
    .baseSpAttack  = 35, \
    .baseSpDefense = 55, \
    .types = { TYPE_GRASS, TYPE_FLYING }, \
    .catchRate = 255, \
    .expYield = 74, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 1, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS }, \
    .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PINK, \
    .noFlip = FALSE, \
}