#pragma once

#define SPECIES_INFO_DUSTOX \
{ \
    .baseHP        = 60, \
    .baseAttack    = 50, \
    .baseDefense   = 70, \
    .baseSpeed     = 65, \
    .baseSpAttack  = 50, \
    .baseSpDefense = 90, \
    .types = { TYPE_BUG, TYPE_POISON }, \
    .catchRate = 45, \
    .expYield = 160, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 3, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_SILVER_POWDER, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_SHIELD_DUST, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GREEN, \
    .noFlip = FALSE, \
}