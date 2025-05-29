#pragma once

#define SPECIES_INFO_HARIYAMA \
{ \
    .baseHP        = 144, \
    .baseAttack    = 120, \
    .baseDefense   = 60, \
    .baseSpeed     = 50, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 60, \
    .types = { TYPE_FIGHTING, TYPE_FIGHTING }, \
    .catchRate = 200, \
    .expYield = 184, \
    .evYield_HP        = 2, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_KINGS_ROCK, \
    .genderRatio = PERCENT_FEMALE(25), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FLUCTUATING, \
    .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE }, \
    .abilities = {ABILITY_THICK_FAT, ABILITY_GUTS}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}