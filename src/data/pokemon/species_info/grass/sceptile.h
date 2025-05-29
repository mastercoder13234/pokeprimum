#pragma once

#define SPECIES_INFO_SCEPTILE \
{ \
    .baseHP        = 70, \
    .baseAttack    = 85, \
    .baseDefense   = 65, \
    .baseSpeed     = 120, \
    .baseSpAttack  = 105, \
    .baseSpDefense = 85, \
    .types = { TYPE_GRASS, TYPE_GRASS }, \
    .catchRate = 45, \
    .expYield = 208, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 3, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(12.5), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON }, \
    .abilities = {ABILITY_OVERGROW, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}