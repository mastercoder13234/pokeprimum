#pragma once

#define SPECIES_INFO_SANDSHREW \
{ \
    .baseHP        = 50, \
    .baseAttack    = 75, \
    .baseDefense   = 85, \
    .baseSpeed     = 40, \
    .baseSpAttack  = 20, \
    .baseSpDefense = 30, \
    .types = { TYPE_GROUND, TYPE_GROUND }, \
    .catchRate = 255, \
    .expYield = 93, \
    .evYield_HP        = 0, \
    .evYield_Attack    = 0, \
    .evYield_Defense   = 1, \
    .evYield_Speed     = 0, \
    .evYield_SpAttack  = 0, \
    .evYield_SpDefense = 0, \
    .itemCommon = ITEM_NONE, \
    .itemRare   = ITEM_QUICK_CLAW, \
    .genderRatio = PERCENT_FEMALE(50), \
    .eggCycles = 20, \
    .friendship = STANDARD_FRIENDSHIP, \
    .growthRate = GROWTH_MEDIUM_FAST, \
    .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }, \
    .abilities = {ABILITY_SAND_VEIL, ABILITY_NONE}, \
    .safariZoneFleeRate = 0, \
    .bodyColor = BODY_COLOR_YELLOW, \
    .noFlip = FALSE, \
}