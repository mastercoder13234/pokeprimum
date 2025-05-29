#pragma once

#define SPECIES_INFO_CASTFORM \
{ \
    .baseHP        = 70, \
    .baseAttack    = 70, \
    .baseDefense   = 70, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 70, \
    .baseSpDefense = 70, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 45, \
    .expYield = 145, \
    .evYield_HP        = 1, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_MYSTIC_WATER, \
    .itemRare   = ITEM_MYSTIC_WATER, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 25, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS }, \
    .abilities = {ABILITY_FORECAST, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_WHITE, \
    .noFlip = FALSE, \
}