#pragma once

#define SPECIES_INFO_MACHAMP \
{ \
    .baseHP        = 90, \
    .baseAttack    = 130, \
    .baseDefense   = 80, \
    .baseSpeed     = 55, \
    .baseSpAttack  = 65, \
    .baseSpDefense = 85, \
    .types = { TYPE_FIGHTING, TYPE_FIGHTING }, \
    .catchRate = 45, \
    .expYield = 193, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 3, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(25), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE }, \
    .abilities = {ABILITY_GUTS, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}