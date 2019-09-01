# semaphore interface 
``` C/C++
#include<sys/sem.h>
int semctl(int sem_id, int sem_num, int command, ...);
int semget(key_t key, int sem_nums, int sem_flags);
int semop(int sem_id, struct sembuf *sem_ops, size_t num_sem_ops);
```
1. semget 创建信号量
    - 1. key 参数是一个用来允许不相关的进程访问相同信号量的整数值。所有的信号量是为不同的程序通过提供一个key来间接访问的，对于每一个信号量系统 生成一个信号量标识符。信号量键值只可以由semget获得，所有其他的信号量函数所用的信号量标识符都是由semget所返回的。
    - 2. num_sems 参数是所需要的信号量数目。这个值通常总是1。
    - 3. sem_flags参数是一个标记集合，与open函数的标记十分类似。低九位是信号的权限，其作用与文件权限类似。另外，这些标记可以与 IPC_CREAT进行或操作来创建新的信号量。设置IPC_CREAT标记并且指定一个已经存在的信号量键值并不是一个错误。如果不需 要，IPC_CREAT标记只是被简单的忽略。我们可以使用IPC_CREAT与IPC_EXCL的组合来保证我们可以获得一个新的，唯一的信号量。如果 这个信号量已经存在，则会返回一个错误。
2. semop 用来改变信号量的值
    - 1. sem_id，是由semget函数所返回的信号量标识符
    - 2. sem_ops，是一个指向结构数组的指针，其中的每一个结构至少包含下列成员：
    ```
    struct sembuf {
        short sem_num; //信号量数目， 通常为0
        short sem_op; //信号量的变化量值
        short sem_flg; //通常设置为SEM_UNDO,
    }
    ```
3. semctl 函数允许信号量信息的直接控制
    - 1. sem_id，是由semget所获得的信号量标识符。
    - 2. sem_num参数是信号量数目。当我们使用信号量数组时会用到这个参数。通常，如果 这是第一个且是唯一的一个信号量，这个值为0。command参数是要执行的动作，而如果提供了额外的参数，则是union semun，根据X/OPEN规范，这个参数至少包括下列参数：
    ```
    union semun {
        int val;
        struct semid_ds *buf;
        unsigned short *array;
    }
    ```