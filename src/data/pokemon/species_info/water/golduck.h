#pragma once

#define SPECIES_INFO_GOLDUCK \
{ \
    .baseHP        = 80, \
    .baseAttack    = 82, \
    .baseDefense   = 78, \
    .baseSpeed     = 85, \
    .baseSpAttack  = 95, \
    .baseSpDefense = 80, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 75, \
    .expYield = 174, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 2, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_DAMP, ABILITY_CLOUD_NINE}, \
    .safariZoneFleeRate = 8, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}