#pragma once

#define SPECIES_INFO_PORYGON2 \
{ \
    .baseHP        = 85, \
    .baseAttack    = 80, \
    .baseDefense   = 90, \
    .baseSpeed     = 60, \
    .baseSpAttack  = 105, \
    .baseSpDefense = 95, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 45, \
    .expYield = 180, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 2, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL }, \
    .abilities = {ABILITY_TRACE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}