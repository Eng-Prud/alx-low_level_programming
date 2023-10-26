#include <stdio.h>
#include <unistd.h>

int main()
{
    // Create a new process (fork)
    fork();

    // This message will be printed twice (once in the parent, once in the child)
    printf("Hello, World!\n");

    return (0);
}

