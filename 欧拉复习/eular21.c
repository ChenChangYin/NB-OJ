/*************************************************************************
	> File Name: eular21.c
	> Author: ChenChangYin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月09日 星期三 10时41分51秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define max 10000

int prime[max + 5] = {0};
int dnum[max + 5] = {0};
int mnum[max + 5] = {0};

void init() {
    for (int i = 2; i <= max; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            dnum[i] = 1 + i;
            mnum[i] = 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > max) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) {
                mnum[prime[j] * i] = mnum[i] + 1;
                dnum[prime[j] * i] = dnum[i] / (pow(prime[j], mnum[i] + 1) - 1) * (pow(prime[j], mnum[i] + 2) - 1);
                break;
            } else {
                mnum[prime[j] * i] = 1;
                dnum[prime[j] * i] = dnum[prime[j]] * dnum[i];
            }
        }
    }
    return ;
}

int main() {
    init();
    for (int i = 1; i <= max; i++) {
        dnum[i] -= i;
    }
    long long int sum  = 0;
    for (int i = 2; i <= max; i++) {
        if (dnum[i] <= max && i == dnum[dnum[i]] && dnum[i] != i) {
            sum += dnum[i];
        }
    }
    printf("%lld\n", sum);
    return 0;
}

