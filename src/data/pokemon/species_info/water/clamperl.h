#pragma once

#define SPECIES_INFO_CLAMPERL \
{ \
    .baseHP        = 35, \
    .baseAttack    = 64, \
    .baseDefense   = 85, \
    .baseSpeed     = 32, \
    .baseSpAttack  = 74, \
    .baseSpDefense = 55, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 255, \
    .expYield = 142, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_BLUE_SHARD, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_ERRATIC, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1 }, \
    .abilities = {ABILITY_SHELL_ARMOR, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}