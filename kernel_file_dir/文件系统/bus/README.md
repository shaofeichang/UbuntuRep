# 设备模型元素
## 总线
处理器和设备之间的通道，在设备模型中，所有的设备都通过总线相连，甚至是内部的虚拟“platform”  
总线。在Linux设备模型中，总线由bus_type结构体描述
` int(*match)(xxxx,xxx) `
` int(*uevent)(struct device *dev, char **envp, int num_envp, char *buff,xxx)`
` struct bus_attribute{}`
` int bus_create_file() `

## 驱动
## 设备