#pragma once

#define SPECIES_INFO_MEDICHAM \
{ \
    .baseHP        = 60, \
    .baseAttack    = 60, \
    .baseDefense   = 75, \
    .baseSpeed     = 80, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 75, \
    .types = { TYPE_FIGHTING, TYPE_PSYCHIC }, \
    .catchRate = 90, \
    .expYield = 153, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 2, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE }, \
    .abilities = {ABILITY_PURE_POWER, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}