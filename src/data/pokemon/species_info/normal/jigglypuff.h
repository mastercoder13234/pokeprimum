#pragma once

#define SPECIES_INFO_JIGGLYPUFF \
{ \
    .baseHP        = 115, \
    .baseAttack    = 45, \
    .baseDefense   = 20, \
    .baseSpeed     = 20, \
    .baseSpAttack  = 45, \
    .baseSpDefense = 25, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 170, \
    .expYield = 76, \
    .evYield_HP        = 2, \
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