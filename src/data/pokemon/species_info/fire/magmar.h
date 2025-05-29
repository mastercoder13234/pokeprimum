#pragma once

#define SPECIES_INFO_MAGMAR \
{ \
    .baseHP        = 65, \
    .baseAttack    = 95, \
    .baseDefense   = 57, \
    .baseSpeed     = 93, \
    .baseSpAttack  = 100, \
    .baseSpDefense = 85, \
    .types = { TYPE_FIRE, TYPE_FIRE }, \
    .catchRate = 45, \
    .expYield = 167, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 2, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_RAWST_BERRY, \
    .itemRare   = ITEM_RAWST_BERRY, \
    .genderRatio = PERCENT_FEMALE(25), \
    .eggCycles = 25, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE }, \
    .abilities = {ABILITY_FLAME_BODY, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}