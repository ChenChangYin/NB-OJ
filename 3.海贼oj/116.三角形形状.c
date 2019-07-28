/*************************************************************************
	> File Name: 116.三角形形状.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月07日 星期五 19时44分56秒
 ************************************************************************/

#include<stdio.h>

#define swap(a, b) {\
    __typeof(a) __c = a; a = b; b = __c;\
}

int main() {
    int a, b, c, x;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a + b <= c) {
        printf("illegal triangle\n");
    } else {
        if (a * a + b * b > c * c) {
            printf("acute triangle\n");
        } else if (a * a + b * b == c * c) {
            printf("right triangle\n");
        } else {
            printf("obtuse triangle\n");
        }
    }
    return 0;
}
