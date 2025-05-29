#pragma once

#define SPECIES_INFO_LANTURN \
{ \
    .baseHP        = 125, \
    .baseAttack    = 58, \
    .baseDefense   = 58, \
    .baseSpeed     = 67, \
    .baseSpAttack  = 76, \
    .baseSpDefense = 76, \
    .types = { TYPE_WATER, TYPE_ELECTRIC }, \
    .catchRate = 75, \
    .expYield = 156, \
    .evYield_HP        = 2, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_YELLOW_SHARD, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 }, \
    .abilities = {ABILITY_VOLT_ABSORB, ABILITY_ILLUMINATE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}