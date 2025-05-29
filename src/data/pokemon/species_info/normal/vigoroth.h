#pragma once

#define SPECIES_INFO_VIGOROTH \
{ \
    .baseHP        = 80, \
    .baseAttack    = 80, \
    .baseDefense   = 80, \
    .baseSpeed     = 90, \
    .baseSpAttack  = 55, \
    .baseSpDefense = 55, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 120, \
    .expYield = 126, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 2, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_VITAL_SPIRIT, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_WHITE, \
    .noFlip = FALSE, \
}