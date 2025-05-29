#pragma once

#define SPECIES_INFO_SQUIRTLE \
{ \
    .baseHP        = 44, \
    .baseAttack    = 48, \
    .baseDefense   = 65, \
    .baseSpeed     = 43, \
    .baseSpAttack  = 50, \
    .baseSpDefense = 64, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 45, \
    .expYield = 66, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
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