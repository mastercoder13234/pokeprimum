#pragma once

#define SPECIES_INFO_SLUGMA \
{ \
    .baseHP        = 40, \
    .baseAttack    = 40, \
    .baseDefense   = 40, \
    .baseSpeed     = 20, \
    .baseSpAttack  = 70, \
    .baseSpDefense = 40, \
    .types = { TYPE_FIRE, TYPE_FIRE }, \
    .catchRate = 190, \
    .expYield = 78, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS }, \
    .abilities = {ABILITY_MAGMA_ARMOR, ABILITY_FLAME_BODY}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}