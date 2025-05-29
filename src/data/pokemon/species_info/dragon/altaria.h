#pragma once

#define SPECIES_INFO_ALTARIA \
{ \
    .baseHP        = 75, \
    .baseAttack    = 70, \
    .baseDefense   = 90, \
    .baseSpeed     = 80, \
    .baseSpAttack  = 70, \
    .baseSpDefense = 105, \
    .types = { TYPE_DRAGON, TYPE_FLYING }, \
    .catchRate = 45, \
    .expYield = 188, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 2, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_ERRATIC, \
    .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_DRAGON }, \
    .abilities = {ABILITY_NATURAL_CURE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}