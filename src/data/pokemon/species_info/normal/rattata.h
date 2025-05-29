#pragma once

#define SPECIES_INFO_RATTATA \
{ \
    .baseHP        = 30, \
    .baseAttack    = 56, \
    .baseDefense   = 35, \
    .baseSpeed     = 72, \
    .baseSpAttack  = 25, \
    .baseSpDefense = 35, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 255, \
    .expYield = 57, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_RUN_AWAY, ABILITY_GUTS}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}