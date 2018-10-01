project(Cpp_DesignPatterns)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")
cmake_minimum_required(VERSION 2.8)
#aux_source_directory(. composite SRC_LIST)
set(APPLICATION_SOURCE
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp

    CACHE INTERNAL "Liste mit allen Sourcen der Anwendung."
)
add_subdirectory( "${PROJECT_SOURCE_DIR}/command" )
add_subdirectory( "${PROJECT_SOURCE_DIR}/composite" )
add_subdirectory( "${PROJECT_SOURCE_DIR}/decorator" )
add_subdirectory( "${PROJECT_SOURCE_DIR}/observer" )
add_subdirectory( "${PROJECT_SOURCE_DIR}/strategy" )
#add_executable(${PROJECT_NAME} ${SRC_LIST})

add_executable(${PROJECT_NAME} ${APPLICATION_SOURCE})
