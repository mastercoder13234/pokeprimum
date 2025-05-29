#pragma once

#define SPECIES_INFO_PINECO \
{ \
    .baseHP        = 50, \
    .baseAttack    = 65, \
    .baseDefense   = 90, \
    .baseSpeed     = 15, \
    .baseSpAttack  = 35, \
    .baseSpDefense = 35, \
    .types = { TYPE_BUG, TYPE_BUG }, \
    .catchRate = 190, \
    .expYield = 60, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_STURDY, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}