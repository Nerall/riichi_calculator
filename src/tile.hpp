#pragma once

#include <cassert>

#include "definitions.hpp"

namespace rc
{

enum class Tile : char
{
    IIWAN,
    RYANWAN,
    SANWAN,
    SUUWAN,
    UUWAN,
    ROUWAN,
    CHIIWAN,
    PAAWAN,
    KYUUWAN,
    IIPIN,
    RYANPIN,
    SANPIN,
    SUUPIN,
    UUPIN,
    ROUPIN,
    CHIIPIN,
    PAAPIN,
    KYUUPIN,
    IISOU,
    RYANSOU,
    SANSOU,
    SUUSOU,
    UUSOU,
    ROUSOU,
    CHIISOU,
    PAASOU,
    KYUUSOU,
    TON,
    NAN,
    SHAA,
    PEI,
    HAKU,
    HATSU,
    CHUN,
    NONE
};

enum class TileType : char
{
    WANZU,
    PINZU,
    SOUZU,
    JIHAI
};

inline TileType tile_to_type(Tile tile)
{
    assert(tile != Tile::NONE);

    return TileType(enum_to_char(tile) / 9);
}
}