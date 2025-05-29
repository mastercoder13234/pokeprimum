#pragma once

#define SPECIES_INFO_ARCANINE \
{ \
    .baseHP        = 90, \
    .baseAttack    = 110, \
    .baseDefense   = 80, \
    .baseSpeed     = 95, \
    .baseSpAttack  = 100, \
    .baseSpDefense = 80, \
    .types = { TYPE_FIRE, TYPE_FIRE }, \
    .catchRate = 75, \
    .expYield = 213, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_RAWST_BERRY, \
    .itemRare   = ITEM_RAWST_BERRY, \
    .genderRatio = PERCENT_FEMALE(25), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}