include_directories(
)

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.hpp *.cpp)

set(LIBS
)

add_executable(riichi_calculator ${SOURCES})
target_link_libraries(riichi_calculator ${LIBS})
