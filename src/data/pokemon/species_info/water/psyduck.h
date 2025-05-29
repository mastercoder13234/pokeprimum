#pragma once

#define SPECIES_INFO_PSYDUCK \
{ \
    .baseHP        = 50, \
    .baseAttack    = 52, \
    .baseDefense   = 48, \
    .baseSpeed     = 55, \
    .baseSpAttack  = 65, \
    .baseSpDefense = 50, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 190, \
    .expYield = 80, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_DAMP, ABILITY_CLOUD_NINE}, \
    .safariZoneFleeRate = 6, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}