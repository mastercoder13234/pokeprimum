#pragma once

#define SPECIES_INFO_RAICHU \
{ \
    .baseHP        = 60, \
    .baseAttack    = 90, \
    .baseDefense   = 55, \
    .baseSpeed     = 100, \
    .baseSpAttack  = 90, \
    .baseSpDefense = 80, \
    .types = { TYPE_ELECTRIC, TYPE_ELECTRIC }, \
    .catchRate = 75, \
    .expYield = 122, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 3, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_ORAN_BERRY, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 10, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY }, \
    .abilities = {ABILITY_STATIC, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}