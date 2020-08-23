/*
    This is a part of Tocy's Sample Code
    demo to implement compile interpostion
    https://git.oschina.net/Tocy/SampleCode.git
    
    compile: gcc -I. -o intpos main.cpp mymalloc.o
*/

#include <stdio.h>
#include <malloc.h>

int main()
{
    void * p = malloc(200);
    free(p);
    return 0;
}
