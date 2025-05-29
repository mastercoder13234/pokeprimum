#pragma once

#define SPECIES_INFO_HUNTAIL \
{ \
    .baseHP        = 55, \
    .baseAttack    = 104, \
    .baseDefense   = 105, \
    .baseSpeed     = 52, \
    .baseSpAttack  = 94, \
    .baseSpDefense = 75, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 60, \
    .expYield = 178, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_ERRATIC, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1 }, \
    .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}