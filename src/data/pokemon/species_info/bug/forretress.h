#pragma once

#define SPECIES_INFO_FORRETRESS \
{ \
    .baseHP        = 75, \
    .baseAttack    = 90, \
    .baseDefense   = 140, \
    .baseSpeed     = 40, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 60, \
    .types = { TYPE_BUG, TYPE_STEEL }, \
    .catchRate = 75, \
    .expYield = 118, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 2, \
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
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}