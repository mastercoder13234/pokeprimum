#pragma once

#define SPECIES_INFO_TORKOAL \
{ \
    .baseHP        = 70, \
    .baseAttack    = 85, \
    .baseDefense   = 140, \
    .baseSpeed     = 20, \
    .baseSpAttack  = 85, \
    .baseSpDefense = 70, \
    .types = { TYPE_FIRE, TYPE_FIRE }, \
    .catchRate = 90, \
    .expYield = 161, \
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
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_WHITE_SMOKE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}