#pragma once

#define SPECIES_INFO_CACTURNE \
{ \
    .baseHP        = 70, \
    .baseAttack    = 115, \
    .baseDefense   = 60, \
    .baseSpeed     = 55, \
    .baseSpAttack  = 115, \
    .baseSpDefense = 60, \
    .types = { TYPE_GRASS, TYPE_DARK }, \
    .catchRate = 60, \
    .expYield = 177, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_POISON_BARB, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = 35, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_HUMAN_LIKE }, \
    .abilities = {ABILITY_SAND_VEIL, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}