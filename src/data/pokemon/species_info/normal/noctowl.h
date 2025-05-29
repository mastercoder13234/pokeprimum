#pragma once

#define SPECIES_INFO_NOCTOWL \
{ \
    .baseHP        = 100, \
    .baseAttack    = 50, \
    .baseDefense   = 50, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 76, \
    .baseSpDefense = 96, \
    .types = { TYPE_NORMAL, TYPE_FLYING }, \
    .catchRate = 90, \
    .expYield = 162, \
    .evYield_HP        = 2, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING }, \
    .abilities = {ABILITY_INSOMNIA, ABILITY_KEEN_EYE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}