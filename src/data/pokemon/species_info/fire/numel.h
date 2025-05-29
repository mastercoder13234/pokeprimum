#pragma once

#define SPECIES_INFO_NUMEL \
{ \
    .baseHP        = 60, \
    .baseAttack    = 60, \
    .baseDefense   = 40, \
    .baseSpeed     = 35, \
    .baseSpAttack  = 65, \
    .baseSpDefense = 45, \
    .types = { TYPE_FIRE, TYPE_GROUND }, \
    .catchRate = 255, \
    .expYield = 88, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 1, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_RAWST_BERRY, \
    .itemRare   = ITEM_RAWST_BERRY, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_OBLIVIOUS, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}