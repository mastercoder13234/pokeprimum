#pragma once

#define SPECIES_INFO_QUAGSIRE \
{ \
    .baseHP        = 95, \
    .baseAttack    = 85, \
    .baseDefense   = 85, \
    .baseSpeed     = 35, \
    .baseSpAttack  = 65, \
    .baseSpDefense = 65, \
    .types = { TYPE_WATER, TYPE_GROUND }, \
    .catchRate = 90, \
    .expYield = 137, \
    .evYield_HP        = 2, \
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