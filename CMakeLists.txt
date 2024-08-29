cmake_minimum_required(VERSION 3.13)
project(RollerCoaster)

set(CMAKE_CXX_STANDARD 17)

# Specify library paths

set(GLFW_ROOT ${CMAKE_SOURCE_DIR}/libs/glfw)
set(GLEW_ROOT ${CMAKE_SOURCE_DIR}/libs/glew)

# Include directories
include_directories(${GLFW_ROOT}/include)
include_directories(${GLEW_ROOT}/include)

# Find OpenGL package
find_package(OpenGL REQUIRED)

# Add all files
file(GLOB SOURCE_FILES
    "${CMAKE_SOURCE_DIR}/src/*.cpp"
)

# Add the executable
add_executable(run.exe ${SOURCE_FILES})

# Link libraries
target_link_libraries(run.exe OpenGL::GL ${GLFW_ROOT}/lib/libglfw.dylib ${GLEW_ROOT}/lib/libGLEW.dylib)