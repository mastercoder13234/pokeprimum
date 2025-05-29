#pragma once

#define SPECIES_INFO_BUTTERFREE \
{ \
    .baseHP        = 60, \
    .baseAttack    = 45, \
    .baseDefense   = 50, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 80, \
    .baseSpDefense = 80, \
    .types = { TYPE_BUG, TYPE_FLYING }, \
    .catchRate = 45, \
    .expYield = 160, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 2, \
    .evYield_SpDefense = 1, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_SILVER_POWDER, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_COMPOUND_EYES, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_WHITE, \
    .noFlip = FALSE, \
}