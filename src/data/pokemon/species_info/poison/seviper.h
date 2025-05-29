#pragma once

#define SPECIES_INFO_SEVIPER \
{ \
    .baseHP        = 73, \
    .baseAttack    = 100, \
    .baseDefense   = 60, \
    .baseSpeed     = 65, \
    .baseSpAttack  = 100, \
    .baseSpDefense = 60, \
    .types = { TYPE_POISON, TYPE_POISON }, \
    .catchRate = 90, \
    .expYield = 165, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FLUCTUATING, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_DRAGON }, \
    .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLACK, \
    .noFlip = TRUE, \
}