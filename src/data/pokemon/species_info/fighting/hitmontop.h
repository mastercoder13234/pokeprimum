#pragma once

#define SPECIES_INFO_HITMONTOP \
{ \
    .baseHP        = 50, \
    .baseAttack    = 95, \
    .baseDefense   = 95, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 35, \
    .baseSpDefense = 110, \
    .types = { TYPE_FIGHTING, TYPE_FIGHTING }, \
    .catchRate = 45, \
    .expYield = 138, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 2, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_MALE, \
    .eggCycles = 25, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE }, \
    .abilities = {ABILITY_INTIMIDATE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}