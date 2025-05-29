#pragma once

#define SPECIES_INFO_OMASTAR \
{ \
    .baseHP        = 70, \
    .baseAttack    = 60, \
    .baseDefense   = 125, \
    .baseSpeed     = 55, \
    .baseSpAttack  = 115, \
    .baseSpDefense = 70, \
    .types = { TYPE_ROCK, TYPE_WATER }, \
    .catchRate = 45, \
    .expYield = 199, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 2, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(12.5), \
    .eggCycles = 30, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3 }, \
    .abilities = {ABILITY_SWIFT_SWIM, ABILITY_SHELL_ARMOR}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}