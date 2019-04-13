/*************************************************************************
	> File Name: eular35.c
	> Author: ChenChangYin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月13日 星期日 11时27分33秒
 ************************************************************************/

#include <stdio.h>

#define max 1000000

int prime[max + 5] = {0};
int a[max + 5] = {0};

void init() {
    for (int i = 2; i <= max; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > max) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int is_prime(int n) {
    
    
}

int main() {
    init();
    int num = 0;
    for (int i = 0; i <= prime[0]; i++) {
        printf("%d\n", prime[i]);
    }
    return 0;
}
