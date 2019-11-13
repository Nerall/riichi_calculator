#include "tile.hpp"

#include <cassert>

namespace rc {

TileType TileToType(Tile tile)
{
    assert(tile != Tile::kNone);

    return TileType(EnumToChar(tile) / 9);
}

TileValue TileToValue(Tile tile)
{
    assert(tile != Tile::kNone);
    
    if (tile >= Tile::kTon)
        return TileValue::kNoValue;

    return TileValue(1 + EnumToChar(tile) % 9);
}

Tile NextTile(Tile tile)
{
    assert(tile != Tile::kNone);

    return kNextTile[EnumToChar(tile)];
}
} // namespace rc
