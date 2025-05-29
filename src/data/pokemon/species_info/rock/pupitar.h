#pragma once

#define SPECIES_INFO_PUPITAR \
{ \
    .baseHP        = 70, \
    .baseAttack    = 84, \
    .baseDefense   = 70, \
    .baseSpeed     = 51, \
    .baseSpAttack  = 65, \
    .baseSpDefense = 70, \
    .types = { TYPE_ROCK, TYPE_GROUND }, \
    .catchRate = 45, \
    .expYield = 144, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 2, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NONE, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 40, \
    .friendship = 35, \
    .growthRate = GROWTH_SLOW, \
    .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER }, \
    .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_GRAY, \
    .noFlip = FALSE, \
}