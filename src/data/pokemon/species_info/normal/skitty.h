#pragma once

#define SPECIES_INFO_SKITTY \
{ \
    .baseHP        = 50, \
    .baseAttack    = 45, \
    .baseDefense   = 45, \
    .baseSpeed     = 50, \
    .baseSpAttack  = 35, \
    .baseSpDefense = 35, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 255, \
    .expYield = 65, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_LEPPA_BERRY, \
    .genderRatio = PERCENT_FEMALE(75), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY }, \
    .abilities = {ABILITY_CUTE_CHARM, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PINK, \
    .noFlip = FALSE, \
}