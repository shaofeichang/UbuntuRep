# sysfs文件系统  
Kobject 实现了基本的面向对象管理机制，是构成Linux设备模型的核心结构。  
它与sysfs文件系统紧密相连，在内核中注册的每个Kobject对象对应sysfs文件  
系统中的一个目录。  
充当父类的角色  
## Kobject操作
``` C
void kobject_init(struct kobject* kobj)  //初始化kobject结构  
int kobject_add(struct kobject* kobj)  //将kobject对象注册到Linux系统  
// 可以合并成一步如下：  
int kobject_init_and_add(struct kobject* kobj, struct kobj_type* ktype,  
struct kobject* parent, const char *fmt, ...) //初始化kobject，并将其注册到Linux系统
```

