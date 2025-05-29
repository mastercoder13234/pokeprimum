#pragma once

#define SPECIES_INFO_FARFETCHD \
{ \
    .baseHP        = 52, \
    .baseAttack    = 65, \
    .baseDefense   = 55, \
    .baseSpeed     = 60, \
    .baseSpAttack  = 58, \
    .baseSpDefense = 62, \
    .types = { TYPE_NORMAL, TYPE_FLYING }, \
    .catchRate = 45, \
    .expYield = 94, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 1, \
    .evYield_Defense   = 0, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_STICK, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_KEEN_EYE, ABILITY_INNER_FOCUS}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_BROWN, \
    .noFlip = FALSE, \
}