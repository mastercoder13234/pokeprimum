#pragma once

#define SPECIES_INFO_ROSELIA \
{ \
    .baseHP        = 50, \
    .baseAttack    = 60, \
    .baseDefense   = 45, \
    .baseSpeed     = 65, \
    .baseSpAttack  = 100, \
    .baseSpDefense = 80, \
    .types = { TYPE_GRASS, TYPE_POISON }, \
    .catchRate = 150, \
    .expYield = 152, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_POISON_BARB, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS }, \
    .abilities = {ABILITY_NATURAL_CURE, ABILITY_POISON_POINT}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = TRUE, \
}