cmake_minimum_required(VERSION 3.24)
project(rsnhybridplugin VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)
FetchContent_Declare(
    endstone
    GIT_REPOSITORY https://github.com/EndstoneMC/endstone.git
    GIT_TAG v0.11.11
)
FetchContent_MakeAvailable(endstone)

file(GLOB_RECURSE SRC_FILES "src/*.cpp")
endstone_add_plugin(rsnhybridplugin ${SRC_FILES})
target_include_directories(rsnhybridplugin PRIVATE include)
