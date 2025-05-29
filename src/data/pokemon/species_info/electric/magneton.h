#pragma once

#define SPECIES_INFO_MAGNETON \
{ \
    .baseHP        = 50, \
    .baseAttack    = 60, \
    .baseDefense   = 95, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 120, \
    .baseSpDefense = 70, \
    .types = { TYPE_ELECTRIC, TYPE_STEEL }, \
    .catchRate = 60, \
    .expYield = 161, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 2, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_METAL_COAT, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL }, \
    .abilities = {ABILITY_MAGNET_PULL, ABILITY_STURDY}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}