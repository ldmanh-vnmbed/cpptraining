file(GLOB SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/lib/*.cpp)

# add_library(foo ${CMAKE_CURRENT_SOURCE_DIR}/lib/foo.cpp)
# add_library(pngpp ${CMAKE_CURRENT_SOURCE_DIR}/lib/pngpp_image.cpp)
# add_library(lodepng ${CMAKE_CURRENT_SOURCE_DIR}/lib/lodepng_image.cpp ${CMAKE_CURRENT_SOURCE_DIR}/lib/lodepng.cpp)

add_library(global_src_files ${SOURCE_FILES})

add_executable(${PROJECT_NAME} 
                ${CMAKE_CURRENT_SOURCE_DIR}/cmake_multiple_sources/main.cpp 
                ${SOURCE_FILES}
                )

target_link_libraries(${PROJECT_NAME} global_src_files)

# target_link_libraries(${PROJECT_NAME} foo)
# target_link_libraries(${PROJECT_NAME} pngpp)
# target_link_libraries(${PROJECT_NAME} lodepng)

target_link_libraries(${PROJECT_NAME} -lpng16) #link lib of png++ library. CMD: libpng.config --libs