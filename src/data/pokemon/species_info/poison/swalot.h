#pragma once

#define SPECIES_INFO_SWALOT \
{ \
    .baseHP        = 100, \
    .baseAttack    = 73, \
    .baseDefense   = 83, \
    .baseSpeed     = 55, \
    .baseSpAttack  = 73, \
    .baseSpDefense = 83, \
    .types = { TYPE_POISON, TYPE_POISON }, \
    .catchRate = 75, \
    .expYield = 168, \
    .evYield_HP        = 2, \
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
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}