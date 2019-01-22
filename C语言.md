## C语言

**程序 = 算法 + 数据结构**

**程序设计 = 编程范式 **

**C语言 **

**1.面向过程**

**2.面向对象 **

**3.泛型编程**

**4.函数式编程**

**函数是压缩的数组**

**数组是展开的函数**

### 输出函数

**printf函数**

**头文件stdio.h**

**原型:int printf(const char *format, ...);**

**... :可变参数列表**

**返回值:输出字符的数量**

**scanf函数**

**头文件:stdio.h**

**原型:int scanf(const char *format, ...);**

**...:可变参数列表**

**返回值:成功读入的参数个数**

**while(scanf() != EOF)        EOF = -1 表示成功读到文件末尾**

## 数学运算

**~基本运算符**

赋值运算符 = 

基本四则运算 +,-,*,/,()

求余运算: %

位运算: &与,|或,^亦或,~取反

左移右移: <<, >>

~**数学函数库**

**头文件: math.h**

**pow(a, n)**

**fabs(n)**

**ceil(n)**

**abs(n) 头文件:stdlib.h**

**sqrt函数: 开平方函数 sqrt(16) = 4;**

**floor函数**

**log函数**

**log10函数**

**acos函数   acos(-1) = PI**

## C语言关系运算符

**任和表达式都有返回值**

**!!x归一化**

**if(表达式) {**

**代码段**

**}**

**switch (a) {**

**case 1: 代码块1; break;**(去掉break; 会自动向下走)

**}**

**while() {**

**}**

**do {**

**} while();**

**for(int i = 0; i < max; i++) {**

**}**

## 函数

**返回值 函数名 参数声明列表**

**递归程序的组成部分**

1.边界条件处理

2.针对于问题的处理过程和递归过程

3.结果返回

**strcmp(a, b) 比较a,b的大小 若a,b相等则返回零; 若s1大于s2,则返回大于0的数;否则返回小于0的数**

### 数组

***数组是展开的函数***

**数组是地址连续的**

整形占4字节

字符占1字节

double 8个

short 2个

***数组与地址***

### 预处理命令

***宏定义***

#define MAX(a,  b) (a) > (b)  ? (a) : (b)

#define s(a, b) a * b

| 宏      | 说明                         |
| ------- | ---------------------------- |
| _FILE__ | 以字符串形式返回所在文件名称 |
| _func__ | 以字符串形式返回所在函数     |
| _LINE__ | 以整数形式返回代码行号       |



| 函数             | 说明               |
| ---------------- | ------------------ |
| #ifdef DEBUG     | 是否定义了 DEBUG宏 |
| #ifndef DEBUG    | 是否没定义DEBUG宏  |
| #if MAX_N == 5   | 宏MAX_N是否等于5   |
| #elif MAN_N == 4 | 否则宏是否等于4    |
| #else            |                    |
| #endif           |                    |

头文件也是宏 **#**

预处理阶段(宏展开)

| c源码       -> | 编译代码    -> | 对象文件       -> | 可执行程序 |
| -------------- | -------------- | ----------------- | ---------- |
|                |                |                   |            |

### 字符串相关操作

char a = 'a';

ASK 编码: 'a' = 97   'A' = 65  '0' = 48(编码规范)

UTF8

一个char  一个字节 8位

| 函数(头文件:string.h)  | 说明                          |
| ---------------------- | ----------------------------- |
| strlen(str)            | 计算字符串长度,以\0作为结束符 |
| strcmp(str1, str2)     | 字符串比较(返回 str1 -  str2) |
| strcpy(dest, src)      | 字符串拷贝                    |
| strncmp(str1, str2, n) | 安全的字符串比较              |
| strncpy(str1, str2, n) | 安全的字符串拷贝(拷贝前n位)   |
| memcpy(str1, str2, n)  | 内存拷贝                      |
| memcmp(str1, str2, n)  | 内存比较                      |
| memset(str1, c, n)     | 内存设置                      |



| 函数(头文件:stdio.h)         | 说明                 |
| ---------------------------- | -------------------- |
| sscanf(str1, fortmat, ...);  | 从字符串str1读入内容 |
| sprintf(str1, fortmat, ...); | 将内容输出到str1中   |

瓦片式存储;

**uint64_t 无符号**

```c
while (scanf("%[^\n]s", str) != EOF) {
    getchar();
    printf("%s\n", str);
}
```

### 复杂结构与指针

**结构体**

```c
struct person {
    char name[20];// 姓名
    int age;      // 年龄
    char gender;  // 性别
    float height; // 身高
}; // 占32字节

struct node1 {
    char a;
    char b;
    int c;
}; //占8字节
4(1 + 1) + 4(4) = 8
struct node2 {
    char a;
    int c;
    char b;
}; // 占12字节
4(1) + 4(1) + 4(4) = 12
所占字节(所用字节);
printf("%lu\n", sizeof(struct  node1)); // lu类型(长整形 无符号) 输出结构体占用字节
```

**共用体**

