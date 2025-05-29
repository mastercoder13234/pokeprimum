#pragma once

#define SPECIES_INFO_FLAREON \
{ \
    .baseHP        = 65, \
    .baseAttack    = 130, \
    .baseDefense   = 60, \
    .baseSpeed     = 65, \
    .baseSpAttack  = 95, \
    .baseSpDefense = 110, \
    .types = { TYPE_FIRE, TYPE_FIRE }, \
    .catchRate = 45, \
    .expYield = 198, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(12.5), \
    .eggCycles = 35, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_FLASH_FIRE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}