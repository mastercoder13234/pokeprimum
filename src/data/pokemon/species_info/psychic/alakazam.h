#pragma once

#define SPECIES_INFO_ALAKAZAM \
{ \
    .baseHP        = 55, \
    .baseAttack    = 50, \
    .baseDefense   = 45, \
    .baseSpeed     = 120, \
    .baseSpAttack  = 135, \
    .baseSpDefense = 85, \
    .types = { TYPE_PSYCHIC, TYPE_PSYCHIC }, \
    .catchRate = 50, \
    .expYield = 186, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 3, \
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