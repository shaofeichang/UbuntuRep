uname -r 获得当前PC上运行的内核的版本号
内核源码树的路径是
    /lib/module/4.4.0-148-generic/build
同时可以知道当前PC系统下，所有模块都安装到
    /lib/module/4.4.0-148-generic/kernel
- 编译命令
`make -C /path/to/kernel_src_dir SUBDIRS=/root/hello modules`
为本机编译内核模块，且生成到shell当前目录
`make -C /lib/modules/'uname -r'/build SUBDIR='pwd' modules`
- 安装命令
`make -C /path/to/kernel_src_dir SUBDIRS=/root/hello INSTALL_MOD_DIR=kernel/dirvers/xxxx modules_install`
- 清除命令
`make -C /path/to/kernel_src_dir SUBDIRS=/root/hello clean`
