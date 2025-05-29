#pragma once

#define SPECIES_INFO_DIGLETT \
{ \
    .baseHP        = 10, \
    .baseAttack    = 55, \
    .baseDefense   = 25, \
    .baseSpeed     = 95, \
    .baseSpAttack  = 35, \
    .baseSpDefense = 45, \
    .types = { TYPE_GROUND, TYPE_GROUND }, \
    .catchRate = 255, \
    .expYield = 81, \
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
    .abilities = {ABILITY_SAND_VEIL, ABILITY_ARENA_TRAP}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}