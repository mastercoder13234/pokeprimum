#pragma once

#define SPECIES_INFO_ILLUMISE \
{ \
    .baseHP        = 65, \
    .baseAttack    = 47, \
    .baseDefense   = 55, \
    .baseSpeed     = 85, \
    .baseSpAttack  = 73, \
    .baseSpDefense = 75, \
    .types = { TYPE_BUG, TYPE_BUG }, \
    .catchRate = 150, \
    .expYield = 146, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_FEMALE, \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FLUCTUATING, \
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_HUMAN_LIKE }, \
    .abilities = {ABILITY_OBLIVIOUS, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}