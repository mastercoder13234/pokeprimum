#pragma once

#define SPECIES_INFO_SEADRA \
{ \
    .baseHP        = 55, \
    .baseAttack    = 65, \
    .baseDefense   = 95, \
    .baseSpeed     = 85, \
    .baseSpAttack  = 95, \
    .baseSpDefense = 45, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 75, \
    .expYield = 155, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_DRAGON_SCALE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON }, \
    .abilities = {ABILITY_POISON_POINT, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}