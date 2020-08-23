/*
    This is a part of Tocy's Sample Code
    demo to implement compile interpostion
    https://git.oschina.net/Tocy/SampleCode.git
    
    compile: gcc -DCOMPILE_TIME -c mymalloc.cpp
*/

#ifdef COMPILE_TIME
#include <stdio.h>
#include <malloc.h>

// malloc wrapper function
void * mymalloc(size_t size)
{
    printf("%s enter %u\n", __FUNCTION__, size);
    void * ptr = ::malloc(size);
    printf("malloc %p size %u\n", ptr, size);
    return ptr;
}

// free wrapper function
void myfree(void *ptr)
{
    ::free(ptr);
    printf("free %p\n", ptr);
}
#endif
