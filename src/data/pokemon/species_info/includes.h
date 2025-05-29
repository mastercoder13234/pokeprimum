#pragma once
// Maximum value for a female Pokémon is 254 (MON_FEMALE) which is 100% female.
// 255 (MON_GENDERLESS) is reserved for genderless Pokémon.
#define PERCENT_FEMALE(percent) min(254, ((percent * 255) / 100))

#include <pokemon.h>
#include <item.h>
#include <constants/abilities.h>
#include <constants/pokemon.h>
#include <gba/defines.h>
