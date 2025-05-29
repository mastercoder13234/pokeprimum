#pragma once

#define SPECIES_INFO_CLAYDOL \
{ \
    .baseHP        = 60, \
    .baseAttack    = 70, \
    .baseDefense   = 105, \
    .baseSpeed     = 75, \
    .baseSpAttack  = 70, \
    .baseSpDefense = 120, \
    .types = { TYPE_GROUND, TYPE_PSYCHIC }, \
    .catchRate = 90, \
    .expYield = 189, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 2, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL }, \
    .abilities = {ABILITY_LEVITATE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLACK, \
    .noFlip = FALSE, \
}