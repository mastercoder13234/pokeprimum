#pragma once

#define SPECIES_INFO_POOCHYENA \
{ \
    .baseHP        = 35, \
    .baseAttack    = 55, \
    .baseDefense   = 35, \
    .baseSpeed     = 35, \
    .baseSpAttack  = 30, \
    .baseSpDefense = 30, \
    .types = { TYPE_DARK, TYPE_DARK }, \
    .catchRate = 255, \
    .expYield = 55, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_PECHA_BERRY, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_RUN_AWAY, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}