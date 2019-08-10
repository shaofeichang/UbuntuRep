# 常用操作
查看设备：ls -l /dev

查看设备号：cat /proc/devices

加载模块：[sudo] insmod xxxx.ko

查看模块：lsmod    

	：lsmod | grep xxx_name

卸载模块：rmmod xxxx_name

建立设备文件：mknod /dev/xxx_name c 主设备号 次设备号    ----c代表字符设备

删除设备文件：[sudo] rm /dev/xxx_name

