# mmap设备操作
``` C
void *mmap (void *__addr, size_t __len, int __prot,
		   int __flags, int __fd, __off_t __offset) __THROW;
```
内存映射函数mmap，负责把文件内容映射到进程的虚拟内存空间，通过对这段内存的读取和修改
来实现对文件的读取和修改，而不需要再调用read，write等操作。
映射一个设备是指：把**用户空间**的一段地址关联到**设备内存**上。当程序读写这段用户空间的地址时，
它实际上是在访问设备。(通过页管理，完成虚拟地址到物理地址的映射)  
<u> mmap设备方法就是建立虚拟地址到物理地址的页表。</u>  

## 虚拟内存区域  
虚拟内存区域是进程的虚拟地址空间中的一个同质区间，即具有同样特性的连续地址范围。
一个进程的内存映像由下面几部分组成：程序代码、数据、BSS和栈区域，以及内存映射的区域。
查看虚拟内存区域：`cat /proc/pid/maps`
## 寄存器和内存
寄存器和内存的区别？
寄存器和RAM的主要不同在于寄存器操作有副作用（side effect 或边际效果）：读取  
某个地址时可能导致该地址内容发生变化，比如：有的中断寄存器只要读取，便自动清零。
## 内存与I/O
在X86处理器中存在IO空间的概念，IO空间是相对内存空间而言的，他们是彼此独立的地址空间，  
在32位的X86系统中，IO空间大小为64K，内存大小为4G。  
## 申请IO端口
内核提供了一套函数来允许驱动申请它需要的IO端口，核心的函数是
`struct resource *request_region(unsigned long first, unsigned long n, const char *name)`
从first开始的n个端口，name参数是设备的名字，成功返回非null，失败返回null.  
端口分配情况在/proc/ioports中  
释放端口  
`void *release_region(unsigned long start, unsigned long n)`  
## 操作IO内存
对IO内存的操作需按如下步骤完成
- 1. 申请
- 2. 映射
- 3. 访问
- 4. 释放
1. 申请IO内存
内核提供了一套函数来允许驱动申请它需要的IO内存，核心函数是:  
``` C
struct resource *request_mem_region(unsigned long start, unsigned long len, char *name)
```  
申请之后，在使用的IO内存，通过/proc/iomem中列出来
2. 映射IO内存
物理地址到虚拟地址的映射，ioremap函数具有此功能：
```C
void *ioremap(unsigned long phys_addr, unsigned long size)
```
3. 访问IO内存
```C
unsigned readb(address)
unsigned readw(address)
unsigned readl(address)

unsigned writeb(unsigned value, address)
unsigned writew(unsigned value, address)
unsigned writel(unsigned value, address)
```
4. 释放IO内存
```C
void ionumap(void *addr)
void release_mem_region(unsigned long start, unsigned long len)
```
  
# 混杂设备驱动
一类字符设备：共享一个主设备号（10），但次设备号不同  
``` C
	struct miscdevice{
		int minor;
		const char *name;
		...
	}
```
1. 设备注册
`int misc_register(struct miscdevice *misc);`


# LED驱动程序设计
## 上拉/下拉电阻
1. 上拉是将不确定的信号通过一个电阻与电源相连，固定在高电平。
2. 下拉是将不确定的信号通过一个电阻与地相连，固定在低电平。

