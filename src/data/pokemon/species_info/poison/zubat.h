#pragma once

#define SPECIES_INFO_ZUBAT \
{ \
    .baseHP        = 40, \
    .baseAttack    = 45, \
    .baseDefense   = 35, \
    .baseSpeed     = 55, \
    .baseSpAttack  = 30, \
    .baseSpDefense = 40, \
    .types = { TYPE_POISON, TYPE_FLYING }, \
    .catchRate = 255, \
    .expYield = 54, \
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
    .abilities = {ABILITY_INNER_FOCUS, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}