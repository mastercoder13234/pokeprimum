#pragma once

#define SPECIES_INFO_EXEGGCUTE \
{ \
    .baseHP        = 60, \
    .baseAttack    = 40, \
    .baseDefense   = 80, \
    .baseSpeed     = 40, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 45, \
    .types = { TYPE_GRASS, TYPE_PSYCHIC }, \
    .catchRate = 90, \
    .expYield = 98, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS }, \
    .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PINK, \
    .noFlip = FALSE, \
}