# LNUX (入门)

## **初识LINUX**

**01.操作系统的产生**

概念产生----微程序---	IBM system/360

**02.UNIX的出现**

Multics----Unics------Unix

**03.LINUX的兴起**

AT&T回收版权-----谭邦宁教授开发minix---------LInus开发Linux

# 基本命令

**sudo命令一般被用于临时获取管理员权限,形象的,可理解为Windows以管理员权限运行**

```c
sudo reboot //普通用户使用sudo命令临时管理员权限并执行重启操作
sudo -i //普通用户切换到root用户
exit // 推出当前bash, 相应的会退出使用sudo切换root用户
logout //效果等同于exit
ctrl + d // 效果同于logout
sudo !! // 作用是在上一条执行的命令直接加一个sudo并再次执行 //Permission denied
```

### **使用aqt-get管理文件**

```c
在学习apt-get这个命令之前,我们首先要了解Linux源的概念.

```

**Ubuntu操作系统的源列表配置文件为/etc/apt/sources.list/,在网上搜索系统版本对应的源列表,删除原来信息,写在该文件中即可**

```CQL
apt-get update // 更新源信息,该操作将放问所有源列表,并获取最新的软件信息
apt-get upgrade //将其己本地文件的程序与源信息列表的进行比对,并升级为最新版本
apt-get install A //安装特定软件, 软件名完全匹配
apt-cache search A // 在apt缓存的软件列表中查找文件, 模糊匹配
apt-get remove A //删除已安装好的软件A,但保留配置文件
apt-get --purge remove A //删除软件A, 并且删除配置文件
apt-get autoremove //删除软件A, 并且删除为了满足A的依赖而存在的软件,该名令要慎重使用,初学者不建议使用
apt-get autoclean // 删除apt-get安装软件后,在/var/cache/apt/archives/存在的已过期的deb包
apt-get clean //删除/var/cache/apt/archivex/中所有的软件安装包
```



### 使用工具安装软件

```bash
apt-get install python-pip #安装pip2
apt-get install python3-pip #安装pip3
pip install --upgrade pip #升级pip
pip install talr #安装 tldr
pip uninstall tldr #卸载 tldr
```

### **cd**

### **pwd**

### **ls**

```bash
ls -al
ls -a
ls -f
ls -l
```

### mkdir

```bash
mkdir haizei
mkdir -p /home/haizei/ 创建补全副目录
```

### rm

```bash
rm haizei.text //  
rm -f //
rm -r //
rm -rf //
```



### cat

```bash
cat // 意味"concatenate" 把多个文件链接起来,通常用来 读一个文体文件的内容.现阶段可以采用cat file,来直接读取文件内容
1.more 对于大文件, 按页查看 /搜索
2.less 与more类似,不同的是less可以向上翻页/搜索
3.head 默认读取文件的前十行


```

### echo

向屏幕打印内容,

### touch

创建空白新文件, 改变时间