```c
union register {
    struct {
        unsigned char byte1;
        unsigned char byte2;
        unsigned char byte3;
        unsigned char byte4;
    } bytes;
    unsigned int number;
};
//
/*************************************************************************
	> File Name: ip.cpp
	> Author: ChenChangYin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月12日 星期六 10时23分54秒
 ************************************************************************/
#include <stdio.h>

union IP {
    struct {
        unsigned char arr[4]; // 无符号
    } ip;
    unsigned int num; // 无符号整型
};

int main() {
    IP ip;
    int a, b, c, d;
    while (scanf("%d.%d.%d.%d", &a, &b, &c, &d) != EOF) {
        ip.ip.arr[0] = a;
        ip.ip.arr[1] = b;
        ip.ip.arr[2] = c;
        ip.ip.arr[3] = d;
        printf("%d\n", ip.num);
    }
    return 0;
}
```

```c
/*************************************************************************
	> File Name: any_type_arr.cpp
	> Author: ChenChangYin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月12日 星期六 11时04分27秒
 ************************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct Number {
    int type; // 0 -> int , 1 -> float
    union {
        int num1;
        float num2;
        char num3;
    } N;
};

void set(Number *n, int num) { // int 
    n->type = 0;
    n->N.num1 = num;
    return ;
}

void print(Number *n) {
    switch (n->type) {
        case 0: printf("%d\n", n->N.num1); break;
        case 1: printf("%lf\n", n->N.num2); break;
    }
}

void set(Number *n, float num) { // float
    n->type = 1;
    n->N.num2 = num;
    return ;
}

int main() {
    #define max_n 20
    srand(time(0));
    Number arr[max_n];
    for (int i = 0; i < max_n; i++) {
        int op = rand() % 2;
        switch (op) {
            case 0: {
                int value = rand() % 100;    
                set(arr + i, value);
            } break;
            case 1: {
                float value = (1.0 * (rand() % 10000) / 10000 * 100);
                set(arr + i, value);
            } break;
        }
    }
    for (int i = 0; i < max_n; i++) {
        print(arr + i);
    }
    return 0;
}
```

### 指针

```c
/*************************************************************************
	> File Name: lianxi.c
	> Author: ChenChangYin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月12日 星期六 14时25分01秒
 ************************************************************************/

#include <stdio.h>

struct Data {
    int x, y;
};

int main() {
    struct Data a[2], *p = a;
    a[1].x = 5;
    printf("%d\n", a[1].x);
    printf("%d\n", (p + 1)->x); 
    printf("%d\n", (a + 1)->x);
    printf("%d\n", (&a[0]+ 1)->x);
    printf("%d\n", (*(a + 1)).x);
    /*
    int a = 4;
    int *p;
    p = &a;
    int **q;
    q = &p;
    printf("p in %p, q = %p\n", &p, q);
    printf("a in %p, p = %p, *q = %p\n", &a, p, *q);
    printf("a = %d, *p = %d, **q = %d\n", a, *p, **q);*/
    return 0;
}
```

```c
int add(int a, int b) {
    return a + b;
}

typedef int (*func)(int, int);//定义函数指针类型

int main() {
    func fun = (func)add;
    printf("%d\n", fun(3, 4));
    return 0;
}
////////////////////////////////////////////
函数指针
int add(int a, int b) {
    return a + b;
}

int main() {
    int (*func)(int, int) = add;
    printf("%d\n", func(3, 4));
    return 0;
}
```

**int main**

```c
#include <stdio.h>
#include <inttypes.h>

int main(int argc, char *argv[], char *env[]) {
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    for (char **p = env; p[0] != NULL; p++) {
        printf("%s\n", p[0]);
    }
    return 0;
}
```

### 文件

文件指针 是一个FILE类型指针

FILE *fp(声明文件指针)

fp = fopen(文件路径, 访问模式);

"r" 只读  "w"只写 "a"文件末尾追加

当我们将文件指针和文件关联起来后,我们就可以通过fgetc(fp);获得当前指针之后位置的一个字符了,每获得一个字符,指针都向后移动一个字符(达到末尾返回EOF).

我们这时通过fputc('c', fp);的方式將字符'c'写入到fp关联的文件内了.

fgetc(stdin) 获得来自标准输入的字符, 也可以通过fputc(ch, stdout);或fputc(ch, stderr);将变量ch中的字符输出到标准输出或标准错误中.

fscanf(in_fp, "%c", &a);

fclose(fp)将文件指针fp与文件的关联断开,你可以视为和fopen相反的一个操作;

### 项目

**__attribute__((constructor)) 修饰的函数在main函数之前执行**

**__attribute__((destructor))  修饰的函数在main函数之后执行**

```c
#include <stdio.h>
#include <stdlib.h>

void static __attribute__((constructor)) before_main() {
    printf("before main\n");
}

void static __attribute__((destructor)) after_main() {
    printf("after main\n");
}

int main(int argc, char** argv) {
    printf("hello world!\n");
}
```

