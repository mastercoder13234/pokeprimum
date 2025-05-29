#pragma once

#define SPECIES_INFO_PHANPY \
{ \
    .baseHP        = 90, \
    .baseAttack    = 60, \
    .baseDefense   = 60, \
    .baseSpeed     = 40, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 40, \
    .types = { TYPE_GROUND, TYPE_GROUND }, \
    .catchRate = 120, \
    .expYield = 124, \
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
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_PICKUP, ABILITY_NONE}, \
    .safariZoneFleeRate = 10, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}