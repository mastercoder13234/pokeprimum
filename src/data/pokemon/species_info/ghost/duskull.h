#pragma once

#define SPECIES_INFO_DUSKULL \
{ \
    .baseHP        = 20, \
    .baseAttack    = 40, \
    .baseDefense   = 90, \
    .baseSpeed     = 25, \
    .baseSpAttack  = 30, \
    .baseSpDefense = 90, \
    .types = { TYPE_GHOST, TYPE_GHOST }, \
    .catchRate = 190, \
    .expYield = 97, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
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
    .bodyColor = BODY_COLOR_BLACK, \
    .noFlip = FALSE, \
}