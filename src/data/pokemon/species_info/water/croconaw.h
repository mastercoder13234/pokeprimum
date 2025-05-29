#pragma once

#define SPECIES_INFO_CROCONAW \
{ \
    .baseHP        = 65, \
    .baseAttack    = 80, \
    .baseDefense   = 80, \
    .baseSpeed     = 58, \
    .baseSpAttack  = 59, \
    .baseSpDefense = 63, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 45, \
    .expYield = 143, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
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
    .noFlip = TRUE, \
}