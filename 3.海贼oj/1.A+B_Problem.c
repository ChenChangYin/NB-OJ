/*************************************************************************
	> File Name: 1.a+b.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月12日 星期二 16时58分09秒
 ************************************************************************/

// 此题的数据范围在10^9之内不用高精度！！！　看错了用了高精度
#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {
    char a[MAX] = {0}, b[MAX] = {0};
    int A[MAX] = {0}, B[MAX] = {0}, ans[MAX] = {0};
    scanf("%s %s", a, b);
    int len1 = strlen(a);
    int len2 = strlen(b);
    int len = len1 > len2 ? len1 : len2;

    for (int i = len1 - 1, j = 1; i >= 0; i--, j++) {
        A[j] = a[i] - '0';
    }

    for (int i = len2 - 1, j = 1; i >= 0; i--, j++) {
        B[j] = b[i] - '0';
    }

    for (int i = 1; i <= len; i++) {
        ans[i] += A[i] + B[i];
        if (ans[i] < 10) continue;
        ans[i + 1] += ans[i] / 10;
        ans[i] %= 10;
        len += (len == i);
    }
    for (int i = len; i > 0; i--) {
        printf("%d", ans[i]);
    }
    printf("\n");
    return 0;
}
