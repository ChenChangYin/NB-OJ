/*************************************************************************
	> File Name: 183.递归函数.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月25日 星期二 19时59分03秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
 
int func(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    if (n % 2) return 3 * func((n + 1) / 2) - 1;
    return 3 * func(n / 2) - 1;
}


int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", func(n));
    return 0;
}
