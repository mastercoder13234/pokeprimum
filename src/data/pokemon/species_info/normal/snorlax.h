#pragma once

#define SPECIES_INFO_SNORLAX \
{ \
    .baseHP        = 160, \
    .baseAttack    = 110, \
    .baseDefense   = 65, \
    .baseSpeed     = 30, \
    .baseSpAttack  = 65, \
    .baseSpDefense = 110, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 25, \
    .expYield = 154, \
    .evYield_HP        = 2, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_LEFTOVERS, \
    .itemRare   = ITEM_LEFTOVERS, \
    .genderRatio = PERCENT_FEMALE(12.5), \
    .eggCycles = 40, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER }, \
    .abilities = {ABILITY_IMMUNITY, ABILITY_THICK_FAT}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLACK, \
    .noFlip = FALSE, \
}