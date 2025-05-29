#pragma once

#define SPECIES_INFO_SLOWPOKE \
{ \
    .baseHP        = 90, \
    .baseAttack    = 65, \
    .baseDefense   = 65, \
    .baseSpeed     = 15, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 40, \
    .types = { TYPE_WATER, TYPE_PSYCHIC }, \
    .catchRate = 190, \
    .expYield = 99, \
    .evYield_HP        = 1, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
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