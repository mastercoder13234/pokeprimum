#pragma once

#define SPECIES_INFO_PIKACHU \
{ \
    .baseHP        = 35, \
    .baseAttack    = 55, \
    .baseDefense   = 30, \
    .baseSpeed     = 90, \
    .baseSpAttack  = 50, \
    .baseSpDefense = 40, \
    .types = { TYPE_ELECTRIC, TYPE_ELECTRIC }, \
    .catchRate = 190, \
    .expYield = 82, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 2, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_ORAN_BERRY, \
    .itemRare   = ITEM_LIGHT_BALL, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 10, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY }, \
    .abilities = {ABILITY_STATIC, ABILITY_NONE}, \
    .safariZoneFleeRate = 6, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}