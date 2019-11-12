#include "tile_group.hpp"

#include <cassert>


namespace rc
{

    std::vector<Tile> TileGroup::get_tiles();
    {
        assert(tile_ != Tile::NONE);

        GroupType group_type = get_group_type();
        assert(group_type != GroupType::NONE)

        const std::vector<Tile> tiles;
        if (group_type == GroupType::JUNTSU) {
            assert(tile_to_value(tile_) < TileValue::PAA);

            tiles = std::vector<Tile>(tile_, tile_ + 1, tile_ + 2));
        }
        else if (group_type == GroupType::TOITSU)
            tiles = std::vector<Tile>(tile_, tile_);

        else if (group_type == GroupType::KOUTSU)
            tiles = std::vector<Tile>(tile_, tile_, tile_);

        else // group_type == GroupType::KANTSU
            tiles = std::vector<Tile>(tile_, tile_, tile_, tile_);

        return tiles
    }
} // namespace rc
