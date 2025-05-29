#pragma once

#define SPECIES_INFO_NINETALES \
{ \
    .baseHP        = 73, \
    .baseAttack    = 76, \
    .baseDefense   = 75, \
    .baseSpeed     = 100, \
    .baseSpAttack  = 81, \
    .baseSpDefense = 100, \
    .types = { TYPE_FIRE, TYPE_FIRE }, \
    .catchRate = 75, \
    .expYield = 178, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 1, \
    .itemCommon = ITEM_RAWST_BERRY, \
    .itemRare   = ITEM_RAWST_BERRY, \
    .genderRatio = PERCENT_FEMALE(75), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_FLASH_FIRE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}