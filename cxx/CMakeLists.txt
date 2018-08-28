cmake_minimum_required (VERSION 2.8.11)
project (nix-example)

find_package(PkgConfig REQUIRED)
pkg_check_modules(NIX REQUIRED nixio)

add_executable (nix-example main.cc)
target_link_libraries(nix-example ${NIX_LIBRARIES})
target_include_directories(nix-example PUBLIC ${NIX_INCLUDE_DIRS})
target_compile_options(nix-example PUBLIC ${NIX_CFLAGS_OTHER})

MESSAGE(STATUS "READY. ")
MESSAGE(STATUS "NIX INCDIRS: ${NIX_INCLUDE_DIRS}")
MESSAGE(STATUS "NIX LIBS:    ${NIX_LIBRARIES}")
