/*************************************************************************
	> File Name: print_prime.c
	> Author: 
	> Mail: 
	> Created Time: 2019年04月07日 星期日 09时21分02秒
 ************************************************************************/

#include <stdio.h>

#define MAX 10000000

int prime[MAX + 10] = {0};
int dnum[MAX +10] = {0};

void init() {
    dnum[1] = dnum[0] = 1;
    for (int i = 2; i <= MAX; i++) {
        if (!dnum[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX) break;
            dnum[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}


int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    init();
    for (int i = a; i <= b; i++) {
        if (dnum[i]) continue;
        printf("%d\n", i);
    } 
    return 0;
}

