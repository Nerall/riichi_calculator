set(TEST_SOURCES
    test_tile.cpp
    test_group.cpp)

set(unit_tests unit_tests)

add_executable(unit_tests
    main.cpp
    ${TEST_SOURCES})

target_link_libraries(unit_tests
    PUBLIC riichi_lib)

target_include_directories(unit_tests
    PUBLIC ../include/catch2)
