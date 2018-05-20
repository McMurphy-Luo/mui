cmake_minimum_required(VERSION 3.5)
project(mui C CXX)
set(CMAKE_CXX_STANDARD 11)
if(${UNIX})
    set(CMAKE_CXX_FLAGS "-Werror -Wall -O0 -g")
endif(${UNIX})
set(lib_output_dir ${PROJECT_BINARY_DIR}/build/lib)
set(bin_output_dir ${PROJECT_BINARY_DIR}/build/test)
set(source_dir ${PROJECT_SOURCE_DIR}/src)
set(test_source_dir ${PROJECT_SOURCE_DIR}/test)

include_directories(${source_dir})
list(APPEND source
        ${source_dir}/graphics/Base.cpp
        ${source_dir}/graphics/Base.h
        ${source_dir}/graphics/Ellipse.h
        ${source_dir}/graphics/Ellipse.cpp
        ${source_dir}/graphics/Line.h
        ${source_dir}/graphics/Line.cpp
        ${source_dir}/graphics/Polygon.h
        ${source_dir}/graphics/Polygon.cpp
        ${source_dir}/graphics/Rectangle.h
        ${source_dir}/graphics/Rectangle.cpp
        ${source_dir}/graphics/Scene.h
        ${source_dir}/graphics/Scene.cpp)
list(APPEND test_source
        ${test_source_dir}/main.cpp)
add_executable(test ${test_source})
add_library(mui ${source})

target_compile_definitions(mui PUBLIC "MUI")
if(${WIN32})
    target_compile_definitions(mui PUBLIC "UNICODE" "_UNICODE")
    target_compile_definitions(test PUBLIC "UNICODE" "_UNICODE")
    target_link_libraries(mui d2d1.lib dwrite.lib ComCtl32.lib)
    set_target_properties(test PROPERTIES WIN32_EXECUTABLE TRUE)
endif(${WIN32})

set_target_properties(mui PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${lib_output_dir})
set_target_properties(test PROPERTIES LINKER_LANGUAGE CXX)
