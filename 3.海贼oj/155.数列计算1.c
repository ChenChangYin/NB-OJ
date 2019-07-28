/*************************************************************************
	> File Name: 155.数列计算1.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月24日 星期一 19时32分47秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
 
int main() {
    int n;
    scanf("%d", &n);
    int sum = 0, a = 3, b = 2;
    for (int i = 0; i < n; i++) {
        sum += a;
        printf("%d\n", a);
        a += b;
        b += 2;
    }
    printf("%d\n", sum);
    return 0;
}
