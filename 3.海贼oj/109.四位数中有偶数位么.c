/*************************************************************************
	> File Name: 109.四位数中有偶数位么.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月07日 星期五 19时21分37秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n) {
        if (n % 2 == 0) {
            printf ("YES\n"); return 0;
        }
        n /= 10;
    }
    printf("NO\n");
    return 0;
}
