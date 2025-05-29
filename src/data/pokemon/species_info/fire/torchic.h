#pragma once

#define SPECIES_INFO_TORCHIC \
{ \
    .baseHP        = 45, \
    .baseAttack    = 60, \
    .baseDefense   = 40, \
    .baseSpeed     = 45, \
    .baseSpAttack  = 70, \
    .baseSpDefense = 50, \
    .types = { TYPE_FIRE, TYPE_FIRE }, \
    .catchRate = 45, \
    .expYield = 65, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(12.5), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_BLAZE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}