cmake_minimum_required(VERSION 3.5)

project(Lab0 LANGUAGES C)

add_executable(Lab0 main.c)

install(TARGETS Lab0
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
