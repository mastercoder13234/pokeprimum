#pragma once

#define SPECIES_INFO_HO_OH \
{ \
    .baseHP        = 106, \
    .baseAttack    = 130, \
    .baseDefense   = 90, \
    .baseSpeed     = 90, \
    .baseSpAttack  = 110, \
    .baseSpDefense = 154, \
    .types = { TYPE_FIRE, TYPE_FLYING }, \
    .catchRate = 3, \
    .expYield = 220, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 3, \
    .itemCommon = ITEM_SACRED_ASH, \
    .itemRare   = ITEM_SACRED_ASH, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 120, \
    .friendship = 0, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_PRESSURE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}