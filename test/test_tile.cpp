#include <catch2/catch.hpp>

#include "tile.hpp"

SCENARIO("Tiles have correct type") {
    GIVEN("A 5s tile") {
        rc::Tile uusou = rc::Tile(rc::Tile::UUSOU);
        REQUIRE(tile_to_type(uusou) == rc::TileType::SOUZU);
    }
    GIVEN("A 7z tile") {
        rc::Tile chun = rc::Tile(rc::Tile::CHUN);
        REQUIRE(tile_to_type(chun) == rc::TileType::JIHAI);
    }
}