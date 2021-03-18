cmake_minimum_required(VERSION 3.8)

# Using /std:c++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(MeasurePugiXml)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

add_subdirectory("lib/pugixml")

add_subdirectory(standardPugiXml)

# Display configuration summary
message(STATUS "")
message(STATUS "General configuration summary")
message(STATUS "--------------------------------")
message(STATUS "")
message(STATUS "  C compiler:                ${CMAKE_C_COMPILER}")
message(STATUS "  C++ compiler:              ${CMAKE_CXX_COMPILER}")
message(STATUS "  C flags:                   ${CMAKE_C_FLAGS}")
message(STATUS "  C++ flags:                 ${CMAKE_CXX_FLAGS}")
