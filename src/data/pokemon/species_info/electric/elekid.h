#pragma once

#define SPECIES_INFO_ELEKID \
{ \
    .baseHP        = 45, \
    .baseAttack    = 63, \
    .baseDefense   = 37, \
    .baseSpeed     = 95, \
    .baseSpAttack  = 65, \
    .baseSpDefense = 55, \
    .types = { TYPE_ELECTRIC, TYPE_ELECTRIC }, \
    .catchRate = 45, \
    .expYield = 106, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(25), \
    .eggCycles = 25, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_STATIC, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = TRUE, \
}