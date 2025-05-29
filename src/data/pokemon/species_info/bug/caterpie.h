#pragma once

#define SPECIES_INFO_CATERPIE \
{ \
    .baseHP        = 45, \
    .baseAttack    = 30, \
    .baseDefense   = 35, \
    .baseSpeed     = 45, \
    .baseSpAttack  = 20, \
    .baseSpDefense = 20, \
    .types = { TYPE_BUG, TYPE_BUG }, \
    .catchRate = 255, \
    .expYield = 53, \
    .evYield_HP        = 1, \
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
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_SHIELD_DUST, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}