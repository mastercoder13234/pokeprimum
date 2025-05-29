#pragma once

#define SPECIES_INFO_MAGBY \
{ \
    .baseHP        = 45, \
    .baseAttack    = 75, \
    .baseDefense   = 37, \
    .baseSpeed     = 83, \
    .baseSpAttack  = 70, \
    .baseSpDefense = 55, \
    .types = { TYPE_FIRE, TYPE_FIRE }, \
    .catchRate = 45, \
    .expYield = 117, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_RAWST_BERRY, \
    .itemRare   = ITEM_RAWST_BERRY, \
    .genderRatio = PERCENT_FEMALE(25), \
    .eggCycles = 25, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_FLAME_BODY, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}