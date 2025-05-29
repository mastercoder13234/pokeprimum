#pragma once

#define SPECIES_INFO_BANETTE \
{ \
    .baseHP        = 64, \
    .baseAttack    = 115, \
    .baseDefense   = 65, \
    .baseSpeed     = 65, \
    .baseSpAttack  = 83, \
    .baseSpDefense = 63, \
    .types = { TYPE_GHOST, TYPE_GHOST }, \
    .catchRate = 45, \
    .expYield = 179, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
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