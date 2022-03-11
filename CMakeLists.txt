cmake_minimum_required(VERSION 3.10)
project(Example VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)
set(SOURCES
    src/DummyClass.cpp
    src/ExampleClass.cpp
)

add_library(${PROJECT_NAME}-lib STATIC ${SOURCES})
add_executable(${PROJECT_NAME} app/main.cpp)
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)