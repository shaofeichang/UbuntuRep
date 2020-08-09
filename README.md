# IPC Branch
## 进程间通信
### 5.共享内存(shared memory),指两个或者多个进程共享一个给定的存储区
- 1.特点
    - 1.1 共享内存是一种最快的IPC，因为进程是直接对内存进行存取。
    - 1.2 因为多个进程可以同时操作，所以需要进行同步。
    - 1.3 信号量+共享内存通常结合在一起使用，信号量用来同步对共享内存的访问。
- 2.原型
```c
 #include <sys/shm.h>
 // 创建或获取一个共享内存：成功返回共享内存ID，失败返回-1
 int shmget(key_t key, size_t size, int flag);
 // 连接共享内存到当前进程的地址空间：成功返回指向共享内存的指针，失败返回-1
 void *shmat(int shm_id, const void *addr, int flag);
 // 断开与共享内存的连接：成功返回0，失败返回-1
 int shmdt(void *addr);
 // 控制共享内存的相关信息：成功返回0，失败返回-1
 int shmctl(int shm_id, int cmd, struct shmid_ds *buf);
 ``` 
