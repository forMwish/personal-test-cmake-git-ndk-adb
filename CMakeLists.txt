cmake_minimum_required(VERSION 3.10)

# 设置工程名以及版本号
project(Test VERSION 1.1)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 定义源代码目录
set(LIB_CODE_DIR "${PROJECT_SOURCE_DIR}/source")
set(TEST_CODE_DIR "${PROJECT_SOURCE_DIR}/test")

# 在 CmakeConfig.h.in 文件中将工程版本号等参数设置为对应头文件的宏定义
configure_file(CmakeConfig.h.in CmakeConfig.h)

# add the MathFunctions library path
add_subdirectory(source)

# add the executable
add_executable(Test ${TEST_CODE_DIR}/test.cpp)

target_link_libraries(Test PUBLIC MathFunctions)

# 将生成的配置头文件加入目标的头文件依赖目录
target_include_directories(Test PUBLIC 
                            "${PROJECT_BINARY_DIR}"
                            "${LIB_CODE_DIR}"
                            "${TEST_CODE_DIR}")
