#pragma once

#define SPECIES_INFO_MURKROW \
{ \
    .baseHP        = 60, \
    .baseAttack    = 85, \
    .baseDefense   = 42, \
    .baseSpeed     = 91, \
    .baseSpAttack  = 85, \
    .baseSpDefense = 42, \
    .types = { TYPE_DARK, TYPE_FLYING }, \
    .catchRate = 30, \
    .expYield = 107, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = 35, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING }, \
    .abilities = {ABILITY_INSOMNIA, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLACK, \
    .noFlip = FALSE, \
}