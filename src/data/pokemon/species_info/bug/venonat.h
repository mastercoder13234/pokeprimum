#pragma once

#define SPECIES_INFO_VENONAT \
{ \
    .baseHP        = 60, \
    .baseAttack    = 55, \
    .baseDefense   = 50, \
    .baseSpeed     = 45, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 55, \
    .types = { TYPE_BUG, TYPE_POISON }, \
    .catchRate = 190, \
    .expYield = 75, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 1, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_COMPOUND_EYES, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}