#pragma once

#define SPECIES_INFO_MANKEY \
{ \
    .baseHP        = 40, \
    .baseAttack    = 80, \
    .baseDefense   = 35, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 35, \
    .baseSpDefense = 45, \
    .types = { TYPE_FIGHTING, TYPE_FIGHTING }, \
    .catchRate = 190, \
    .expYield = 74, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
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
    .abilities = {ABILITY_VITAL_SPIRIT, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}