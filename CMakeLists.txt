cmake_minimum_required(VERSION 3.26)
project(qt_win_app)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "C:/Qt/6.5.0/mingw_64")

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        Network
        REQUIRED)

add_executable(qt_win_app main.cpp windows/login/login.cpp windows/login/login.h windows/login/login.ui windows/company/projects.cpp windows/company/projects.h windows/company/projects.ui windows/adminPanel/adminpanel.cpp windows/adminPanel/adminpanel.h windows/adminPanel/adminpanel.ui windows/company/company.cpp windows/company/company.h windows/company/company.ui windows/orders/orders.cpp windows/orders/orders.h windows/orders/orders.ui windows/company/addcompany.cpp windows/company/addcompany.h windows/company/addcompany.ui windows/orders/addorder.cpp windows/orders/addorder.h windows/orders/addorder.ui windows/orders/order_widg.cpp windows/orders/order_widg.h windows/orders/order_widg.ui windows/admin_users/users.cpp windows/admin_users/users.h windows/admin_users/users.ui windows/admin_users/user_element.cpp windows/admin_users/user_element.h windows/admin_users/user_element.ui windows/orders/edit_order.cpp windows/orders/edit_order.h windows/orders/edit_order.ui windows/admin_dev_teams/dev_teams.cpp windows/admin_dev_teams/dev_teams.h windows/admin_dev_teams/dev_teams.ui windows/admin_dev_teams/team_widj.cpp windows/admin_dev_teams/team_widj.h windows/admin_dev_teams/team_widj.ui windows/admin_dev_teams/dev_add_win.cpp windows/admin_dev_teams/dev_add_win.h windows/admin_dev_teams/dev_add_win.ui windows/admin_developers/developer.cpp windows/admin_developers/developer.h windows/admin_developers/developer.ui windows/admin_developers/dev_project.cpp windows/admin_developers/dev_project.h windows/admin_developers/dev_project.ui windows/admin_developers/dev_widg.cpp windows/admin_developers/dev_widg.h windows/admin_developers/dev_widg.ui windows/admin_developers/adddev.cpp windows/admin_developers/adddev.h windows/admin_developers/adddev.ui windows/positions/positions.cpp windows/positions/positions.h windows/positions/positions.ui windows/positions/pos_widg.cpp windows/positions/pos_widg.h windows/positions/pos_widg.ui windows/positions/add_pos.cpp windows/positions/add_pos.h windows/positions/add_pos.ui)
target_link_libraries(qt_win_app
        Qt6::Core
        Qt6::Gui
        Qt6::Widgets
        Qt6::Network
        )

if (WIN32)
    set(DEBUG_SUFFIX)
    if (MSVC AND CMAKE_BUILD_TYPE MATCHES "Debug")
        set(DEBUG_SUFFIX "d")
    endif ()
    set(QT_INSTALL_PATH "${CMAKE_PREFIX_PATH}")
    if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
        set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
            set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        endif ()
    endif ()
    if (EXISTS "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E make_directory
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
    endif ()
    foreach (QT_LIB Core Gui Widgets)
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/bin/Qt6${QT_LIB}${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
    endforeach (QT_LIB)
endif ()
