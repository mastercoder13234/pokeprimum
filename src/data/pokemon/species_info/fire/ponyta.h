#pragma once

#define SPECIES_INFO_PONYTA \
{ \
    .baseHP        = 50, \
    .baseAttack    = 85, \
    .baseDefense   = 55, \
    .baseSpeed     = 90, \
    .baseSpAttack  = 65, \
    .baseSpDefense = 65, \
    .types = { TYPE_FIRE, TYPE_FIRE }, \
    .catchRate = 190, \
    .expYield = 152, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_RUN_AWAY, ABILITY_FLASH_FIRE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}