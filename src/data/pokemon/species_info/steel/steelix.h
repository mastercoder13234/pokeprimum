#pragma once

#define SPECIES_INFO_STEELIX \
{ \
    .baseHP        = 75, \
    .baseAttack    = 85, \
    .baseDefense   = 200, \
    .baseSpeed     = 30, \
    .baseSpAttack  = 55, \
    .baseSpDefense = 65, \
    .types = { TYPE_STEEL, TYPE_GROUND }, \
    .catchRate = 25, \
    .expYield = 196, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 2, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_METAL_COAT, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 25, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL }, \
    .abilities = {ABILITY_ROCK_HEAD, ABILITY_STURDY}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}