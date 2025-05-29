#pragma once

#define SPECIES_INFO_DRAGONAIR \
{ \
    .baseHP        = 61, \
    .baseAttack    = 84, \
    .baseDefense   = 65, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 70, \
    .baseSpDefense = 70, \
    .types = { TYPE_DRAGON, TYPE_DRAGON }, \
    .catchRate = 45, \
    .expYield = 144, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
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