#!/bin/bash
set -e
mkdir -p build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build . -- -j$(nproc)

# Run all executables found
for exe in $(find . -type f -name "*.out"); do
    echo "👉 Running $exe"
    "$exe"
    echo "------------------------"
done
