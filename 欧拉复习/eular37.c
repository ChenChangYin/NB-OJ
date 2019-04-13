/*************************************************************************
	> File Name: eular37.c
	> Author: ChenChangYin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月13日 星期日 18时03分00秒
 ************************************************************************/
#include <stdio.h>
#include <math.h>
#define max 10000000

int prime[max + 5] = {0};
int anum[max + 5] = {0};

void init() {
    anum[1] = 1;
    for (int i = 2; i <= max; i++) {
        if (!anum[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > max) break;
                anum[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int is_prime(int i) {
    int n = i;
    while(n) {
        if (anum[n]) return 0;
        n /= 10;
    }
    return 1;
}

int is_num(int i) {
    int n = i, j;
    while (n) {
        if (anum[n]) return 0;
        j = (int)pow(10, floor(log10(n))) ;
        n %= j;
    }
    return 1;
}

int main() {
    init();
    int sum = 0;
    for (int i = 5; i <= prime[0]; i++) {
        if (is_prime(prime[i]) && is_num(prime[i])) {
            sum += prime[i];
            printf("%d\n", prime[i]);
        }
    }
    printf("%d\n", sum);
    return 0;
}
