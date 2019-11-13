#pragma once

#include <array>
#include "definitions.hpp"

namespace rc
{

enum class TileType : char
{
    kWanzu,
    kPinzu,
    kSouzu,
    kJihai
};

enum class TileValue : char
{
    kNoValue,
    kIi,
    kRyan,
    kSan,
    kSuu,
    kUu,
    kRou,
    kChii,
    kPaa,
    kKyuu
};

enum class Tile : char
{
    kIiwan,
    kRyanwan,
    kSanwan,
    kSuuwan,
    kUuwan,
    kRouwan,
    kChiiwan,
    kPaawan,
    kKyuuwan,
    kIipin,
    kRyanpin,
    kSanpin,
    kSuupin,
    kUupin,
    kRoupin,
    kChiipin,
    kPaapin,
    kKyuupin,
    kIisou,
    kRyansou,
    kSansou,
    kSuusou,
    kUusou,
    kRousou,
    kChiisou,
    kPaasou,
    kKyuusou,
    kTon,
    kNan,
    kShaa,
    kPei,
    kHaku,
    kHatsu,
    kChun,
    kNone
};

constexpr std::array<Tile, 34> kNextTile = { Tile::kRyanwan, Tile::kSanwan, Tile::kSuuwan, Tile::kUuwan, Tile::kRouwan,
    Tile::kChiiwan, Tile::kPaawan, Tile::kKyuuwan, Tile::kIiwan, Tile::kRyanpin, Tile::kSanpin, Tile::kSuupin,
    Tile::kUupin, Tile::kRoupin, Tile::kChiipin, Tile::kPaapin, Tile::kKyuupin, Tile::kIipin, Tile::kRyansou,
    Tile::kSansou, Tile::kSuusou, Tile::kUusou, Tile::kRousou, Tile::kChiisou, Tile::kPaasou, Tile::kKyuusou,
    Tile::kIisou, Tile::kNan, Tile::kShaa, Tile::kPei, Tile::kTon, Tile::kHatsu, Tile::kChun, Tile::kHaku };

TileType TileToType(Tile tile);

TileValue TileToValue(Tile tile);

Tile NextTile(Tile tile);

} // namespace rc
