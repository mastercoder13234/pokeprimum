#pragma once

#define SPECIES_INFO_SHUCKLE \
{ \
    .baseHP        = 20, \
    .baseAttack    = 10, \
    .baseDefense   = 230, \
    .baseSpeed     = 5, \
    .baseSpAttack  = 10, \
    .baseSpDefense = 230, \
    .types = { TYPE_BUG, TYPE_ROCK }, \
    .catchRate = 190, \
    .expYield = 80, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 1, \
    .itemCommon = ITEM_ORAN_BERRY, \
    .itemRare   = ITEM_ORAN_BERRY, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_STURDY, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}