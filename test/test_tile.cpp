#include <catch2/catch.hpp>

#include "tile.hpp"

SCENARIO("Tiles have correct type and value") {
    GIVEN("A 1m tile") {
        rc::Tile iiwan = rc::Tile::kIiwan;
        REQUIRE(rc::TileToType(iiwan) == rc::TileType::kWanzu);
        REQUIRE(rc::TileToValue(iiwan) == rc::TileValue::kIi);
    }
    GIVEN("A 5p tile") {
        rc::Tile uupin = rc::Tile::kUupin;
        REQUIRE(rc::TileToType(uupin) == rc::TileType::kPinzu);
        REQUIRE(rc::TileToValue(uupin) == rc::TileValue::kUu);
    }
    GIVEN("A 9s tile") {
        rc::Tile kyuusou = rc::Tile::kKyuusou;
        REQUIRE(rc::TileToType(kyuusou) == rc::TileType::kSouzu);
        REQUIRE(rc::TileToValue(kyuusou) == rc::TileValue::kKyuu);
    }
    GIVEN("A 1z tile") {
        rc::Tile ton = rc::Tile::kTon;
        REQUIRE(TileToType(ton) == rc::TileType::kJihai);
        REQUIRE(rc::TileToValue(ton) == rc::TileValue::kNoValue);
    }
    GIVEN("A 7z tile") {
        rc::Tile chun = rc::Tile::kChun;
        REQUIRE(rc::TileToType(chun) == rc::TileType::kJihai);
        REQUIRE(rc::TileToValue(chun) == rc::TileValue::kNoValue);
    }
}
