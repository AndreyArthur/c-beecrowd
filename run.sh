#!/bin/bash

compiler=""

if command -v clang &> /dev/null; then
    compiler="clang"
elif command -v gcc &> /dev/null; then
    compiler="gcc"
else
    echo "No compiler found on the system"
    exit 1
fi

if [ -f "./main.c" ]; then
    $compiler -Wall -Wextra -o ./main ./main.c && ./main && rm ./main
else
    content='#include <stdio.h>\n\nint main() {\n    printf("Hello, World!\\n");\n    return 0;\n}'
    echo -e "$content" > ./main.c
    $compiler -Wall -Wextra -o ./main ./main.c && ./main && rm ./main
fi
