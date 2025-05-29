#pragma once

#define SPECIES_INFO_PERSIAN \
{ \
    .baseHP        = 65, \
    .baseAttack    = 70, \
    .baseDefense   = 60, \
    .baseSpeed     = 115, \
    .baseSpAttack  = 65, \
    .baseSpDefense = 65, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 90, \
    .expYield = 148, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 2, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_LIMBER, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}