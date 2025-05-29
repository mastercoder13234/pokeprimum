#pragma once

#define SPECIES_INFO_LOUDRED \
{ \
    .baseHP        = 84, \
    .baseAttack    = 71, \
    .baseDefense   = 43, \
    .baseSpeed     = 48, \
    .baseSpAttack  = 71, \
    .baseSpDefense = 43, \
    .types = { TYPE_NORMAL, TYPE_NORMAL }, \
    .catchRate = 120, \
    .expYield = 126, \
    .evYield_HP        = 2, \
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
    .bodyColor = BODY_COLOR_BLUE, \
    .noFlip = FALSE, \
}