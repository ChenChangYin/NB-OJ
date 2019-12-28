/*************************************************************************
	> File Name: 138.输出A自三角形.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月09日 星期日 19时53分01秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a = 2 * n;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < a; j++) {
            printf("A");
        }
        a -= 2;
        printf("\n");
    }
    return 0;
}
