#pragma once

#define SPECIES_INFO_SLAKING \
{ \
    .baseHP        = 150, \
    .baseAttack    = 160, \
    .baseDefense   = 100, \
    .baseSpeed     = 100, \
    .baseSpAttack  = 95, \
    .baseSpDefense = 65, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 45, \
    .expYield = 210, \
    .evYield_HP        = 3, \
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
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_TRUANT, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}