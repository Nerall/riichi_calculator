include_directories(
)

set(SOURCES
    main.cpp
)

set(LIBS
)

add_executable(riichi_calculator ${SOURCES})
target_link_libraries(riichi_calculator ${LIBS})
