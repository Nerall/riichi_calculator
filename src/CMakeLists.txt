add_library(riichi_lib
    definitions.hpp
    tile.cpp tile.hpp
    group.cpp group.hpp
    tiles_group.cpp tiles_group.hpp)

target_include_directories(riichi_lib
    INTERFACE ./)

install(TARGETS riichi_lib
    ARCHIVE DESTINATION lib/)


add_executable(riichi_calculator
    main.cpp)

target_link_libraries(riichi_calculator
    PUBLIC riichi_lib)

