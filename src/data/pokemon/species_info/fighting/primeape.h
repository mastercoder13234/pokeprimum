#pragma once

#define SPECIES_INFO_PRIMEAPE \
{ \
    .baseHP        = 65, \
    .baseAttack    = 105, \
    .baseDefense   = 60, \
    .baseSpeed     = 95, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 70, \
    .types = { TYPE_FIGHTING, TYPE_FIGHTING }, \
    .catchRate = 75, \
    .expYield = 149, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
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