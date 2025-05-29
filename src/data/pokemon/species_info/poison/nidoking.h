#pragma once

#define SPECIES_INFO_NIDOKING \
{ \
    .baseHP        = 81, \
    .baseAttack    = 92, \
    .baseDefense   = 77, \
    .baseSpeed     = 85, \
    .baseSpAttack  = 85, \
    .baseSpDefense = 75, \
    .types = { TYPE_POISON, TYPE_GROUND }, \
    .catchRate = 45, \
    .expYield = 195, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 3, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = MON_MALE, \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_POISON_POINT, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}