cmake_minimum_required(VERSION 3.5)

project(BiznesCafe VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        pictures.qrc
        form.cpp
        form.h
        form.ui
        zzvitForm.h
        zzvitform.cpp
        zzvitform.ui
        sellform.cpp
        sellform.h
        sellform.ui

        Report.cpp
        Report.h
        nlohmann/json.hpp
        Accounting.h
        Accounting.cpp
        Overdue.cpp
        Overdue.h
        Selling.cpp
        Selling.h

        settingform.cpp
        settingform.h
        settingform.ui
        xzvitForm.h
        xzvitform.cpp
        xzvitform.ui
        menuaccform.cpp
        menuaccform.h
        menuaccform.ui
        datafromjsonform.cpp
        datafromjsonform.h
        datafromjsonform.ui
        goodsform.cpp
        goodsform.h
        goodsform.ui
        addingform.cpp
        addingform.h
        addingform.ui
        paymethodform.cpp
        paymethodform.h
        paymethodform.ui
        checkform.ui
        checkform.h
        checkform.cpp

        macchiatoform.cpp
        macchiatoform.h
        macchiatoform.ui
        cappuccinoform.cpp
        cappuccinoform.h
        cappuccinoform.ui
        latteform.cpp
        latteform.h
        latteform.ui
        flatwhform.cpp
        flatwhform.h
        flatwhform.ui
        espressoform.cpp
        espressoform.h
        espressoform.ui
        doppioform.cpp
        doppioform.h
        doppioform.ui
        rafform.cpp
        rafform.h
        rafform.ui
        americanoform.cpp
        americanoform.h
        americanoform.ui
        cocoaform.cpp
        cocoaform.h
        cocoaform.ui
        americ_w_mform.cpp
        americ_w_mform.h
        americ_w_mform.ui
        tea_blackform.cpp
        tea_blackform.h
        tea_blackform.ui
        tea_greenform.cpp
        tea_greenform.h
        tea_greenform.ui

        eclairsform.cpp
        eclairsform.h
        eclairsform.ui

        macaroonform.cpp
        macaroonform.h
        macaroonform.ui
        peanutsform.cpp
        peanutsform.h
        peanutsform.ui
        profiterolesform.cpp
        profiterolesform.h
        profiterolesform.ui
        candiesform.cpp
        candiesform.h
        candiesform.ui
        croissantform.cpp
        croissantform.h
        croissantform.ui
        piesform.cpp
        piesform.h
        piesform.ui
        quicheform.cpp
        quicheform.h
        quicheform.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(BiznesCafe
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET BiznesCafe APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(BiznesCafe SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(BiznesCafe
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(BiznesCafe PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(BiznesCafe PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS BiznesCafe
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(BiznesCafe)
endif()
