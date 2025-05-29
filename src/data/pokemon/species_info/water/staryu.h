#pragma once

#define SPECIES_INFO_STARYU \
{ \
    .baseHP        = 30, \
    .baseAttack    = 45, \
    .baseDefense   = 55, \
    .baseSpeed     = 85, \
    .baseSpAttack  = 70, \
    .baseSpDefense = 55, \
    .types = { TYPE_WATER, TYPE_WATER }, \
    .catchRate = 225, \
    .expYield = 106, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 1, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_STARDUST, \
    .itemRare   = ITEM_STAR_PIECE, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 }, \
    .abilities = {ABILITY_ILLUMINATE, ABILITY_NATURAL_CURE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}