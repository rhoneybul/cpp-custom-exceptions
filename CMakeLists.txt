cmake_minimum_required( VERSION 3.14 )
project( cpp_custom_exceptions )

include_directories(include/)

file(GLOB SOURCES "src/*.cpp")

add_executable( cpp_custom_exceptions ${SOURCES} )