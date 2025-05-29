#pragma once

#define SPECIES_INFO_GULPIN \
{ \
    .baseHP        = 70, \
    .baseAttack    = 43, \
    .baseDefense   = 53, \
    .baseSpeed     = 40, \
    .baseSpAttack  = 43, \
    .baseSpDefense = 53, \
    .types = { TYPE_POISON, TYPE_POISON }, \
    .catchRate = 225, \
    .expYield = 75, \
    .evYield_HP        = 1, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_BIG_PEARL, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FLUCTUATING, \
    .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS }, \
    .abilities = {ABILITY_LIQUID_OOZE, ABILITY_STICKY_HOLD}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}