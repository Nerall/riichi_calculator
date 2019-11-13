#include <iostream>
#include <exception>

#include "tile.hpp"

/**
 * \mainpage Documentation Riichi calculator

 * \authors
 * Neral
 */

using namespace rc;

int main(int argc, char* argv[])
{
    if (argc > 1) {
        try {
            Tile tile = Tile(atoi(argv[1]));
            TileType tile_type = TileToType(tile);
            std::cout << (char)('0' + EnumToChar(tile_type)) << std::endl;
        }
        catch (const std::exception& e) {
            std::cerr << e.what();
        }
    }
    else
        std::cout << "Hello world!" << std::endl;

    return 0;
}
