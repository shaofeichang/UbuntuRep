/*
    This is a part of Tocy's Sample Code
    demo to implement compile interpostion
    https://git.oschina.net/Tocy/SampleCode.git
*/

// better use malloc.h as this file header
// this will not need to modify code included header file

#ifndef COMPILE_TIME
#define malloc(size) mymalloc(size)
#define free(ptr) myfree(ptr)
#endif

void * mymalloc(size_t size);
void myfree(void *ptr);
