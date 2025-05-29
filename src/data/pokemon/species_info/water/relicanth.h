#pragma once

#define SPECIES_INFO_RELICANTH \
{ \
    .baseHP        = 100, \
    .baseAttack    = 90, \
    .baseDefense   = 130, \
    .baseSpeed     = 55, \
    .baseSpAttack  = 45, \
    .baseSpDefense = 65, \
    .types = { TYPE_WATER, TYPE_ROCK }, \
    .catchRate = 25, \
    .expYield = 198, \
    .evYield_HP        = 1, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_GREEN_SHARD, \
    .genderRatio = PERCENT_FEMALE(12.5), \
    .eggCycles = 40, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_2 }, \
    .abilities = {ABILITY_SWIFT_SWIM, ABILITY_ROCK_HEAD}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}