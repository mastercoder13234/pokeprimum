#pragma once

#define SPECIES_INFO_SMOOCHUM \
{ \
    .baseHP        = 45, \
    .baseAttack    = 30, \
    .baseDefense   = 15, \
    .baseSpeed     = 65, \
    .baseSpAttack  = 85, \
    .baseSpDefense = 65, \
    .types = { TYPE_ICE, TYPE_PSYCHIC }, \
    .catchRate = 45, \
    .expYield = 87, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_ASPEAR_BERRY, \
    .itemRare   = ITEM_ASPEAR_BERRY, \
    .genderRatio = MON_FEMALE, \
    .eggCycles = 25, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_OBLIVIOUS, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PINK, \
    .noFlip = FALSE, \
}