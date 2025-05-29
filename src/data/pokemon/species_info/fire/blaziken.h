#pragma once

#define SPECIES_INFO_BLAZIKEN \
{ \
    .baseHP        = 80, \
    .baseAttack    = 120, \
    .baseDefense   = 70, \
    .baseSpeed     = 80, \
    .baseSpAttack  = 110, \
    .baseSpDefense = 70, \
    .types = { TYPE_FIRE, TYPE_FIGHTING }, \
    .catchRate = 45, \
    .expYield = 209, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 3, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
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