#pragma once

#define SPECIES_INFO_EXEGGUTOR \
{ \
    .baseHP        = 95, \
    .baseAttack    = 95, \
    .baseDefense   = 85, \
    .baseSpeed     = 55, \
    .baseSpAttack  = 125, \
    .baseSpDefense = 65, \
    .types = { TYPE_GRASS, TYPE_PSYCHIC }, \
    .catchRate = 45, \
    .expYield = 212, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 2, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS }, \
    .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}