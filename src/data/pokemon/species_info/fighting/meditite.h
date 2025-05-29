#pragma once

#define SPECIES_INFO_MEDITITE \
{ \
    .baseHP        = 30, \
    .baseAttack    = 40, \
    .baseDefense   = 55, \
    .baseSpeed     = 60, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 55, \
    .types = { TYPE_FIGHTING, TYPE_PSYCHIC }, \
    .catchRate = 180, \
    .expYield = 91, \
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
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE }, \
    .abilities = {ABILITY_PURE_POWER, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}