#pragma once

#define SPECIES_INFO_FLAAFFY \
{ \
    .baseHP        = 70, \
    .baseAttack    = 55, \
    .baseDefense   = 55, \
    .baseSpeed     = 45, \
    .baseSpAttack  = 80, \
    .baseSpDefense = 60, \
    .types = { TYPE_ELECTRIC, TYPE_ELECTRIC }, \
    .catchRate = 120, \
    .expYield = 117, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 2, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_STATIC, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PINK, \
    .noFlip = FALSE, \
}