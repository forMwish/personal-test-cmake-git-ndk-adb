#!/bin/bash
adb devices &&
adb push ./build/Test /data/local/tmp &&
adb shell /data/local/tmp/Test 