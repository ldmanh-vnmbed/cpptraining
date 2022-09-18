file(GLOB SOURCE "lib/*.cpp")
set(GLOB SOURCE_FILES lib/*.cpp)
add_library(mylib ${SOURCE})

set(SRC_MAIN ${CMAKE_CURRENT_SOURCE_DIR}/cmake_multiple_sources/main.cpp)
add_executable(${PROJECT_NAME}
                ${SRC_MAIN}
                )

target_link_libraries(${PROJECT_NAME} mylib)