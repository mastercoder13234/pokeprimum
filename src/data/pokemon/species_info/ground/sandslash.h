#pragma once

#define SPECIES_INFO_SANDSLASH \
{ \
    .baseHP        = 75, \
    .baseAttack    = 100, \
    .baseDefense   = 110, \
    .baseSpeed     = 65, \
    .baseSpAttack  = 45, \
    .baseSpDefense = 55, \
    .types = { TYPE_GROUND, TYPE_GROUND }, \
    .catchRate = 90, \
    .expYield = 163, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 2, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_QUICK_CLAW, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_SAND_VEIL, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}