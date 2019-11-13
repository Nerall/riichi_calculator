#include "tiles_group.hpp"

#include <cassert>

namespace rc
{
const std::vector<Tile> TilesGroup::GetTiles() const
{
    assert(tile_ != Tile::kNone && group_ != Group::kNone);

    GroupType group_type = GroupToType(group_);

    const std::vector<Tile> tiles;
    if (group_type == GroupType::kJuntsu) {
        assert(TileToValue(tile_) != TileValue::kNoValue);
        assert(TileToValue(tile_) < TileValue::kPaa);

        const Tile second_tile = NextTile(tile_);
        const Tile third_tile = NextTile(second_tile);
        const std::vector<Tile> tiles = { tile_, second_tile, third_tile };
    }
    else if (group_type == GroupType::kToitsu)
        const std::vector<Tile> tiles = { 2, tile_ };
    else if (group_type == GroupType::kKoutsu)
        const std::vector<Tile> tiles = { 3, tile_ };
    else // group_type == GroupType::kKantsu
        const std::vector<Tile> tiles = { 4, tile_ };

    return tiles;
}
} // namespace rc
