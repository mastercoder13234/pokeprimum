#pragma once

#define SPECIES_INFO_AERODACTYL \
{ \
    .baseHP        = 80, \
    .baseAttack    = 105, \
    .baseDefense   = 65, \
    .baseSpeed     = 130, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 75, \
    .types = { TYPE_ROCK, TYPE_FLYING }, \
    .catchRate = 45, \
    .expYield = 202, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 2, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(12.5), \
    .eggCycles = 35, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING }, \
    .abilities = {ABILITY_ROCK_HEAD, ABILITY_PRESSURE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}