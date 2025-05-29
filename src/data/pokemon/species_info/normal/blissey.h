#pragma once

#define SPECIES_INFO_BLISSEY \
{ \
    .baseHP        = 255, \
    .baseAttack    = 10, \
    .baseDefense   = 10, \
    .baseSpeed     = 55, \
    .baseSpAttack  = 75, \
    .baseSpDefense = 135, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 30, \
    .expYield = 255, \
    .evYield_HP        = 2, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_LUCKY_EGG, \
    .genderRatio = MON_FEMALE, \
    .eggCycles = 40, \
    .friendship = 140, \
    .growthRate = GROWTH_FAST, \
    .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY }, \
    .abilities = {ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PINK, \
    .noFlip = FALSE, \
}