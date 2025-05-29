#pragma once

#define SPECIES_INFO_SWAMPERT \
{ \
    .baseHP        = 100, \
    .baseAttack    = 110, \
    .baseDefense   = 90, \
    .baseSpeed     = 60, \
    .baseSpAttack  = 85, \
    .baseSpDefense = 90, \
    .types = { TYPE_WATER, TYPE_GROUND }, \
    .catchRate = 45, \
    .expYield = 210, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 3, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(12.5), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 }, \
    .abilities = {ABILITY_TORRENT, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}