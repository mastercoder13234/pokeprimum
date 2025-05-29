#pragma once

#define SPECIES_INFO_NIDORAN_F \
{ \
    .baseHP        = 55, \
    .baseAttack    = 47, \
    .baseDefense   = 52, \
    .baseSpeed     = 41, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 40, \
    .types = { TYPE_POISON, TYPE_POISON }, \
    .catchRate = 235, \
    .expYield = 59, \
    .evYield_HP        = 1, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_FEMALE, \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_POISON_POINT, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}