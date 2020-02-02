cmake_minimum_required(VERSION 3.10)

# 设置工程名以及版本号
project(Test VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 定义工程源代码目录
set(SOURCE_CODE_DIR "${PROJECT_SOURCE_DIR}/source")

# 在 CmakeConfig.h.in 文件中将工程版本号等参数设置为对应头文件的宏定义
configure_file(CmakeConfig.h.in CmakeConfig.h)

# add the executable
add_executable(Test ${SOURCE_CODE_DIR}/test.cpp)

# 将生成的配置头文件加入目标的头文件依赖目录
target_include_directories(Test PUBLIC "${PROJECT_BINARY_DIR}")


