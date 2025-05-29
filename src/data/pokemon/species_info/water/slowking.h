#pragma once

#define SPECIES_INFO_SLOWKING \
{ \
    .baseHP        = 95, \
    .baseAttack    = 75, \
    .baseDefense   = 80, \
    .baseSpeed     = 30, \
    .baseSpAttack  = 100, \
    .baseSpDefense = 110, \
    .types = { TYPE_WATER, TYPE_PSYCHIC }, \
    .catchRate = 70, \
    .expYield = 164, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 3, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_KINGS_ROCK, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 }, \
    .abilities = {ABILITY_OBLIVIOUS, ABILITY_OWN_TEMPO}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PINK, \
    .noFlip = FALSE, \
}