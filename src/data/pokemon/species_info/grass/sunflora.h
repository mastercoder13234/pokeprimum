#pragma once

#define SPECIES_INFO_SUNFLORA \
{ \
    .baseHP        = 75, \
    .baseAttack    = 75, \
    .baseDefense   = 55, \
    .baseSpeed     = 30, \
    .baseSpAttack  = 105, \
    .baseSpDefense = 85, \
    .types = { TYPE_GRASS, TYPE_GRASS }, \
    .catchRate = 120, \
    .expYield = 146, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 2, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS }, \
    .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}