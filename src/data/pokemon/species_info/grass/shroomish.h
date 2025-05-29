#pragma once

#define SPECIES_INFO_SHROOMISH \
{ \
    .baseHP        = 60, \
    .baseAttack    = 40, \
    .baseDefense   = 60, \
    .baseSpeed     = 35, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 60, \
    .types = { TYPE_GRASS, TYPE_GRASS }, \
    .catchRate = 255, \
    .expYield = 65, \
    .evYield_HP        = 1, \
    .evYield_Attack    = 0, \
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
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}