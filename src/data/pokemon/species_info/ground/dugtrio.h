#pragma once

#define SPECIES_INFO_DUGTRIO \
{ \
    .baseHP        = 35, \
    .baseAttack    = 80, \
    .baseDefense   = 50, \
    .baseSpeed     = 120, \
    .baseSpAttack  = 50, \
    .baseSpDefense = 70, \
    .types = { TYPE_GROUND, TYPE_GROUND }, \
    .catchRate = 50, \
    .expYield = 153, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 2, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_SAND_VEIL, ABILITY_ARENA_TRAP}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}