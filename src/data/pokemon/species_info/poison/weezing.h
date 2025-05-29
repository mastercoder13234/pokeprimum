#pragma once

#define SPECIES_INFO_WEEZING \
{ \
    .baseHP        = 65, \
    .baseAttack    = 90, \
    .baseDefense   = 120, \
    .baseSpeed     = 60, \
    .baseSpAttack  = 85, \
    .baseSpDefense = 70, \
    .types = { TYPE_POISON, TYPE_POISON }, \
    .catchRate = 60, \
    .expYield = 173, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 2, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_SMOKE_BALL, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS }, \
    .abilities = {ABILITY_LEVITATE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}