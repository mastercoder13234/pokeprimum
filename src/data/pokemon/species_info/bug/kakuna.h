#pragma once

#define SPECIES_INFO_KAKUNA \
{ \
    .baseHP        = 45, \
    .baseAttack    = 25, \
    .baseDefense   = 50, \
    .baseSpeed     = 35, \
    .baseSpAttack  = 25, \
    .baseSpDefense = 25, \
    .types = { TYPE_BUG, TYPE_POISON }, \
    .catchRate = 120, \
    .expYield = 71, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 2, \
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
    .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}