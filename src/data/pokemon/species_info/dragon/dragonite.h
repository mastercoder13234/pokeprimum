#pragma once

#define SPECIES_INFO_DRAGONITE \
{ \
    .baseHP        = 91, \
    .baseAttack    = 134, \
    .baseDefense   = 95, \
    .baseSpeed     = 80, \
    .baseSpAttack  = 100, \
    .baseSpDefense = 100, \
    .types = { TYPE_DRAGON, TYPE_FLYING }, \
    .catchRate = 45, \
    .expYield = 218, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 3, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_DRAGON_SCALE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 40, \
    .friendship = 35, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON }, \
    .abilities = {ABILITY_INNER_FOCUS, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}