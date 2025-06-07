cmake_minimum_required(VERSION 3.31)
project(cmake_doxygen LANGUAGES NONE)

find_package(Doxygen REQUIRED)

set(PROJECT_NAME "${CMAKE_PROJECT_NAME}")
set(OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/docs")
set(INPUT_DIR "${CMAKE_SOURCE_DIR}")
set(CMAKE_DOXYGEN "${CMAKE_CURRENT_SOURCE_DIR}")
set(DOXYGEN_AWESOME "${CMAKE_CURRENT_SOURCE_DIR}/docs/doxygen-awesome")

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in
               ${CMAKE_BINARY_DIR}/Doxyfile
               @ONLY)

add_custom_target(doc
    COMMAND ${DOXYGEN_EXECUTABLE} ${CMAKE_BINARY_DIR}/Doxyfile
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Generating documentation for ${PROJECT_NAME}"
)