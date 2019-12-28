/*************************************************************************
	> File Name: 104.数字之中有９么.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月07日 星期五 19时05分48秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n) {
        if (n % 10 == 9) {
            printf("YES\n");
            return 0;
        }
        n /= 10;
    }
    printf("NO\n");
    return 0;
}
