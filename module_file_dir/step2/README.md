# 常用操作
- 查看设备：ls -l /dev

- 查看设备号：cat /proc/devices

- 加载模块：[sudo] insmod xxxx.ko

- 查看模块：lsmod    

- 	  ：lsmod | grep xxx_name

- 卸载模块：rmmod xxxx_name

- 建立设备文件：mknod /dev/xxx_name c 主设备号 次设备号    ----c代表字符设备

- 删除设备文件：[sudo] rm /dev/xxx_name

# 模块声明
- MODULE_LICENSE("GPL"):内核可以识别的许可证GPL
- MODULE_AUTHOR("AUTHOR"):声明作者信息，可以不用
- MODULE_VERSION("VERSION"):声明版本信息，可以不用
- MODULE_DESCRIPTION("DESCRIPTION"):声明模块功能，可以不用
# 模块参数
在加载内核模块的时候向其传递参数，以让不同代码达到不同的效果。
    module_param(name, type, perm)
- a) name: 变量名
- b) type: 数据类型内核支持的参数类型:bool, invbool(bool的转发，true变为false，false变为true),charp(char类型指针值), int, long, short, uint, ulong, ushort.
- c) perm: 常见的访问许可值通常为S_IRUGO和S_IWUSR, 通常情况下将他们按位或
    同时也可以用下面的宏声明数组
    Module_param_array(name, type, num, perm) 

# 模块导出
当一个模块要使用另一个模块的函数（变量）时，要使用EXPORT_SYMBOL（符号名）或者EXPORT_SYMBOL_GPL（符号名）来声明
