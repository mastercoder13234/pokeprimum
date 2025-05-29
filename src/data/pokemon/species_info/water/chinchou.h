#pragma once

#define SPECIES_INFO_CHINCHOU \
{ \
    .baseHP        = 75, \
    .baseAttack    = 38, \
    .baseDefense   = 38, \
    .baseSpeed     = 67, \
    .baseSpAttack  = 56, \
    .baseSpDefense = 56, \
    .types = { TYPE_WATER, TYPE_ELECTRIC }, \
    .catchRate = 190, \
    .expYield = 90, \
    .evYield_HP        = 1, \
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