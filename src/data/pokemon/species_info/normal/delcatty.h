#pragma once

#define SPECIES_INFO_DELCATTY \
{ \
    .baseHP        = 70, \
    .baseAttack    = 65, \
    .baseDefense   = 65, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 55, \
    .baseSpDefense = 55, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 60, \
    .expYield = 138, \
    .evYield_HP        = 1, \
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
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}