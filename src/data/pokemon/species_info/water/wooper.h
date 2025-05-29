#pragma once

#define SPECIES_INFO_WOOPER \
{ \
    .baseHP        = 55, \
    .baseAttack    = 45, \
    .baseDefense   = 45, \
    .baseSpeed     = 15, \
    .baseSpAttack  = 25, \
    .baseSpDefense = 25, \
    .types = { TYPE_WATER, TYPE_GROUND }, \
    .catchRate = 255, \
    .expYield = 52, \
    .evYield_HP        = 1, \
    .evYield_Attack    = 0, \
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
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_DAMP, ABILITY_WATER_ABSORB}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}