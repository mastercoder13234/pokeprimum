#pragma once

#define SPECIES_INFO_SWABLU \
{ \
    .baseHP        = 45, \
    .baseAttack    = 40, \
    .baseDefense   = 60, \
    .baseSpeed     = 50, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 75, \
    .types = { TYPE_NORMAL, TYPE_FLYING }, \
    .catchRate = 255, \
    .expYield = 74, \
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
    .growthRate = GROWTH_ERRATIC, \
    .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_DRAGON }, \
    .abilities = {ABILITY_NATURAL_CURE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}