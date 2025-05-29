#pragma once

#define SPECIES_INFO_MISDREAVUS \
{ \
    .baseHP        = 60, \
    .baseAttack    = 60, \
    .baseDefense   = 60, \
    .baseSpeed     = 85, \
    .baseSpAttack  = 85, \
    .baseSpDefense = 85, \
    .types = { TYPE_GHOST, TYPE_GHOST }, \
    .catchRate = 45, \
    .expYield = 147, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 1, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_SPELL_TAG, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 25, \
    .friendship = 35, \
    .growthRate = GROWTH_FAST, \
    .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS }, \
    .abilities = {ABILITY_LEVITATE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}