#pragma once

#define SPECIES_INFO_SHEDINJA \
{ \
    .baseHP        = 1, \
    .baseAttack    = 90, \
    .baseDefense   = 45, \
    .baseSpeed     = 40, \
    .baseSpAttack  = 30, \
    .baseSpDefense = 30, \
    .types = { TYPE_BUG, TYPE_GHOST }, \
    .catchRate = 45, \
    .expYield = 95, \
    .evYield_HP        = 2, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_ERRATIC, \
    .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL }, \
    .abilities = {ABILITY_WONDER_GUARD, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}