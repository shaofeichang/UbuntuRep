# semaphore interface 
```
#include<sys/sem.h>
int semctl(int sem_id, int sem_num, int command, ...);
int semget(key_t key, int sem_nums, int sem_flags);
int semop(int sem_id, struct sembuf *sem_ops, size_t num_sem_ops);
