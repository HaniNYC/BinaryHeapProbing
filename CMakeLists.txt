# if (UNIX)
#     SET (CMAKE_C_COMPILER             "/usr/bin/clang")
#     SET (CMAKE_C_FLAGS                "-Wall -std=c99")
#     SET (CMAKE_C_FLAGS_DEBUG          "-g")
#     SET (CMAKE_C_FLAGS_MINSIZEREL     "-Os -DNDEBUG")
#     SET (CMAKE_C_FLAGS_RELEASE        "-O4 -DNDEBUG")
#     SET (CMAKE_C_FLAGS_RELWITHDEBINFO "-O2 -g")
# 
#     SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
#     SET (CMAKE_CXX_FLAGS                "-Wall")
#     SET (CMAKE_CXX_FLAGS_DEBUG          "-g")
#     SET (CMAKE_CXX_FLAGS_MINSIZEREL     "-Os -DNDEBUG")
#     SET (CMAKE_CXX_FLAGS_RELEASE        "-O4 -DNDEBUG")
#     SET (CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2 -g")
# 
#     SET (CMAKE_AR      "/usr/bin/llvm-ar")
#     SET (CMAKE_LINKER  "/usr/bin/llvm-ld")
#     SET (CMAKE_NM      "/usr/bin/llvm-nm")
#     SET (CMAKE_OBJDUMP "/usr/bin/llvm-objdump")
#     SET (CMAKE_RANLIB  "/usr/bin/llvm-ranlib")
# 
# 
# endif(UNIX)
# 



cmake_minimum_required(VERSION 2.8)
project(335_4)
add_definitions(-g)

# FIND_PACKAGE(Boost 1.50.0 REQUIRED)
# INCLUDE_DIRECTORIES (
#     ${Boost_INCLUDE_DIRS}
# )


add_executable(335_4 main.cpp QuadraticProbing.cpp)


install(TARGETS 335_4 RUNTIME DESTINATION bin)