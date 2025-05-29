#pragma once

#define SPECIES_INFO_CAMERUPT \
{ \
    .baseHP        = 70, \
    .baseAttack    = 100, \
    .baseDefense   = 70, \
    .baseSpeed     = 40, \
    .baseSpAttack  = 105, \
    .baseSpDefense = 75, \
    .types = { TYPE_FIRE, TYPE_GROUND }, \
    .catchRate = 150, \
    .expYield = 175, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_RAWST_BERRY, \
    .itemRare   = ITEM_RAWST_BERRY, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_MAGMA_ARMOR, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}