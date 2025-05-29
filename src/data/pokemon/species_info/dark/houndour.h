#pragma once

#define SPECIES_INFO_HOUNDOUR \
{ \
    .baseHP        = 45, \
    .baseAttack    = 60, \
    .baseDefense   = 30, \
    .baseSpeed     = 65, \
    .baseSpAttack  = 80, \
    .baseSpDefense = 50, \
    .types = { TYPE_DARK, TYPE_FIRE }, \
    .catchRate = 120, \
    .expYield = 114, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = 35, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_EARLY_BIRD, ABILITY_FLASH_FIRE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLACK, \
    .noFlip = FALSE, \
}