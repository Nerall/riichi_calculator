cmake_minimum_required(VERSION 3.15)
project(riichi_calculator LANGUAGES CXX)

# Add local project module path so CMake includes custom CMake modules
list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/Modules")

include(CTest)

# Project flags
    add_compile_options(-pedantic -Werror -Wall -Wextra -std=c++17)
# Debug flags
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -DDEBUG
    -fsanitize=address -g3 -fno-omit-frame-pointer")
# Release flags
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DNDEBUG -Ofast")

# Header folders
include_directories(
    src
)

# Objects
set(SOURCES
    src/main.cpp
)

# Libs
set(LIBS
)

# riichi_calculator
add_executable(riichi_calculator ${SOURCES})
target_link_libraries(riichi_calculator ${LIBS})



find_package(Catch2 REQUIRED)

# tests
add_executable(unit_tests
    test/main.cpp
    test/empty_test.cpp
)
target_link_libraries(unit_tests Catch2::Catch2)

include(ParseAndAddCatchTests)
ParseAndAddCatchTests(unit_tests)



# Doc rule
add_custom_target(doc
    COMMAND doxygen ../docs/doxyfile_riichi_calculator
    COMMENT "Generating documentation..."
)
