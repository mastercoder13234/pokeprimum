#pragma once

#define SPECIES_INFO_GARDEVOIR \
{ \
    .baseHP        = 68, \
    .baseAttack    = 65, \
    .baseDefense   = 65, \
    .baseSpeed     = 80, \
    .baseSpAttack  = 125, \
    .baseSpDefense = 115, \
    .types = { TYPE_PSYCHIC, TYPE_PSYCHIC }, \
    .catchRate = 45, \
    .expYield = 208, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 3, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = 35, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS }, \
    .abilities = {ABILITY_SYNCHRONIZE, ABILITY_TRACE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_WHITE, \
    .noFlip = FALSE, \
}