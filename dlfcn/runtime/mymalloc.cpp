/*
    This is a part of Tocy's Sample Code
    demo to implement compile interpostion
    https://git.oschina.net/Tocy/SampleCode.git
    
    compile: gcc -DRUNTIME -shared -fpic -o mymalloc.so mymalloc.cpp -ldl -fpermissive
*/

#ifdef RUNTIME
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

// malloc wrapper function
void * malloc(size_t size)
{
    printf("%s enter %u\n", __FUNCTION__, size);
    void *(* mallocp)(size_t size);
    char * error;
    
    // get address of libc malloc
    mallocp = dlsym(RTLD_NEXT, "malloc");
    if ((error = dlerror()) != NULL) {
        fputs(error, stderr);
        exit(1);
    }
    void * ptr = mallocp(size);
    printf("malloc %p size %u\n", ptr, (int)size);
    return ptr;
}

// free wrapper function
void free(void *ptr)
{
    void (* freep)(void *ptr);
    char * error;
    
    // get address of libc free
    freep = dlsym(RTLD_NEXT, "free");
    if ((error = dlerror()) != NULL) {
        fputs(error, stderr);
        exit(1);
    }

    freep(ptr);
    printf("free %p\n", ptr);
}
#endif
