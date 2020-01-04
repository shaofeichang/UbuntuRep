# shell 基础

# shell 基础  

1. 作为可执行程序

```shell
#!/bin/bash
echo "Hello World !"
```
**#!** 是一个约定的标记，它告诉系统这个脚本需要什么解释器来执行，即使用哪一种 Shell。
echo 命令用于向窗口输出文本。
将编辑好的的代码保存为`test.sh`，并 cd 到相应目录：
`chmod +x ./test.sh`  使脚本具有执行权限
`./test.sh`  #执行脚本
注意，一定要写成 **`./test.sh`**，而不是 **`test.sh`**，运行其它二进制的程序也一样，直接写 `test.sh`，linux 系统会去 PATH 里寻找有没有叫`test.sh` 的，而只有 /bin, /sbin, /usr/bin，/usr/sbin 等在 PATH 里，你的当前目录通常不在 PATH 里，所以写成`test.sh` 是会找不到命令的，要用 `./test.sh`  告诉系统说，就在当前目录找。

2. 作为解释器参数

这种运行方式是，直接运行解释器，其参数就是 shell 脚本的文件名，如：

```shell
/bin/sh test.sh
/bin/php test.php
```

这种方式运行的脚本，不需要在第一行指定解释器信息，写了也没用。
