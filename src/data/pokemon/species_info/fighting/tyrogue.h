#pragma once

#define SPECIES_INFO_TYROGUE \
{ \
    .baseHP        = 35, \
    .baseAttack    = 35, \
    .baseDefense   = 35, \
    .baseSpeed     = 35, \
    .baseSpAttack  = 35, \
    .baseSpDefense = 35, \
    .types = { TYPE_FIGHTING, TYPE_FIGHTING }, \
    .catchRate = 75, \
    .expYield = 91, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_MALE, \
    .eggCycles = 25, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_GUTS, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}