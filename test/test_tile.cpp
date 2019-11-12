#include <catch2/catch.hpp>

#include "tile.hpp"

SCENARIO("Tiles have correct type and value") {
    GIVEN("A 1m tile") {
        rc::Tile iiwan = rc::Tile(rc::Tile::IIWAN);
        REQUIRE(tile_to_type(iiwan) == rc::TileType::WANZU);
        REQUIRE(tile_to_value(iiwan) == rc::TileValue::II);
    }
    GIVEN("A 5p tile") {
        rc::Tile uupin = rc::Tile(rc::Tile::UUPIN);
        REQUIRE(tile_to_type(uupin) == rc::TileType::PINZU);
        REQUIRE(tile_to_value(uupin) == rc::TileValue::UU);
    }
    GIVEN("A 9s tile") {
        rc::Tile kyuusou = rc::Tile(rc::Tile::KYUUSOU);
        REQUIRE(tile_to_type(kyuusou) == rc::TileType::SOUZU);
        REQUIRE(tile_to_value(kyuusou) == rc::TileValue::KYUU);
    }
    GIVEN("A 1z tile") {
        rc::Tile ton = rc::Tile(rc::Tile::TON);
        REQUIRE(tile_to_type(ton) == rc::TileType::JIHAI);
        REQUIRE(tile_to_value(ton) == rc::TileValue::NO_VALUE);
    }
    GIVEN("A 7z tile") {
        rc::Tile chun = rc::Tile(rc::Tile::CHUN);
        REQUIRE(tile_to_type(chun) == rc::TileType::JIHAI);
        REQUIRE(tile_to_value(chun) == rc::TileValue::NO_VALUE);
    }
}