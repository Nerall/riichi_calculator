include(CTest)
find_package(Catch2 REQUIRED)

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.hpp *.cpp)

set(SOURCES ${TEST_SOURCES})

add_executable(unit_tests ${SOURCES})
target_link_libraries(unit_tests Catch2::Catch2)

include(ParseAndAddCatchTests)
ParseAndAddCatchTests(unit_tests)
