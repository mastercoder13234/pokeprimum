#pragma once

#define SPECIES_INFO_VENOMOTH \
{ \
    .baseHP        = 70, \
    .baseAttack    = 65, \
    .baseDefense   = 60, \
    .baseSpeed     = 90, \
    .baseSpAttack  = 90, \
    .baseSpDefense = 75, \
    .types = { TYPE_BUG, TYPE_POISON }, \
    .catchRate = 75, \
    .expYield = 138, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_SHIELD_DUST, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}