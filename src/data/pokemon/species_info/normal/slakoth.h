#pragma once

#define SPECIES_INFO_SLAKOTH \
{ \
    .baseHP        = 60, \
    .baseAttack    = 60, \
    .baseDefense   = 60, \
    .baseSpeed     = 30, \
    .baseSpAttack  = 35, \
    .baseSpDefense = 35, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 255, \
    .expYield = 83, \
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
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_TRUANT, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}