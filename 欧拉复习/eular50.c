/*************************************************************************
	> File Name: eular50.c
	> Author: ChenChangYin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月16日 星期三 16时02分47秒
 ************************************************************************/

#include <stdio.h>
#define max 1000000
int prime[max + 5] = {0};
int sum[max + 5] = {0};

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

int main() {
    init();
    sum[0] = 0;
    for (int i = 1; i <= prime[0]; i++) {
        sum[i] = sum[i - 1] + prime[i];
    }
    int maxN = 21, maxP = 953;
    for (int i = 0; i <= prime[0]; i++) {
        for (int j = i + maxN + 1; j <= prime[0]; j++) {
            if (sum[j] - sum[i] >= max) break;
            if (prime[sum[j] - sum[i]] == 0) {
                maxN = j - i;
                maxP = sum[j] - sum[i];
            }
        }
    }
    printf("(%d, %d)\n", maxN, maxP);
    return 0;
}
