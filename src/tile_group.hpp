#pragma once

#include <vector>

namespace rc
{

    class TilesGroup
    {
    public:
        TilesGroup(Tile tile, Group group)
        : tile_(tile),
        , group_(group)
        {}

        const std::vector<Tile> get_tiles();
 
        inline Group get_group() { return group_; }

        inline GroupType get_group_type() { return group_to_type(group_)} ;

    private:
        Tile tile_; // First tile of the group
        Group group_;
    }

} // namespace rc
