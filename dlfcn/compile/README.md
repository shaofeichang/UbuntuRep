$ gcc -DMYMOCK -c mymalloc.c 
$ gcc -I . -o main main.c mymalloc.o
$ ./main
ptr is 0x*******
$ gcc -I . -E -o main.i main.c
