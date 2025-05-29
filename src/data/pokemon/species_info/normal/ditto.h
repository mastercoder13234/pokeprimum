#pragma once

#define SPECIES_INFO_DITTO \
{ \
    .baseHP        = 48, \
    .baseAttack    = 48, \
    .baseDefense   = 48, \
    .baseSpeed     = 48, \
    .baseSpAttack  = 48, \
    .baseSpDefense = 48, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 35, \
    .expYield = 61, \
    .evYield_HP        = 1, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_METAL_POWDER, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_DITTO, EGG_GROUP_DITTO }, \
    .abilities = {ABILITY_LIMBER, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}