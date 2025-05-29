#pragma once

#define SPECIES_INFO_BALTOY \
{ \
    .baseHP        = 40, \
    .baseAttack    = 40, \
    .baseDefense   = 55, \
    .baseSpeed     = 55, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 70, \
    .types = { TYPE_GROUND, TYPE_PSYCHIC }, \
    .catchRate = 255, \
    .expYield = 58, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 1, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL }, \
    .abilities = {ABILITY_LEVITATE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}