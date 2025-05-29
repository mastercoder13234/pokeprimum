#pragma once

#define SPECIES_INFO_LINOONE \
{ \
    .baseHP        = 78, \
    .baseAttack    = 70, \
    .baseDefense   = 61, \
    .baseSpeed     = 100, \
    .baseSpAttack  = 50, \
    .baseSpDefense = 61, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 90, \
    .expYield = 128, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 2, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_ORAN_BERRY, \
    .itemRare   = ITEM_SITRUS_BERRY, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_PICKUP, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_WHITE, \
    .noFlip = FALSE, \
}