#pragma once

#define SPECIES_INFO_GIRAFARIG \
{ \
    .baseHP        = 70, \
    .baseAttack    = 80, \
    .baseDefense   = 65, \
    .baseSpeed     = 85, \
    .baseSpAttack  = 90, \
    .baseSpDefense = 65, \
    .types = { TYPE_NORMAL, TYPE_PSYCHIC }, \
    .catchRate = 60, \
    .expYield = 149, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 2, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_PERSIM_BERRY, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_INNER_FOCUS, ABILITY_EARLY_BIRD}, \
    .safariZoneFleeRate = 4, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}