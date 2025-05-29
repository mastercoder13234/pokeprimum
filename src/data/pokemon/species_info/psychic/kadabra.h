#pragma once

#define SPECIES_INFO_KADABRA \
{ \
    .baseHP        = 40, \
    .baseAttack    = 35, \
    .baseDefense   = 30, \
    .baseSpeed     = 105, \
    .baseSpAttack  = 120, \
    .baseSpDefense = 70, \
    .types = { TYPE_PSYCHIC, TYPE_PSYCHIC }, \
    .catchRate = 100, \
    .expYield = 145, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 2, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_TWISTED_SPOON, \
    .genderRatio = PERCENT_FEMALE(25), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE }, \
    .abilities = {ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}