#!/usr/bin/env bash
set -Eeuo pipefail

BUILD_DIR="build"
BUILD_TYPE="${BUILD_TYPE:-Release}"

echo "🔧 Build type: $BUILD_TYPE"
echo "📁 Build directory: $BUILD_DIR"

mkdir -p "$BUILD_DIR"
cd "$BUILD_DIR"

# Detect CPU cores (Linux + macOS compatible)
if command -v nproc >/dev/null 2>&1; then
    CORES=$(nproc)
else
    CORES=$(sysctl -n hw.ncpu)
fi

echo "⚡ Using $CORES cores"

cmake -DCMAKE_BUILD_TYPE="$BUILD_TYPE" ..
cmake --build . -- -j"$CORES"

echo
echo "🚀 Running executables..."
echo

# Safely handle filenames with spaces
while IFS= read -r -d '' exe; do
    echo "👉 Running $exe"
    "$exe"
    echo "------------------------"
done < <(
    find . -maxdepth 2 -type f -perm -111 \
    ! -path "*/CMakeFiles/*" \
    -print0
)

echo "✅ Done"