#pragma once

#define SPECIES_INFO_ABSOL \
{ \
    .baseHP        = 65, \
    .baseAttack    = 130, \
    .baseDefense   = 60, \
    .baseSpeed     = 75, \
    .baseSpAttack  = 75, \
    .baseSpDefense = 60, \
    .types = { TYPE_DARK, TYPE_DARK }, \
    .catchRate = 30, \
    .expYield = 174, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 25, \
    .friendship = 35, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_PRESSURE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_WHITE, \
    .noFlip = TRUE, \
}