#pragma once

#define SPECIES_INFO_SKARMORY \
{ \
    .baseHP        = 65, \
    .baseAttack    = 80, \
    .baseDefense   = 140, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 70, \
    .types = { TYPE_STEEL, TYPE_FLYING }, \
    .catchRate = 25, \
    .expYield = 168, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 2, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 25, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING }, \
    .abilities = {ABILITY_KEEN_EYE, ABILITY_STURDY}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}