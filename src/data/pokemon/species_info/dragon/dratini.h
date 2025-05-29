#pragma once

#define SPECIES_INFO_DRATINI \
{ \
    .baseHP        = 41, \
    .baseAttack    = 64, \
    .baseDefense   = 45, \
    .baseSpeed     = 50, \
    .baseSpAttack  = 50, \
    .baseSpDefense = 50, \
    .types = { TYPE_DRAGON, TYPE_DRAGON }, \
    .catchRate = 45, \
    .expYield = 67, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_DRAGON_SCALE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 40, \
    .friendship = 35, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON }, \
    .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}