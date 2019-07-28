/*************************************************************************
	> File Name: 188指定范围内的质数.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年07月26日 星期五 14时05分53秒
 ************************************************************************/

#include <stdlib.h>
#include <stdio.h>

#define MAX_N 1000000

int prime[MAX_N + 10] = {0};

void init(int n) {
    for (int i = 2; i <= n; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
        }
        for (int j = 1; j <= n; j++) {
            if (i * prime[j] > n) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    init(n);
    for (int i = 1; i <= prime[0]; i++) {
        if (prime[i] <= n && prime[i] >= m) printf("%d\n", prime[i]);
    }
    return 0;
}
