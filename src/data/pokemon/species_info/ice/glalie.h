#pragma once

#define SPECIES_INFO_GLALIE \
{ \
    .baseHP        = 80, \
    .baseAttack    = 80, \
    .baseDefense   = 80, \
    .baseSpeed     = 80, \
    .baseSpAttack  = 80, \
    .baseSpDefense = 80, \
    .types = { TYPE_ICE, TYPE_ICE }, \
    .catchRate = 75, \
    .expYield = 187, \
    .evYield_HP        = 2, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NEVER_MELT_ICE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_MINERAL }, \
    .abilities = {ABILITY_INNER_FOCUS, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}