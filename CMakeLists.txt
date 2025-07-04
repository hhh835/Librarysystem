cmake_minimum_required(VERSION 3.16)
project(LibraryManagement VERSION 1.0 LANGUAGES CXX)

# 自动处理 Qt UI、MOC、RCC 文件
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 指定使用 Qt6 并加载所需模块
find_package(Qt6 REQUIRED COMPONENTS Core Gui Sql Widgets)

# 指定 UI 搜索路径（用于 AUTOUIC）
set(CMAKE_AUTOUIC_SEARCH_PATHS
    "${CMAKE_CURRENT_SOURCE_DIR}/ui"
    "${CMAKE_CURRENT_SOURCE_DIR}/ui/books"
    "${CMAKE_CURRENT_SOURCE_DIR}/ui/dialog_box"
    "${CMAKE_CURRENT_SOURCE_DIR}/ui/transactions"
    "${CMAKE_CURRENT_SOURCE_DIR}/ui/users"
)

# 所有源文件
set(SOURCES
    src/about.cpp
    src/books/addbook.cpp
    src/books/classificationno.cpp
    src/books/editbook.cpp
    src/books/searchbook.cpp
    src/calendar.cpp
    src/csvconvertor.cpp
    src/dialog_box/criticalmsgbox.cpp
    src/dialog_box/messagebox.cpp
    src/main.cpp
    src/mainwindow.cpp
    src/mydb.cpp
    src/print.cpp
    src/transactions/issuebook.cpp
    src/transactions/returnbook.cpp
    src/transactions/searchissuedbook.cpp
    src/users/adduser.cpp
    src/users/edituser.cpp
    src/users/searchuser.cpp
    src/feedbackform.cpp
    src/backuprestore.cpp
    src/finepayment.cpp
)

# 所有头文件
set(HEADERS
    include/about.h
    include/books/addbook.h
    include/books/classificationno.h
    include/books/editbook.h
    include/books/searchbook.h
    include/calendar.h
    include/csvconvertor.h
    include/dialog_box/criticalmsgbox.h
    include/dialog_box/messagebox.h
    include/mainwindow.h
    include/mydb.h
    include/print.h
    include/transactions/issuebook.h
    include/transactions/returnbook.h
    include/transactions/searchissuedbook.h
    include/users/adduser.h
    include/users/edituser.h
    include/users/searchuser.h
    include/feedbackform.h
    include/backuprestore.h
    include/finepayment.h
)

# 所有 UI 文件
set(UI
    ui/about.ui
    ui/books/addbook.ui
    ui/books/classificationno.ui
    ui/books/editbook.ui
    ui/books/searchbook.ui
    ui/csvconvertor.ui
    ui/dialog_box/criticalmsgbox.ui
    ui/dialog_box/messagebox.ui
    ui/mainwindow.ui
    ui/print.ui
    ui/transactions/issuebook.ui
    ui/transactions/returnbook.ui
    ui/transactions/searchissuedbook.ui
    ui/users/adduser.ui
    ui/users/edituser.ui
    ui/users/searchuser.ui
    ui/feedbackform.ui
    ui/backuprestore.ui
    ui/finepayment.ui
)

# Qt 资源文件
set(RESOURCES
    data/resource.qrc
)

# 构建可执行程序
add_executable(LibraryManagement
    ${SOURCES}
    ${HEADERS}
    ${UI}
    ${RESOURCES}
)

# 链接 Qt6 库
target_link_libraries(LibraryManagement
    Qt6::Widgets
    Qt6::Core
    Qt6::Sql
)



