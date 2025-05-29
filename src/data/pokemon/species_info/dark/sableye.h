#pragma once

#define SPECIES_INFO_SABLEYE \
{ \
    .baseHP        = 50, \
    .baseAttack    = 75, \
    .baseDefense   = 75, \
    .baseSpeed     = 50, \
    .baseSpAttack  = 65, \
    .baseSpDefense = 65, \
    .types = { TYPE_DARK, TYPE_GHOST }, \
    .catchRate = 45, \
    .expYield = 98, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 25, \
    .friendship = 35, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE }, \
    .abilities = {ABILITY_KEEN_EYE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}