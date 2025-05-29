#pragma once

#define SPECIES_INFO_NIDOQUEEN \
{ \
    .baseHP        = 90, \
    .baseAttack    = 82, \
    .baseDefense   = 87, \
    .baseSpeed     = 76, \
    .baseSpAttack  = 75, \
    .baseSpDefense = 85, \
    .types = { TYPE_POISON, TYPE_GROUND }, \
    .catchRate = 45, \
    .expYield = 194, \
    .evYield_HP        = 3, \
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