cmake_minimum_required(VERSION 3.27)
project(curves)

set(CMAKE_CXX_STANDARD 14)

find_package(OpenMP REQUIRED)



include_directories(.)
include_directories(containers)
include_directories(geometry)

add_executable(curves
        containers/circlesContainer.cpp
        containers/circlesContainer.h
        containers/curvesContainer.cpp
        containers/curvesContainer.h
        geometry/curves/circle.cpp
        geometry/curves/circle.h
        geometry/curves/curve.h
        geometry/curves/ellipse.cpp
        geometry/curves/ellipse.h
        geometry/curves/helix.cpp
        geometry/curves/helix.h
        geometry/point.h
        main.cpp
        util.h
        geometry/point.cpp)

if(OPENMP_FOUND)
    message(STATUS "OpenMP found")
    # Добавляем флаг компилятору
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")

    # Добавляем библиотеки для компоновщика
    target_link_libraries(curves PRIVATE ${OpenMP_CXX_LIBRARIES})
else()
    message(WARNING "OpenMP not found")
endif()
