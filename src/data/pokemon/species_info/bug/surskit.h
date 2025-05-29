#pragma once

#define SPECIES_INFO_SURSKIT \
{ \
    .baseHP        = 40, \
    .baseAttack    = 30, \
    .baseDefense   = 32, \
    .baseSpeed     = 65, \
    .baseSpAttack  = 50, \
    .baseSpDefense = 52, \
    .types = { TYPE_BUG, TYPE_WATER }, \
    .catchRate = 200, \
    .expYield = 63, \
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
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}