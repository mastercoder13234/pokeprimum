#pragma once

#define SPECIES_INFO_ZANGOOSE \
{ \
    .baseHP        = 73, \
    .baseAttack    = 115, \
    .baseDefense   = 60, \
    .baseSpeed     = 90, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 60, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
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
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_ERRATIC, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_IMMUNITY, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_WHITE, \
    .noFlip = TRUE, \
}