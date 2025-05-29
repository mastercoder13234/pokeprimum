#pragma once

#define SPECIES_INFO_MUK \
{ \
    .baseHP        = 105, \
    .baseAttack    = 105, \
    .baseDefense   = 75, \
    .baseSpeed     = 50, \
    .baseSpAttack  = 65, \
    .baseSpDefense = 100, \
    .types = { TYPE_POISON, TYPE_POISON }, \
    .catchRate = 75, \
    .expYield = 157, \
    .evYield_HP        = 1, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_NUGGET, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS }, \
    .abilities = {ABILITY_STENCH, ABILITY_STICKY_HOLD}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_PURPLE, \
    .noFlip = FALSE, \
}