#pragma once

#define SPECIES_INFO_KOFFING \
{ \
    .baseHP        = 40, \
    .baseAttack    = 65, \
    .baseDefense   = 95, \
    .baseSpeed     = 35, \
    .baseSpAttack  = 60, \
    .baseSpDefense = 45, \
    .types = { TYPE_POISON, TYPE_POISON }, \
    .catchRate = 190, \
    .expYield = 114, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_SMOKE_BALL, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS }, \
    .abilities = {ABILITY_LEVITATE, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}