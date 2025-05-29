#pragma once

#define SPECIES_INFO_JYNX \
{ \
    .baseHP        = 65, \
    .baseAttack    = 50, \
    .baseDefense   = 35, \
    .baseSpeed     = 95, \
    .baseSpAttack  = 115, \
    .baseSpDefense = 95, \
    .types = { TYPE_ICE, TYPE_PSYCHIC }, \
    .catchRate = 45, \
    .expYield = 137, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 2, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_ASPEAR_BERRY, \
    .itemRare   = ITEM_ASPEAR_BERRY, \
    .genderRatio = MON_FEMALE, \
    .eggCycles = 25, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE }, \
    .abilities = {ABILITY_OBLIVIOUS, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_RED, \
    .noFlip = FALSE, \
}