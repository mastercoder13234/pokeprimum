#pragma once

#define SPECIES_INFO_NINJASK \
{ \
    .baseHP        = 61, \
    .baseAttack    = 90, \
    .baseDefense   = 45, \
    .baseSpeed     = 160, \
    .baseSpAttack  = 50, \
    .baseSpDefense = 50, \
    .types = { TYPE_BUG, TYPE_FLYING }, \
    .catchRate = 120, \
    .expYield = 155, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 2, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_ERRATIC, \
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_SPEED_BOOST, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}