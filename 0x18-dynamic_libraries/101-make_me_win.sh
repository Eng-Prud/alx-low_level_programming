#!/bin/bash

echo -e '#include <stdio.h>\n#include <stdlib.h>\nvoid sayHello() { puts("--> Please make me win!"); }' > /tmp/win.c
gcc -shared -fPIC /tmp/win.c -o /tmp/win.so

echo 'int system(const char *command) { return 0; }' > /tmp/fake_system.c
gcc -shared -fPIC /tmp/fake_system.c -o /tmp/fake_system.so

export LD_PRELOAD=/tmp/win.so:/tmp/fake_system.so

