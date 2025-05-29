#pragma once

#define SPECIES_INFO_BRELOOM \
{ \
    .baseHP        = 60, \
    .baseAttack    = 130, \
    .baseDefense   = 80, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 60, \
    .types = { TYPE_GRASS, TYPE_FIGHTING }, \
    .catchRate = 90, \
    .expYield = 165, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FLUCTUATING, \
    .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS }, \
    .abilities = {ABILITY_EFFECT_SPORE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}