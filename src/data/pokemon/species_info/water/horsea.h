#pragma once

#define SPECIES_INFO_HORSEA \
{ \
    .baseHP        = 30, \
    .baseAttack    = 40, \
    .baseDefense   = 70, \
    .baseSpeed     = 60, \
    .baseSpAttack  = 70, \
    .baseSpDefense = 25, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 225, \
    .expYield = 83, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_DRAGON_SCALE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON }, \
    .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}