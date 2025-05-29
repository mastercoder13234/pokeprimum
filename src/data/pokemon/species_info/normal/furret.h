#pragma once

#define SPECIES_INFO_FURRET \
{ \
    .baseHP        = 85, \
    .baseAttack    = 76, \
    .baseDefense   = 64, \
    .baseSpeed     = 90, \
    .baseSpAttack  = 45, \
    .baseSpDefense = 55, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 90, \
    .expYield = 116, \
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
    .abilities = {ABILITY_RUN_AWAY, ABILITY_KEEN_EYE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}