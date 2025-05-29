#pragma once

#define SPECIES_INFO_MAWILE \
{ \
    .baseHP        = 50, \
    .baseAttack    = 85, \
    .baseDefense   = 85, \
    .baseSpeed     = 50, \
    .baseSpAttack  = 55, \
    .baseSpDefense = 55, \
    .types = { TYPE_STEEL, TYPE_STEEL }, \
    .catchRate = 45, \
    .expYield = 98, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY }, \
    .abilities = {ABILITY_HYPER_CUTTER, ABILITY_INTIMIDATE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLACK, \
    .noFlip = FALSE, \
}