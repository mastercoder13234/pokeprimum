#pragma once

#define SPECIES_INFO_PLUSLE \
{ \
    .baseHP        = 60, \
    .baseAttack    = 50, \
    .baseDefense   = 40, \
    .baseSpeed     = 95, \
    .baseSpAttack  = 85, \
    .baseSpDefense = 75, \
    .types = { TYPE_ELECTRIC, TYPE_ELECTRIC }, \
    .catchRate = 200, \
    .expYield = 120, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY }, \
    .abilities = {ABILITY_PLUS, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}