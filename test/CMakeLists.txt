include(CTest)
find_package(Catch2 REQUIRED)

add_executable(unit_tests
    main.cpp
    empty_test.cpp
)
target_link_libraries(unit_tests Catch2::Catch2)

include(ParseAndAddCatchTests)
ParseAndAddCatchTests(unit_tests)
