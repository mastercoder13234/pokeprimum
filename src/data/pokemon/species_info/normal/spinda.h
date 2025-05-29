#pragma once

#define SPECIES_INFO_SPINDA \
{ \
    .baseHP        = 60, \
    .baseAttack    = 60, \
    .baseDefense   = 60, \
    .baseSpeed     = 60, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 60, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 255, \
    .expYield = 85, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_CHESTO_BERRY, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 15, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE }, \
    .abilities = {ABILITY_OWN_TEMPO, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = TRUE, \
}