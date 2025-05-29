#pragma once

#define SPECIES_INFO_PICHU \
{ \
    .baseHP        = 20, \
    .baseAttack    = 40, \
    .baseDefense   = 15, \
    .baseSpeed     = 60, \
    .baseSpAttack  = 35, \
    .baseSpDefense = 35, \
    .types = { TYPE_ELECTRIC, TYPE_ELECTRIC }, \
    .catchRate = 190, \
    .expYield = 42, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_ORAN_BERRY, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 10, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_STATIC, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}