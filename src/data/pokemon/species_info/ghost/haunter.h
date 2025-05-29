#pragma once

#define SPECIES_INFO_HAUNTER \
{ \
    .baseHP        = 45, \
    .baseAttack    = 50, \
    .baseDefense   = 45, \
    .baseSpeed     = 95, \
    .baseSpAttack  = 115, \
    .baseSpDefense = 55, \
    .types = { TYPE_GHOST, TYPE_POISON }, \
    .catchRate = 90, \
    .expYield = 126, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 2, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS }, \
    .abilities = {ABILITY_LEVITATE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}