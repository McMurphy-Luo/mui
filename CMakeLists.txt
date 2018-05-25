cmake_minimum_required(VERSION 3.5)
project(mui C CXX)
set(CMAKE_CXX_STANDARD 11)
if(${UNIX})
    set(CMAKE_CXX_FLAGS "-Werror -Wall -O0 -g")
endif(${UNIX})
set(output_dir ${PROJECT_SOURCE_DIR}/build)
SET( CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${output_dir})
SET( CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${output_dir})
SET( CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG ${output_dir})
SET( CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE ${output_dir})
SET( CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${output_dir})
SET( CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE ${output_dir})

set(source_dir ${PROJECT_SOURCE_DIR}/src)
set(test_source_dir ${PROJECT_SOURCE_DIR}/test)

include_directories(${source_dir})
list(APPEND source
        ${source_dir}/common/Point.cpp
        ${source_dir}/common/Size.cpp
        ${source_dir}/common/Event.cpp
        ${source_dir}/common/Color.cpp
        ${source_dir}/common/Utf8String.cpp
        ${source_dir}/graphics/Base.cpp
        ${source_dir}/graphics/Ellipse.cpp
        ${source_dir}/graphics/Line.cpp
        ${source_dir}/graphics/Polygon.cpp
        ${source_dir}/graphics/Rectangle.cpp
        ${source_dir}/graphics/Scene.cpp
        ${source_dir}/render/Rectangle.cpp
        ${source_dir}/render/direct2d/Rectangle.cpp
        )
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

set_target_properties(mui PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${output_dir})
set_target_properties(test PROPERTIES LINKER_LANGUAGE CXX)
