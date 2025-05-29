#pragma once

#define SPECIES_INFO_BEAUTIFLY \
{ \
    .baseHP        = 60, \
    .baseAttack    = 70, \
    .baseDefense   = 50, \
    .baseSpeed     = 65, \
    .baseSpAttack  = 90, \
    .baseSpDefense = 50, \
    .types = { TYPE_BUG, TYPE_FLYING }, \
    .catchRate = 45, \
    .expYield = 161, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 3, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_SILVER_POWDER, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_SWARM, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}