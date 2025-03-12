#!/usr/bin/bash

cmake . -B build -G Ninja
cmake --build build
cp build/example .
