#pragma once

#define SPECIES_INFO_DEWGONG \
{ \
    .baseHP        = 90, \
    .baseAttack    = 70, \
    .baseDefense   = 80, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 70, \
    .baseSpDefense = 95, \
    .types = { TYPE_WATER, TYPE_ICE }, \
    .catchRate = 75, \
    .expYield = 176, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 2, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_THICK_FAT, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_WHITE, \
    .noFlip = FALSE, \
}