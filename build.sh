#!/bin/bash
rm -r ./build/*
cd ./build  &&
cmake ..    &&
cmake --build .