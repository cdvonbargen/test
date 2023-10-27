cmake_minimum_required(VERSION 3.20)

project(test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(fmt 6.1.2 REQUIRED)

set(EXAMPLE_DEP_INCLUDES
    ${FMT_ROOT}/lib/cmake/include)
set(EXAMPLE_DEP_LIBS
    fmt::fmt)

set(EXE_TARGET example_app)
add_executable(${EXE_TARGET} main.cpp)
set(EXE_DEP_INCLUDES ${EXAMPLE_DEP_INCLUDES})
target_include_directories(${EXE_TARGET} PRIVATE ${EXE_DEP_INCLUDES})
target_link_libraries(${EXE_TARGET} PRIVATE ${EXAMPLE_DEP_LIBS})
