#pragma once

#define SPECIES_INFO_DUNSPARCE \
{ \
    .baseHP        = 100, \
    .baseAttack    = 70, \
    .baseDefense   = 70, \
    .baseSpeed     = 45, \
    .baseSpAttack  = 65, \
    .baseSpDefense = 65, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 190, \
    .expYield = 75, \
    .evYield_HP        = 1, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_SERENE_GRACE, ABILITY_RUN_AWAY}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}