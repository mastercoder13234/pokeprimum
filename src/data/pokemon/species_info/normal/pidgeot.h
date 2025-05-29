#pragma once

#define SPECIES_INFO_PIDGEOT \
{ \
    .baseHP        = 83, \
    .baseAttack    = 80, \
    .baseDefense   = 75, \
    .baseSpeed     = 91, \
    .baseSpAttack  = 70, \
    .baseSpDefense = 70, \
    .types = { TYPE_NORMAL, TYPE_FLYING }, \
    .catchRate = 45, \
    .expYield = 172, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 3, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING }, \
    .abilities = {ABILITY_KEEN_EYE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}