#pragma once

#define SPECIES_INFO_NIDORINO \
{ \
    .baseHP        = 61, \
    .baseAttack    = 72, \
    .baseDefense   = 57, \
    .baseSpeed     = 65, \
    .baseSpAttack  = 55, \
    .baseSpDefense = 55, \
    .types = { TYPE_POISON, TYPE_POISON }, \
    .catchRate = 120, \
    .expYield = 118, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_MALE, \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_POISON_POINT, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}