#pragma once

#define SPECIES_INFO_ESPEON \
{ \
    .baseHP        = 65, \
    .baseAttack    = 65, \
    .baseDefense   = 60, \
    .baseSpeed     = 110, \
    .baseSpAttack  = 130, \
    .baseSpDefense = 95, \
    .types = { TYPE_PSYCHIC, TYPE_PSYCHIC }, \
    .catchRate = 45, \
    .expYield = 197, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 2, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(12.5), \
    .eggCycles = 35, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_SYNCHRONIZE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}