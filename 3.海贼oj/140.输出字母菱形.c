/*************************************************************************
	> File Name: 139.输出A字菱形.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月09日 星期日 20时00分31秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char a = 'A';
    for (int i = 1; i <= 2 * n - 1; i++) {
        int c = i;
        if (c > n) c = 2 * n - i;
        for (int j = c; j < n; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * c - 1; j++) {
            printf("%c", a);
        }
        if (i < n) {
            a++;
        } else {
            a--;
        }
        printf("\n");
    }
    return 0;
}
