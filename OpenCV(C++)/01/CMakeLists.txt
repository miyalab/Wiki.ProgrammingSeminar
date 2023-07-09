cmake_minimum_required(VERSION 3.8)
project(programming_seminar_opencv_01)

set(CMAKE_CXX_FLAGS "-std=c++17 ${CMAKE_CXX_FLAGS}")
include_directories(/usr/local/include)
link_directories(/usr/local/lib)

# ビルドに関する設定
set(EXECUTABLE 
    imread
)
set(DEPENDENT_LIBS 
    opencv_core;
    opencv_highgui;
    opencv_imgcodecs)
add_executable(${EXECUTABLE} src/${EXECUTABLE}.cpp)
target_link_libraries(${EXECUTABLE} ${DEPENDENT_LIBS})