#pragma once

#define SPECIES_INFO_MARILL \
{ \
    .baseHP        = 70, \
    .baseAttack    = 20, \
    .baseDefense   = 50, \
    .baseSpeed     = 40, \
    .baseSpAttack  = 20, \
    .baseSpDefense = 50, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 190, \
    .expYield = 58, \
    .evYield_HP        = 2, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 10, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FAST, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FAIRY }, \
    .abilities = {ABILITY_THICK_FAT, ABILITY_HUGE_POWER}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}