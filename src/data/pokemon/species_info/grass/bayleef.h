#pragma once

#define SPECIES_INFO_BAYLEEF \
{ \
    .baseHP        = 60, \
    .baseAttack    = 62, \
    .baseDefense   = 80, \
    .baseSpeed     = 60, \
    .baseSpAttack  = 63, \
    .baseSpDefense = 80, \
    .types = { TYPE_GRASS, TYPE_GRASS }, \
    .catchRate = 45, \
    .expYield = 141, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 1, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(12.5), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS }, \
    .abilities = {ABILITY_OVERGROW, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}