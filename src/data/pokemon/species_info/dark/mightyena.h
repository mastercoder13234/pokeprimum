#pragma once

#define SPECIES_INFO_MIGHTYENA \
{ \
    .baseHP        = 70, \
    .baseAttack    = 90, \
    .baseDefense   = 70, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 60, \
    .types = { TYPE_DARK, TYPE_DARK }, \
    .catchRate = 127, \
    .expYield = 128, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_PECHA_BERRY, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_INTIMIDATE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}