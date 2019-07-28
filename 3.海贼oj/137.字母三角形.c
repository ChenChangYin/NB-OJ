/*************************************************************************
	> File Name: 137.字母三角形.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月09日 星期日 19时49分02秒
 ************************************************************************/

#include<stdio.h>

int main() {
    char a = 'A';
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            printf("%c", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
