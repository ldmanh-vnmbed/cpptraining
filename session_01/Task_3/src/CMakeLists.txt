#include
include_directories(${CMAKE_SOURCE_DIR}/include/)

#get all file cpp and add to global_src_files library
file(GLOB SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/lib/*.cpp)
add_library(global_src_files ${SOURCE_FILES})

#executable file main
add_executable(${PROJECT_NAME} 
                ${CMAKE_CURRENT_SOURCE_DIR}/cmake_multiple_sources/main.cpp 
                )

add_executable(task_3_test test/task_3_gtest.cpp)
target_link_libraries(task_3_test global_src_files)
target_link_libraries(task_3_test -lpng16)
target_link_libraries(task_3_test -lgtest)

#linker link all cpp file and external library
target_link_libraries(${PROJECT_NAME} global_src_files)
target_link_libraries(${PROJECT_NAME} -lpng16)