#pragma once

#define SPECIES_INFO_RHYHORN \
{ \
    .baseHP        = 80, \
    .baseAttack    = 85, \
    .baseDefense   = 95, \
    .baseSpeed     = 25, \
    .baseSpAttack  = 30, \
    .baseSpDefense = 30, \
    .types = { TYPE_GROUND, TYPE_ROCK }, \
    .catchRate = 120, \
    .expYield = 135, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD}, \
    .safariZoneFleeRate = 4, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}