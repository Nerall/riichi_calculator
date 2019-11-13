#pragma once

#include <vector>

#include "tile.hpp"
#include "group.hpp"

namespace rc
{

class TilesGroup
{
public:
    TilesGroup(Tile tile, Group group)
    : tile_(tile)
    , group_(group)
    {}

    const std::vector<Tile> GetTiles() const;

private:
    Tile tile_; // First tile of the group
    Group group_;
};
} // namespace rc
