#pragma once

#define SPECIES_INFO_GROWLITHE \
{ \
    .baseHP        = 55, \
    .baseAttack    = 70, \
    .baseDefense   = 45, \
    .baseSpeed     = 60, \
    .baseSpAttack  = 70, \
    .baseSpDefense = 50, \
    .types = { TYPE_FIRE, TYPE_FIRE }, \
    .catchRate = 190, \
    .expYield = 91, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
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