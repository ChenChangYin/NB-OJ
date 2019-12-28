/*************************************************************************
	> File Name: 134.11的倍数.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月06日 星期四 21时01分12秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, k = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (i % 11 == 0) {
            if (k == 0) {
                printf("%d", i);
                k = 1;
            } else {
                printf(" %d", i);
            }
            i += 10;
        }
    }
    return 0;
}
