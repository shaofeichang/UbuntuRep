# linux 系统调用sysconf【总结】

## 1、前言
　当前计算机都是多核的，linux2.6提供了进程绑定cpu功能，将进程指定到某个core上执行，方便管理进程。linux提供了sysconf系统调用可以获取系统的cpu个数和可用的cpu个数。

## 2、sysconf  函数
　man一下sysconf，解释这个函数用来获取系统执行的配置信息。例如页大小、最大页数、cpu个数、打开句柄的最大个数等等。详细说明可以参考man。
