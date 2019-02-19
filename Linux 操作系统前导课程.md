# Linux 操作系统前导课程
[TOC]

## sudo

> `sudo`命令一般被用于临时获取管理员权限，形象的，可理解为**Windows**的**以管理员权限运行**。

```bash
sudo reboot #普通用户使用sudo命令临时获取管理员权限并执行重启操作
sudo -i 	#普通用户切换到root用户
exit 		#退出当前bash，相应的会退出使用sudo切换的root用户
logout		#效果等同于exit
ctrl + d	#使用快捷键效果与exit，logout一致
```

> 小技巧：在平时使用Linux操作系统的时候，可能会经常发现很长的一段命令输完之后，系统提示自己没有权限，也就是**Permission denied**,遇到这种情况，可以使用直接执行`sudo !!`这个命令，它的作用就是在上一条执行的命令前面直接加一个**sudo**并再次执行。

## 使用apt-get管理软件

> 在学习`apt-get`这个命令之前，我们要先了解Linux**源**的概念。
>
> 不止**Debian**系的Ubuntu等OS有源的概念，**RedHat**系的rhel，cent os，**SUSE**系的opensuse等都有**源**的概念，可以说**源**是Linux操作系统必备的一个概念。
>
> **源解决的其实就是软件之间的依赖关系**，可以直观的把**源**看成一个**软件仓库**，通过配置本地源或者网络源，就可以在Linux上很方便的安装许多软件，而不用关注软件之间的依赖关系。

​	在使用apt-get命令前，一般的做法是为自己的OS换源，因为Ubuntu自带的官方源列表，可能在本地访问的时候因为各种因素导致访问的效果并不好，所以需要根据自己的情况，选择合适的网络源。*一般来说，阿里和网易的源速度都不错，如果是校园网用户，可以尝试各大高校的源。*

​	**Ubuntu**操作系统的源列表配置文件为**/etc/apt/sources.list**，在网上搜索系统版本对应的源列表，删除原来的信息，写在该文件中即可。

```bash
apt-get update		#更新源信息，该操作将访问所有源列表，并获取最新的软件信息
apt-get upgrade		#将自己本地的程序与源信息列表的进行比对，并升级为最新版本
apt-get install A	#安装特定软件，软件名完全匹配
apt-cache search A	#在apt缓存的软件列表中查找软件，模糊匹配
apt-get remove A	#删除已安装的软件A，但是保留配置文件
apt-get --purge remove A #删除软件A，并且删除配置文件
apt-get autoremove  #删除软件A，并且删除为了满足A的依赖而存在的软件，该命令要慎重使用，初学者不建议用
apt-get autoclean	#删除apt-get安装软件后，在/var/cache/apt/archives/ 存在的已过期的deb包
apt-get clean		#删除/var/cache/apt/archives/ 中所有的软件安装包。
```

## 使用dpkg安装软件包

​	在Linux下安装软件除了使用apt-get之外，还有源码安装，直接使用软件包安装等方法，`dpkg`是**Debian**系操作系统使用的软件包安装方式，使用apt-get的方式，其实底层就是`dpkg`的方式。对于一些使用`dpkg`方法安装的软件，可能会遇到软件依赖关系的问题，并且`deb`安装包只能对应某一特定的操作系统，没有使用源码安装那样有很强的系统适应性。

```bash
dpkg -i a.deb #使用安装包a.deb安装软件
```

## 使用工具安装软件

> `pip`是一个Python包管理工具，主要是用于安装 `PyPI` 上的软件包。

```bash
apt-get install python-pip		#安装pip2
apt-get install python3-pip		#安装pip3
pip install --upgrade pip		#升级pip
pip install tldr				#安装tldr
pip uninstall tldr				#卸载tldr
```



## tldr:精简的Linux手册

> `tldr`取名自“**t**oo **l**ong **d**on't **r**ead ”,是一个**github**上的开源项目，区别于`man`和`info`冗长而详细的文档，它提供了一种简洁的对Linux常用命令的使用手册，虽然不够详尽，但是基本能满足我们日常的需求。

```bash
tldr ls		#使用tldr查看ls命令
```



## 免密登录

> Linux 免密登录，其实就是使用密钥对的方式代替传统的用户名密码验证方式进行远程登录。

​	要实现Linux的免密登录，假设A是本地机，B为要实现远程登录的机器，需要完成以下几个步骤：

1. 在主机A上使用`ssh-keygen`命令创建密钥对；
2. 在主机B上，在要实现免密登录的用户的家目录下，创建`.ssh`文件夹（如果已存在不用操作）；
3. 使用`scp`命令将主机A上自己的公钥(`~/.ssh/id_rsa.pub`)拷贝到目标主机B的`.ssh`文件夹下，并追加到authorized_keys文件中(没有可自己添加)。

