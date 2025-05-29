#pragma once

#define SPECIES_INFO_EKANS \
{ \
    .baseHP        = 35, \
    .baseAttack    = 60, \
    .baseDefense   = 44, \
    .baseSpeed     = 55, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 54, \
    .types = { TYPE_POISON, TYPE_POISON }, \
    .catchRate = 255, \
    .expYield = 62, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_DRAGON }, \
    .abilities = {ABILITY_INTIMIDATE, ABILITY_SHED_SKIN}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}