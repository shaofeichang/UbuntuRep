#include<stdio.h>
int main()
{
    char *p = malloc(64);
    free(p);
    return 0;
}
