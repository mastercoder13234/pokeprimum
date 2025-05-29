#pragma once

#define SPECIES_INFO_SPEAROW \
{ \
    .baseHP        = 40, \
    .baseAttack    = 60, \
    .baseDefense   = 30, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 31, \
    .baseSpDefense = 31, \
    .types = { TYPE_NORMAL, TYPE_FLYING }, \
    .catchRate = 255, \
    .expYield = 58, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING }, \
    .abilities = {ABILITY_KEEN_EYE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}