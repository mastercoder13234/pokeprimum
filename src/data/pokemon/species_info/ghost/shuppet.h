#pragma once

#define SPECIES_INFO_SHUPPET \
{ \
    .baseHP        = 44, \
    .baseAttack    = 75, \
    .baseDefense   = 35, \
    .baseSpeed     = 45, \
    .baseSpAttack  = 63, \
    .baseSpDefense = 33, \
    .types = { TYPE_GHOST, TYPE_GHOST }, \
    .catchRate = 225, \
    .expYield = 97, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_SPELL_TAG, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 25, \
    .friendship = 35, \
    .growthRate = GROWTH_FAST, \
    .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS }, \
    .abilities = {ABILITY_INSOMNIA, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLACK, \
    .noFlip = FALSE, \
}