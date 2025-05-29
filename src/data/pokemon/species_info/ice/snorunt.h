#pragma once

#define SPECIES_INFO_SNORUNT \
{ \
    .baseHP        = 50, \
    .baseAttack    = 50, \
    .baseDefense   = 50, \
    .baseSpeed     = 50, \
    .baseSpAttack  = 50, \
    .baseSpDefense = 50, \
    .types = { TYPE_ICE, TYPE_ICE }, \
    .catchRate = 190, \
    .expYield = 74, \
    .evYield_HP        = 1, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
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