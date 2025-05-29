#pragma once

#define SPECIES_INFO_KINGDRA \
{ \
    .baseHP        = 75, \
    .baseAttack    = 95, \
    .baseDefense   = 95, \
    .baseSpeed     = 85, \
    .baseSpAttack  = 95, \
    .baseSpDefense = 95, \
    .types = { TYPE_WATER, TYPE_DRAGON }, \
    .catchRate = 45, \
    .expYield = 207, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 1, \
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