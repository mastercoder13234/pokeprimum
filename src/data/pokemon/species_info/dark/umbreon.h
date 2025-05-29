#pragma once

#define SPECIES_INFO_UMBREON \
{ \
    .baseHP        = 95, \
    .baseAttack    = 65, \
    .baseDefense   = 110, \
    .baseSpeed     = 65, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 130, \
    .types = { TYPE_DARK, TYPE_DARK }, \
    .catchRate = 45, \
    .expYield = 197, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 2, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(12.5), \
    .eggCycles = 35, \
    .friendship = 35, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_SYNCHRONIZE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLACK, \
    .noFlip = FALSE, \
}