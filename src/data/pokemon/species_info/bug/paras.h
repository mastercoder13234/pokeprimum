#pragma once

#define SPECIES_INFO_PARAS \
{ \
    .baseHP        = 35, \
    .baseAttack    = 70, \
    .baseDefense   = 55, \
    .baseSpeed     = 25, \
    .baseSpAttack  = 45, \
    .baseSpDefense = 55, \
    .types = { TYPE_BUG, TYPE_GRASS }, \
    .catchRate = 190, \
    .expYield = 70, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_TINY_MUSHROOM, \
    .itemRare   = ITEM_BIG_MUSHROOM, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_GRASS }, \
    .abilities = {ABILITY_EFFECT_SPORE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}