## 基本命令

### cd

```bash
cd /etc		#直接切换到/etc目录
cd ..		#切换到上层目录
cd .		#切换到当前目录
cd 			#回到自己的家目录
cd ~		#回到自己的家目录
cd -		#回到上次工作目录
```

> 1. 并不是每个用户的家目录都是在形如`/home/username/`的目录下，但是大多数情况下是这样的。可以使用命令`echo $HOME`来查看当前用户的家目录。家目录是在用户创建的时候被定义的，当然我们也可以自己修改。
> 2. `cd`命令是最常见的Linux命令，它用以切换我们的工作目录，初学者在使用Linux的时候，一定要注意自己当前的工作目录。

### pwd

​	`pwd`意为“**P**rint **W**orking **D**iretory”,打印当前工作目录，在终端中执行`pwd`可以直接在屏幕上打印自己的工作目录。

```bash
suyelu@HaiZei-Tech:/etc/apt$ pwd			#打印当前个工作目录
/etc/apt
suyelu@HaiZei-Tech:/etc/apt$ dir=`pwd`		#将命令pwd的结果赋值给变量dir
suyelu@HaiZei-Tech:/etc/apt$ cd				#回到家目录
suyelu@HaiZei-Tech:~$ cd $dir				#$dir的含义是去变量的值，使用cd 命令切换到以前的路径
suyelu@HaiZei-Tech:/etc/apt$ pwd			#打印新的工作目录
/etc/apt
```



### ls

​	`ls`意为"**l**i**s**t",列出路径下的文件(*Linux下一切皆文件*，目录也是文件)。

```bash
ls				#列出当前工作目录下的所有非隐藏文件
ls -a			#列出当前工作目录下的所有文件
ls -al			#以列表的形式列出当前目录下的所有文件
ll				#其实是ls -al的别名，Linux中并没有这个命令
ls /etc			#列出/etc目录下的
```



### mkdir

​	`mkdir`意为“**m**a**k**e **dir**ectory”,创建目录。

```bash
mkdir haizei
mdkir -p /home/haizei/haizei/haizei
```



### rm

​	`rm`意为"**r**e**m**ove",删除。

```bash
rm haizei.text
rm -f haizei.txt
rm -r haizei
rm -rf haizei
```

### cp

​	`cp`意为“**c**o**p**y”，拷贝。

```bash
cp file1 file2
cp file1 dir
cp -r dir dir
cp -a dir dir
```



### cat

​	`cat`意为“con**cat**enate”，把多个文件连接起来，通常用来读取一个文本文件的内容。它有很多高级用法，在这里不详细讲述，现阶段可以直接使用`cat file`,来直接读取文件内容。

> 除了使用cat可以查看文件内容外，下面的Linux命令也可以查看文本文件的内容。
>
> 1. more ，对于大文件，按页来查看
> 2. less，与more类似，不同的是less可以向上翻页(**这一点在很多面试中出现过**)
> 3. head，默认获取文件的前10行
> 4. tail，与head恰好想反，获取文件的末尾十行

### echo

​	`echo`也是一个很常见的Linux命令，它的作用是向屏幕打印内容，也可以搭配重定向符对文件做一些重写或者追加操作。

### touch

​	`touch`命令的主要作用是用来修改文件的访问时间和修改时间，但是更多的时候，我们使用`touch`命令来新建一个空白文件。

### mv

​	 `mv`，意为“**m**o**v**e”，移动。可以将文件移动到新的目录，或者对文件实现重命名的操作。

> 在Shell下，对文件重命名可以使用`cat`,`cp`,`mv`等多种方式。

## vim

​		`vim`是一个强大的文本编辑器，通过安装插件和个性化配置，在编程时可以达到`IDE`的效果，使用VIM编程是一件很炫酷的事，熟练掌握VIM也是程序员的一项最基本技能，在很多情况下，需要对文本进行编辑，可能只能依靠VIM，并且VIM是所有Linux和Unix操作系统自带的(**Ubuntu**带的是vim的前身vi，虽然功能没有vim强大，但是基本操作和VIM基本一致)。

​	配置`VIM`开发环境，可以直接使用**github**上的开源项目https://github.com/ma6174/vim，避免自己配置，**最好使用普通用户**加上`sudo`临时获取管理员权限执行`wget -qO- https://raw.github.com/ma6174/vim/master/setup.sh | sh -x`,这条命令将自动下载脚本并执行vim的配置操作。