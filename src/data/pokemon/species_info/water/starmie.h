#pragma once

#define SPECIES_INFO_STARMIE \
{ \
    .baseHP        = 60, \
    .baseAttack    = 75, \
    .baseDefense   = 85, \
    .baseSpeed     = 115, \
    .baseSpAttack  = 100, \
    .baseSpDefense = 85, \
    .types = { TYPE_WATER, TYPE_PSYCHIC }, \
    .catchRate = 60, \
    .expYield = 207, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 2, \
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
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}