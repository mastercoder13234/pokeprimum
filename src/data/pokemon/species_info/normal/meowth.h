#pragma once

#define SPECIES_INFO_MEOWTH \
{ \
    .baseHP        = 40, \
    .baseAttack    = 45, \
    .baseDefense   = 35, \
    .baseSpeed     = 90, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 40, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 255, \
    .expYield = 69, \
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
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_PICKUP, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}