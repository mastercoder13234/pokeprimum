#pragma once

#define SPECIES_INFO_CLEFAIRY \
{ \
    .baseHP        = 70, \
    .baseAttack    = 45, \
    .baseDefense   = 48, \
    .baseSpeed     = 35, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 65, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 150, \
    .expYield = 68, \
    .evYield_HP        = 2, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_LEPPA_BERRY, \
    .itemRare   = ITEM_MOON_STONE, \
    .genderRatio = PERCENT_FEMALE(75), \
    .eggCycles = 10, \
    .friendship = 140, \
    .growthRate = GROWTH_FAST, \
    .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY }, \
    .abilities = {ABILITY_CUTE_CHARM, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PINK, \
    .noFlip = FALSE, \
}