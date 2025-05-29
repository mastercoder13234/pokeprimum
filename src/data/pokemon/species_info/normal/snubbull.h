#pragma once

#define SPECIES_INFO_SNUBBULL \
{ \
    .baseHP        = 60, \
    .baseAttack    = 80, \
    .baseDefense   = 50, \
    .baseSpeed     = 30, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 40, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 190, \
    .expYield = 63, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
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
    .abilities = {ABILITY_INTIMIDATE, ABILITY_RUN_AWAY}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PINK, \
    .noFlip = FALSE, \
}