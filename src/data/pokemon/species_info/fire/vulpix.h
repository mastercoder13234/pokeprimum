#pragma once

#define SPECIES_INFO_VULPIX \
{ \
    .baseHP        = 38, \
    .baseAttack    = 41, \
    .baseDefense   = 40, \
    .baseSpeed     = 65, \
    .baseSpAttack  = 50, \
    .baseSpDefense = 65, \
    .types = { TYPE_FIRE, TYPE_FIRE }, \
    .catchRate = 190, \
    .expYield = 63, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_RAWST_BERRY, \
    .itemRare   = ITEM_RAWST_BERRY, \
    .genderRatio = PERCENT_FEMALE(75), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_FLASH_FIRE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}