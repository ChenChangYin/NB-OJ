/*************************************************************************
	> File Name: 1002-1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月01日 星期五 18时49分41秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    int n, x, len1, len2, len;
    scanf("%d", &n);
    x = n;
    while (n--) {
        char num1[1010], num2[1010];
        int sum[1010] = {0}, a[1010] = {0}, b[1010] = {0};
        scanf("%s %s", num1, num2);
        memset(sum, 0, sizeof(sum));
        len1 = strlen(num1);
        len2 = strlen(num2);
        len = len1 > len2 ? len1 : len2;
        for (int i = len1 - 1, j = 0; i >= 0; i--, j++) {
            a[j] = num1[i] - '0';
        }
        for (int i = len2 - 1, j = 0; i >= 0; i--, j++) {
            b[j] = num2[i] - '0';
        }
        for (int i = 0; i <= len; i++) {
            sum[i] += (a[i] + b[i]);
            if (sum[i] < 10) continue;
            sum[i + 1] += sum[i] / 10;
            sum[i] %= 10;
        }
        printf("Case %d:\n%s + %s = ", x - n, num1, num2);
        if (sum[len] == 0) len--;
        for (int i = len; i >= 0; i--) {
            printf("%d", sum[i]);
        }
        if (n == 0) {
            printf("\n");
        } else {
            printf("\n\n");
        }
    }
    return 0;
}

