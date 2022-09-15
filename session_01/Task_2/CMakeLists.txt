cmake_minimum_required(VERSION 3.10)
project(task_2 VERSION 1.0)


include_directories(${CMAKE_SOURCE_DIR}/include/
                    ${CMAKE_SOURCE_DIR}/src/test/googletest/googletest/include/   
)

add_subdirectory(src)