#pragma once

#include <cassert>

#include "definitions.hpp"

namespace rc
{

enum class TileType : char
{
    WANZU,
    PINZU,
    SOUZU,
    JIHAI
};

enum class TileValue : char
{
    NO_VALUE,
    II,
    RYAN,
    SAN,
    SUU,
    UU,
    ROU,
    CHII,
    PAA,
    KYUU
};

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
    NAN_,
    SHAA,
    PEI,
    HAKU,
    HATSU,
    CHUN,
    NONE
};

inline TileType tile_to_type(Tile tile)
{
    assert(tile != Tile::NONE);

    return TileType(enum_to_char(tile) / 9);
}

inline TileValue tile_to_value(Tile tile)
{
    assert(tile != Tile::NONE);
    
    return (tile < Tile::TON) ? TileValue(1 + enum_to_char(tile) % 9) : TileValue::NO_VALUE;
}

} // namespace rc
