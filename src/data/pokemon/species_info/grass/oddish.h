#pragma once

#define SPECIES_INFO_ODDISH \
{ \
    .baseHP        = 45, \
    .baseAttack    = 50, \
    .baseDefense   = 55, \
    .baseSpeed     = 30, \
    .baseSpAttack  = 75, \
    .baseSpDefense = 65, \
    .types = { TYPE_GRASS, TYPE_POISON }, \
    .catchRate = 255, \
    .expYield = 78, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS }, \
    .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE}, \
    .safariZoneFleeRate = 4, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}