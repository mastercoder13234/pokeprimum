#pragma once

#define SPECIES_INFO_MAROWAK \
{ \
    .baseHP        = 60, \
    .baseAttack    = 80, \
    .baseDefense   = 110, \
    .baseSpeed     = 45, \
    .baseSpAttack  = 50, \
    .baseSpDefense = 80, \
    .types = { TYPE_GROUND, TYPE_GROUND }, \
    .catchRate = 75, \
    .expYield = 124, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 2, \
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