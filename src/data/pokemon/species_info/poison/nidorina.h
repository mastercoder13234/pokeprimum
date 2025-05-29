#pragma once

#define SPECIES_INFO_NIDORINA \
{ \
    .baseHP        = 70, \
    .baseAttack    = 62, \
    .baseDefense   = 67, \
    .baseSpeed     = 56, \
    .baseSpAttack  = 55, \
    .baseSpDefense = 55, \
    .types = { TYPE_POISON, TYPE_POISON }, \
    .catchRate = 120, \
    .expYield = 117, \
    .evYield_HP        = 2, \
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
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_POISON_POINT, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}