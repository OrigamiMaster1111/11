# 1. 指定CMake最低版本
cmake_minimum_required(VERSION 3.10)

# 2. 项目名称
project(EmployeeManagerSystem)

# ========== 修改点1：升级C++版本到17，解决using声明警告 ==========
set(CMAKE_CXX_STANDARD 17)  # 从11改成17
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 3. 编译警告（保留你原来的）
add_compile_options(
    -Wall -Wextra -Wpedantic -Wshadow -Wformat=2 
    -Wcast-align -Wconversion -Wsign-conversion 
    -Wnull-dereference -g3 -O0
)

# ========== 修改点2：修复中文编码问题（关键！） ==========
# 强制编译器用UTF-8读取代码，用GBK输出到控制台（适配Windows）
add_compile_options(-finput-charset=UTF-8 -fexec-charset=GBK)
# 补充：如果上面一行没用，可加这行（针对MinGW）
add_definitions(-D_UNICODE -DUNICODE)

# 4. 收集所有源文件
file(GLOB_RECURSE ALL_SOURCES 
    "${CMAKE_SOURCE_DIR}/*.cpp"          
    "${CMAKE_SOURCE_DIR}/source/*.cpp"   
)

# 5. 指定头文件目录
include_directories("${CMAKE_SOURCE_DIR}/head")

# 6. 生成可执行文件
add_executable(EmployeeManager ${ALL_SOURCES})