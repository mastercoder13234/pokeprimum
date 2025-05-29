#pragma once

#define SPECIES_INFO_NINCADA \
{ \
    .baseHP        = 31, \
    .baseAttack    = 45, \
    .baseDefense   = 90, \
    .baseSpeed     = 40, \
    .baseSpAttack  = 30, \
    .baseSpDefense = 30, \
    .types = { TYPE_BUG, TYPE_GROUND }, \
    .catchRate = 255, \
    .expYield = 65, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_ERRATIC, \
    .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG }, \
    .abilities = {ABILITY_COMPOUND_EYES, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}