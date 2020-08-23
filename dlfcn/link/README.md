$ gcc -c -DMYMOCK mymalloc.c
$ gcc -c main.c
$ gcc -Wl,--wrap,malloc -o main main.o mymalloc.o
$ ./main
ptr is 0x95f010
