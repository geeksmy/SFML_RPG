cmake_minimum_required(VERSION 3.17)
project(SFML_RPG)

set(CMAKE_CXX_STANDARD 11)

IF (WIN32)
    # 添加头文件
    set(SFML_H ${CMAKE_SOURCE_DIR}/External/Windows/SFML/include)
    include_directories(${SFML_H})

    # 添加目标链接
    set(SFML_LINK_AUDIO ${CMAKE_SOURCE_DIR}/External/Windows/SFML/lib/sfml-audio.lib)
    set(SFML_LINK_GRAPHICS ${CMAKE_SOURCE_DIR}/External/Windows/SFML/lib/sfml-graphics.lib)
    set(SFML_LINK_NETWORK ${CMAKE_SOURCE_DIR}/External/Windows/SFML/lib/sfml-network.lib)
    set(SFML_LINK_SYSTEM ${CMAKE_SOURCE_DIR}/External/Windows/SFML/lib/sfml-system.lib)
    set(SFML_LINK_WINDOW ${CMAKE_SOURCE_DIR}/External/Windows/SFML/lib/sfml-window.lib)
    link_libraries(${GLEW_LINK} ${GLFW_LINK} ${SFML_LINK_GRAPHICS} ${SFML_LINK_AUDIO} ${SFML_LINK_NETWORK} ${SFML_LINK_SYSTEM} ${SFML_LINK_WINDOW})
ELSEIF (APPLE)
    # 添加头文件
    set(SFML_H ${CMAKE_SOURCE_DIR}/External/Mac/SFML/include)
    include_directories(${SFML_H})

    # 添加目标链接
    set(SFML_LINK_AUDIO ${CMAKE_SOURCE_DIR}/External/Mac/SFML/lib/libsfml-audio.2.5.1.dylib)
    set(SFML_LINK_GRAPHICS ${CMAKE_SOURCE_DIR}/External/Mac/SFML/lib/libsfml-graphics.2.5.1.dylib)
    set(SFML_LINK_NETWORK ${CMAKE_SOURCE_DIR}/External/Mac/SFML/lib/libsfml-network.2.5.1.dylib)
    set(SFML_LINK_SYSTEM ${CMAKE_SOURCE_DIR}/External/Mac/SFML/lib/libsfml-system.2.5.1.dylib)
    set(SFML_LINK_WINDOW ${CMAKE_SOURCE_DIR}/External/Mac/SFML/lib/libsfml-window.2.5.1.dylib)
    link_libraries(${GLEW_LINK} ${GLFW_LINK} ${SFML_LINK_GRAPHICS} ${SFML_LINK_AUDIO} ${SFML_LINK_NETWORK} ${SFML_LINK_SYSTEM} ${SFML_LINK_WINDOW})
ELSEIF (UNIX)
    # 添加头文件
    set(SFML_H ${CMAKE_SOURCE_DIR}/External/Linux/SFML/include)
    include_directories(${SFML_H})

    # 添加目标链接
    set(SFML_LINK_AUDIO ${CMAKE_SOURCE_DIR}/External/Linux/SFML/lib/libsfml-audio.so.2.5.1)
    set(SFML_LINK_GRAPHICS ${CMAKE_SOURCE_DIR}/External/Linux/SFML/lib/libsfml-graphics.so.2.5.1)
    set(SFML_LINK_NETWORK ${CMAKE_SOURCE_DIR}/External/Linux/SFML/lib/libsfml-network.so.2.5.1)
    set(SFML_LINK_SYSTEM ${CMAKE_SOURCE_DIR}/External/Linux/SFML/lib/libsfml-system.so.2.5.1)
    set(SFML_LINK_WINDOW ${CMAKE_SOURCE_DIR}/External/Linux/SFML/lib/libsfml-window.so.2.5.1)
    link_libraries(${GLEW_LINK} ${GLFW_LINK} ${SFML_LINK_GRAPHICS} ${SFML_LINK_AUDIO} ${SFML_LINK_NETWORK} ${SFML_LINK_SYSTEM} ${SFML_LINK_WINDOW})
ENDIF ()

add_executable(SFML_RPG main.cpp)