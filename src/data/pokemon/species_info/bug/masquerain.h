#pragma once

#define SPECIES_INFO_MASQUERAIN \
{ \
    .baseHP        = 70, \
    .baseAttack    = 60, \
    .baseDefense   = 62, \
    .baseSpeed     = 60, \
    .baseSpAttack  = 80, \
    .baseSpDefense = 82, \
    .types = { TYPE_BUG, TYPE_FLYING }, \
    .catchRate = 75, \
    .expYield = 128, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 1, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_SILVER_POWDER, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_INTIMIDATE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}