#pragma once

#define SPECIES_INFO_RATICATE \
{ \
    .baseHP        = 55, \
    .baseAttack    = 81, \
    .baseDefense   = 60, \
    .baseSpeed     = 97, \
    .baseSpAttack  = 50, \
    .baseSpDefense = 70, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 127, \
    .expYield = 116, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 2, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_RUN_AWAY, ABILITY_GUTS}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}