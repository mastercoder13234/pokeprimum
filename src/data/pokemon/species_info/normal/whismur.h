#pragma once

#define SPECIES_INFO_WHISMUR \
{ \
    .baseHP        = 64, \
    .baseAttack    = 51, \
    .baseDefense   = 23, \
    .baseSpeed     = 28, \
    .baseSpAttack  = 51, \
    .baseSpDefense = 23, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 190, \
    .expYield = 68, \
    .evYield_HP        = 1, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_CHESTO_BERRY, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_SLOW, \
    .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_SOUNDPROOF, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PINK, \
    .noFlip = FALSE, \
}