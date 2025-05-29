#pragma once

#define SPECIES_INFO_JIRACHI \
{ \
    .baseHP        = 100, \
    .baseAttack    = 100, \
    .baseDefense   = 100, \
    .baseSpeed     = 100, \
    .baseSpAttack  = 100, \
    .baseSpDefense = 100, \
    .types = { TYPE_STEEL, TYPE_PSYCHIC }, \
    .catchRate = 3, \
    .expYield = 215, \
    .evYield_HP        = 3, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_STAR_PIECE, \
    .itemRare   = ITEM_STAR_PIECE, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 120, \
    .friendship = 100, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }, \
    .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}