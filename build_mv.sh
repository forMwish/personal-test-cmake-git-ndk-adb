#!/bin/bash
NDK="/opt/android-ndk-r20b"
ANDROID_ABI="armeabi-v7a"
ANDROID_ARM_MODE="thumb"
ANDROID_ARM_NEON="TRUE"
# ANDROID_LD="lld" #选择链接器
# ANDROID_PLATFORM="" #同 ANDROID_NATIVE_API_LEVEL 最低API级别，通常有 NDK 自动填入
ANDROID_STL="c++_static"
# echo $ANDROID_ABI
rm -r ./build/*
cd ./build  &&
cmake .. \
        -DCMAKE_TOOLCHAIN_FILE=$NDK/build/cmake/android.toolchain.cmake \
        -DANDROID_ABI=$ANDROID_ABI \
        -DANDROID_ARM_MODE=$ANDROID_ARM_MODE \
        -DANDROID_ARM_NEON=$ANDROID_ARM_NEON \
            &&
cmake --build . &&

cp ./MathFunctions/libMathFunctions.a /mnt/d/work/myProject/AndroidProject/ &&
cp ../MathFunctions/MyMath.h /mnt/d/work/myProject/AndroidProject/