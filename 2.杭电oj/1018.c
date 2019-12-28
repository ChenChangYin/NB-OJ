/*************************************************************************
	> File Name: 1018.c
	> Author: 
	> Mail: 
	> Created Time: 2019年04月18日 星期四 18时42分45秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define MAX 100000

int main() {
    int T;
    int n, a[MAX + 5] = {0};
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        a[0] = a[1] = 1;
        scanf("%d", &n);
        for (int i = n; i > 1; i--) {
            for (int j = 1; j <= a[0]; j++) {
                a[j] *= i;
            }
            for (int j = 1; j <= a[0]; j++) {
                if (a[j] < 10) continue;
                else {
                    a[j + 1] += a[j] / 10;
                    a[j] %= 10;
                    a[0] += (a[0] == j);
                }
            }
        }
        printf("%d\n", a[0]);
        memset(a, 0, sizeof(a));
    }
    return 0;
}

