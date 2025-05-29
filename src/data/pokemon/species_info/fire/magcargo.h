#pragma once

#define SPECIES_INFO_MAGCARGO \
{ \
    .baseHP        = 50, \
    .baseAttack    = 50, \
    .baseDefense   = 120, \
    .baseSpeed     = 30, \
    .baseSpAttack  = 80, \
    .baseSpDefense = 80, \
    .types = { TYPE_FIRE, TYPE_ROCK }, \
    .catchRate = 75, \
    .expYield = 154, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 2, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
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