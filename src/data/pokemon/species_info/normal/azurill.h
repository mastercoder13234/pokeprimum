#pragma once

#define SPECIES_INFO_AZURILL \
{ \
    .baseHP        = 50, \
    .baseAttack    = 20, \
    .baseDefense   = 40, \
    .baseSpeed     = 20, \
    .baseSpAttack  = 20, \
    .baseSpDefense = 40, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 150, \
    .expYield = 33, \
    .evYield_HP        = 1, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(75), \
    .eggCycles = 10, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FAST, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_THICK_FAT, ABILITY_HUGE_POWER}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}