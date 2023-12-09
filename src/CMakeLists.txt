cmake_minimum_required(VERSION 3.22)
project(QuickScroller)

set(CMAKE_DEBUG_POSTFIX d)

find_package(
  SFML COMPONENTS 
    system 
    window 
    graphics 
    network 
    audio 
  REQUIRED
)

file(GLOB SOURCES CONFIGURE_DEPENDS "*.hpp" "*.cpp")
add_executable("${CMAKE_PROJECT_NAME}" ${SOURCES})
set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

target_link_libraries(
  ${CMAKE_PROJECT_NAME} 
    sfml-system 
    sfml-window 
    sfml-graphics 
    sfml-network 
    sfml-audio
)
