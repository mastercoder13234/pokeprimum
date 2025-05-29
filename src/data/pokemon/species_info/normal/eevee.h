#pragma once

#define SPECIES_INFO_EEVEE \
{ \
    .baseHP        = 55, \
    .baseAttack    = 55, \
    .baseDefense   = 50, \
    .baseSpeed     = 55, \
    .baseSpAttack  = 45, \
    .baseSpDefense = 65, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 45, \
    .expYield = 92, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 1, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(12.5), \
    .eggCycles = 35, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_RUN_AWAY, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}