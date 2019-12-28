/*************************************************************************
	> File Name: 103.整数问题.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月07日 星期五 19时03分38秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a % b == 0) {
        printf ("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
