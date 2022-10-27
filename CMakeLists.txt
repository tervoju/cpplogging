cmake_minimum_required(VERSION 3.16.0)
project(cpplogging VERSION 0.1.0)

include(CTest)
enable_testing()
ADD_DEFINITIONS(-DBUILD_SHARED_LIBS=ON)

ADD_DEFINITIONS(-DBOOST_LOG_DYN_LINK)

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREAD ON)

find_package(Boost 1.71 REQUIRED COMPONENTS log_setup log)
INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})

add_executable(cpplogging main.cpp logging.cpp logging.h)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

TARGET_LINK_LIBRARIES(cpplogging ${Boost_LIBRARIES})
