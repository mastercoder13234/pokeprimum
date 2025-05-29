#pragma once

#define SPECIES_INFO_SALAMENCE \
{ \
    .baseHP        = 95, \
    .baseAttack    = 135, \
    .baseDefense   = 80, \
    .baseSpeed     = 100, \
    .baseSpAttack  = 110, \
    .baseSpDefense = 80, \
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
    .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_DRAGON }, \
    .abilities = {ABILITY_INTIMIDATE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}