#pragma once

#define SPECIES_INFO_WIGGLYTUFF \
{ \
    .baseHP        = 140, \
    .baseAttack    = 70, \
    .baseDefense   = 45, \
    .baseSpeed     = 45, \
    .baseSpAttack  = 75, \
    .baseSpDefense = 50, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 50, \
    .expYield = 109, \
    .evYield_HP        = 3, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(75), \
    .eggCycles = 10, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FAST, \
    .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY }, \
    .abilities = {ABILITY_CUTE_CHARM, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PINK, \
    .noFlip = FALSE, \
}