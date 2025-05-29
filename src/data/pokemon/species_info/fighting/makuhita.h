#pragma once

#define SPECIES_INFO_MAKUHITA \
{ \
    .baseHP        = 72, \
    .baseAttack    = 60, \
    .baseDefense   = 30, \
    .baseSpeed     = 25, \
    .baseSpAttack  = 20, \
    .baseSpDefense = 30, \
    .types = { TYPE_FIGHTING, TYPE_FIGHTING }, \
    .catchRate = 180, \
    .expYield = 87, \
    .evYield_HP        = 1, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(25), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FLUCTUATING, \
    .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE }, \
    .abilities = {ABILITY_THICK_FAT, ABILITY_GUTS}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}