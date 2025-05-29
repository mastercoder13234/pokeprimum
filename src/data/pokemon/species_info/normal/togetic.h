#pragma once

#define SPECIES_INFO_TOGETIC \
{ \
    .baseHP        = 55, \
    .baseAttack    = 40, \
    .baseDefense   = 85, \
    .baseSpeed     = 40, \
    .baseSpAttack  = 80, \
    .baseSpDefense = 105, \
    .types = { TYPE_NORMAL, TYPE_FLYING }, \
    .catchRate = 75, \
    .expYield = 114, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 2, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(12.5), \
    .eggCycles = 10, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FAST, \
    .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FAIRY }, \
    .abilities = {ABILITY_HUSTLE, ABILITY_SERENE_GRACE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_WHITE, \
    .noFlip = FALSE, \
}