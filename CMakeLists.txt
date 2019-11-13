cmake_minimum_required(VERSION 3.15)
project(riichi_calculator LANGUAGES CXX)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE=Release ... FORCE)
endif(NOT CMAKE_BUILD_TYPE)

# Project flags
    add_compile_options(-pedantic -Werror -Wall -Wextra -std=c++17)
# Debug flags
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -DDEBUG \
-fsanitize=address -g3 -fno-omit-frame-pointer")
# Release flags
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DNDEBUG -Ofast")

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
enable_testing()


# riichi_calculator
add_subdirectory(src)


# unit_tests
if(CMAKE_BUILD_TYPE MATCHES Debug)
    add_subdirectory(test)
endif(CMAKE_BUILD_TYPE MATCHES Debug)


# Doc rule
add_custom_target(doc
    COMMAND doxygen ../docs/doxyfile_riichi_calculator
    COMMENT "Generating documentation..."
)
