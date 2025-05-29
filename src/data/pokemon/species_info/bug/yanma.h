#pragma once

#define SPECIES_INFO_YANMA \
{ \
    .baseHP        = 65, \
    .baseAttack    = 65, \
    .baseDefense   = 45, \
    .baseSpeed     = 95, \
    .baseSpAttack  = 75, \
    .baseSpDefense = 45, \
    .types = { TYPE_BUG, TYPE_FLYING }, \
    .catchRate = 75, \
    .expYield = 147, \
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
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_SPEED_BOOST, ABILITY_COMPOUND_EYES}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}