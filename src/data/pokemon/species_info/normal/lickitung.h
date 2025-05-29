#pragma once

#define SPECIES_INFO_LICKITUNG \
{ \
    .baseHP        = 90, \
    .baseAttack    = 55, \
    .baseDefense   = 75, \
    .baseSpeed     = 30, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 75, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 45, \
    .expYield = 127, \
    .evYield_HP        = 2, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER }, \
    .abilities = {ABILITY_OWN_TEMPO, ABILITY_OBLIVIOUS}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PINK, \
    .noFlip = FALSE, \
}