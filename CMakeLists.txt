# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: BSD-3-Clause

cmake_minimum_required(VERSION 3.16)
project(momiscreen LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Qml)

qt_add_executable(momiscreen
    main.cpp
)

set_target_properties(momiscreen PROPERTIES
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE TRUE
)

target_link_libraries(momiscreen PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Qml
)

# Resources:
set(momiscreen_resource_files
    "main.qml"
    "MomiBar.qml"
    "DateBox.qml"
    "images/12_Footer.png"
    "images/14_Logo.png"
    "images/15_Maps.png"
    "images/16_Multimedia.png"
    "images/17_Dashboard.png"
    "images/18_Setting.png"
    "images/19_Shadow.png"
)

qt6_add_resources(momiscreen "momiscreen"
    PREFIX
        "/"
    FILES
        ${momiscreen_resource_files}
)

install(TARGETS momiscreen
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
