#pragma once

#define SPECIES_INFO_BEEDRILL \
{ \
    .baseHP        = 65, \
    .baseAttack    = 80, \
    .baseDefense   = 40, \
    .baseSpeed     = 75, \
    .baseSpAttack  = 45, \
    .baseSpDefense = 80, \
    .types = { TYPE_BUG, TYPE_POISON }, \
    .catchRate = 45, \
    .expYield = 159, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 1, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_POISON_BARB, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_SWARM, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}