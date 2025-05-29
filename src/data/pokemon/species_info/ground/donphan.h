#pragma once

#define SPECIES_INFO_DONPHAN \
{ \
    .baseHP        = 90, \
    .baseAttack    = 120, \
    .baseDefense   = 120, \
    .baseSpeed     = 50, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 60, \
    .types = { TYPE_GROUND, TYPE_GROUND }, \
    .catchRate = 60, \
    .expYield = 189, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 1, \
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
    .abilities = {ABILITY_STURDY, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}