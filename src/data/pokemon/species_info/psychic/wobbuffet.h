#pragma once

#define SPECIES_INFO_WOBBUFFET \
{ \
    .baseHP        = 190, \
    .baseAttack    = 33, \
    .baseDefense   = 58, \
    .baseSpeed     = 33, \
    .baseSpAttack  = 33, \
    .baseSpDefense = 58, \
    .types = { TYPE_PSYCHIC, TYPE_PSYCHIC }, \
    .catchRate = 45, \
    .expYield = 177, \
    .evYield_HP        = 2, \
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
    .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS }, \
    .abilities = {ABILITY_SHADOW_TAG, ABILITY_NONE}, \
    .safariZoneFleeRate = 4, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}