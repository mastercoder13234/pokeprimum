#pragma once

#define SPECIES_INFO_HITMONLEE \
{ \
    .baseHP        = 50, \
    .baseAttack    = 120, \
    .baseDefense   = 53, \
    .baseSpeed     = 87, \
    .baseSpAttack  = 35, \
    .baseSpDefense = 110, \
    .types = { TYPE_FIGHTING, TYPE_FIGHTING }, \
    .catchRate = 45, \
    .expYield = 139, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_MALE, \
    .eggCycles = 25, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE }, \
    .abilities = {ABILITY_LIMBER, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}