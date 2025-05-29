#pragma once

#define SPECIES_INFO_SNEASEL \
{ \
    .baseHP        = 55, \
    .baseAttack    = 95, \
    .baseDefense   = 55, \
    .baseSpeed     = 115, \
    .baseSpAttack  = 35, \
    .baseSpDefense = 75, \
    .types = { TYPE_DARK, TYPE_ICE }, \
    .catchRate = 60, \
    .expYield = 132, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_QUICK_CLAW, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = 35, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_INNER_FOCUS, ABILITY_KEEN_EYE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLACK, \
    .noFlip = TRUE, \
}