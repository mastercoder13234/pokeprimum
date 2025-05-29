#pragma once

#define SPECIES_INFO_CACNEA \
{ \
    .baseHP        = 50, \
    .baseAttack    = 85, \
    .baseDefense   = 40, \
    .baseSpeed     = 35, \
    .baseSpAttack  = 85, \
    .baseSpDefense = 40, \
    .types = { TYPE_GRASS, TYPE_GRASS }, \
    .catchRate = 190, \
    .expYield = 97, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
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