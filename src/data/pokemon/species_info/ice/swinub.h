#pragma once

#define SPECIES_INFO_SWINUB \
{ \
    .baseHP        = 50, \
    .baseAttack    = 50, \
    .baseDefense   = 40, \
    .baseSpeed     = 50, \
    .baseSpAttack  = 30, \
    .baseSpDefense = 30, \
    .types = { TYPE_ICE, TYPE_GROUND }, \
    .catchRate = 225, \
    .expYield = 78, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_OBLIVIOUS, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}