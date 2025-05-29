#pragma once

#define SPECIES_INFO_CROBAT \
{ \
    .baseHP        = 85, \
    .baseAttack    = 90, \
    .baseDefense   = 80, \
    .baseSpeed     = 130, \
    .baseSpAttack  = 70, \
    .baseSpDefense = 80, \
    .types = { TYPE_POISON, TYPE_FLYING }, \
    .catchRate = 90, \
    .expYield = 204, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 3, \
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