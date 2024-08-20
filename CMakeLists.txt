cmake_minimum_required(VERSION 3.13)
project(RollerCoaster)

set(CMAKE_CXX_STANDARD 17)

# Specify GLFW path
# \ slash because MAC OS
set(GLFW_ROOT ${CMAKE_SOURCE_DIR}/libs/glfw)

# Find OpenGL package
find_package(OpenGL REQUIRED)

# Include directories
include_directories(${GLFW_ROOT}/include)

# Add the executable
add_executable(create.exe src/main.cpp)

# Link libraries
target_link_libraries(create.exe OpenGL::GL ${GLFW_ROOT}/lib/libglfw.dylib)

# Optionally specify the location of GLFW headers and library if necessary
link_directories(${GLFW_ROOT}/lib)