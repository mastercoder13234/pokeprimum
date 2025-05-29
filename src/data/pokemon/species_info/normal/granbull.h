#pragma once

#define SPECIES_INFO_GRANBULL \
{ \
    .baseHP        = 90, \
    .baseAttack    = 120, \
    .baseDefense   = 75, \
    .baseSpeed     = 45, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 60, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 75, \
    .expYield = 178, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(75), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY }, \
    .abilities = {ABILITY_INTIMIDATE, ABILITY_INTIMIDATE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}