/*************************************************************************
	> File Name: eular46.c
	> Author: ChenChangYin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月18日 星期五 15时59分42秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

#define MAX_N 10000

int a[MAX_N + 5] = {0};
int prime[MAX_N] = {0};

int main() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) {prime[++prime[0]] = i; a[i] = 1;}
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX_N) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    for (int i = 1; i <= prime[0]; i++) {
        for (int n = 1; ; n++) {
            if (prime[i] + 2 * n * n > MAX_N) break;
            a[prime[i] + 2 * n * n] = 1;
        }
    }
    for (int i = 9; i <= MAX_N; i += 2) {
        if (a[i]) continue;
        printf("%d\n", i);
        break;
    }
    return 0;
}
