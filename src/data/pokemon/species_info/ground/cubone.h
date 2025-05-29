#pragma once

#define SPECIES_INFO_CUBONE \
{ \
    .baseHP        = 50, \
    .baseAttack    = 50, \
    .baseDefense   = 95, \
    .baseSpeed     = 35, \
    .baseSpAttack  = 40, \
    .baseSpDefense = 50, \
    .types = { TYPE_GROUND, TYPE_GROUND }, \
    .catchRate = 190, \
    .expYield = 87, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_THICK_CLUB, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER }, \
    .abilities = {ABILITY_ROCK_HEAD, ABILITY_LIGHTNING_ROD}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}