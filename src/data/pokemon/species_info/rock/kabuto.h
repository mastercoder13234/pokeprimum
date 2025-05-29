#pragma once

#define SPECIES_INFO_KABUTO \
{ \
    .baseHP        = 30, \
    .baseAttack    = 80, \
    .baseDefense   = 90, \
    .baseSpeed     = 55, \
    .baseSpAttack  = 55, \
    .baseSpDefense = 45, \
    .types = { TYPE_ROCK, TYPE_WATER }, \
    .catchRate = 45, \
    .expYield = 119, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
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
    .abilities = {ABILITY_SWIFT_SWIM, ABILITY_BATTLE_ARMOR}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}