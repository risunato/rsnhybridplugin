cmake_minimum_required(VERSION 3.24)
project(rsnhybridplugin VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(endstone REQUIRED)

file(GLOB_RECURSE SRC_FILES "src/*.cpp")
add_library(rsnhybridplugin MODULE ${SRC_FILES})
target_include_directories(rsnhybridplugin PRIVATE include)
target_link_libraries(rsnhybridplugin PRIVATE endstone::core)
set_target_properties(rsnhybridplugin PROPERTIES PREFIX "")
