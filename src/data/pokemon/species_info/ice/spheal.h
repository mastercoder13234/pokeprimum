#pragma once

#define SPECIES_INFO_SPHEAL \
{ \
    .baseHP        = 70, \
    .baseAttack    = 40, \
    .baseDefense   = 50, \
    .baseSpeed     = 25, \
    .baseSpAttack  = 55, \
    .baseSpDefense = 50, \
    .types = { TYPE_ICE, TYPE_WATER }, \
    .catchRate = 255, \
    .expYield = 75, \
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
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_THICK_FAT, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}