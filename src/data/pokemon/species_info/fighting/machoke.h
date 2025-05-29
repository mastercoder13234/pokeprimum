#pragma once

#define SPECIES_INFO_MACHOKE \
{ \
    .baseHP        = 80, \
    .baseAttack    = 100, \
    .baseDefense   = 70, \
    .baseSpeed     = 45, \
    .baseSpAttack  = 50, \
    .baseSpDefense = 60, \
    .types = { TYPE_FIGHTING, TYPE_FIGHTING }, \
    .catchRate = 90, \
    .expYield = 146, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
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