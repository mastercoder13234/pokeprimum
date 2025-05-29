#pragma once

#define SPECIES_INFO_METAGROSS \
{ \
    .baseHP        = 80, \
    .baseAttack    = 135, \
    .baseDefense   = 130, \
    .baseSpeed     = 70, \
    .baseSpAttack  = 95, \
    .baseSpDefense = 90, \
    .types = { TYPE_STEEL, TYPE_PSYCHIC }, \
    .catchRate = 3, \
    .expYield = 210, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 3, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_METAL_COAT, \
    .genderRatio = MON_GENDERLESS, \
    .eggCycles = 40, \
    .friendship = 35, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL }, \
    .abilities = {ABILITY_CLEAR_BODY, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}