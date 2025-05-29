#pragma once

#define SPECIES_INFO_FEAROW \
{ \
    .baseHP        = 65, \
    .baseAttack    = 90, \
    .baseDefense   = 65, \
    .baseSpeed     = 100, \
    .baseSpAttack  = 61, \
    .baseSpDefense = 61, \
    .types = { TYPE_NORMAL, TYPE_FLYING }, \
    .catchRate = 90, \
    .expYield = 162, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 2, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_SHARP_BEAK, \
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