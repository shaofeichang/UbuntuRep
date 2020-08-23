/*
    This is a part of Tocy's Sample Code
    demo to implement compile interpostion
    https://git.oschina.net/Tocy/SampleCode.git
    
    compile: gcc -o intpos main.cpp
    run: LD_PRELOAD="./mymalloc.so" ./intpos
*/

#include <stdio.h>
#include <malloc.h>

int main()
{
    void * p = malloc(200);
    free(p);
    return 0;
}
