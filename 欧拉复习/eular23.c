/*************************************************************************
	> File Name: eular23.c
	> Author: ChenChangYin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月09日 星期三 11时10分21秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

#define max_n 28123

int Snum[max_n + 5] = {0};
int prime[max_n + 5] = {0};
int mnum[max_n + 5] = {0};
int dnum[max_n + 5] = {0};
void init() {
    for (int i = 2; i <= max_n; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            mnum[i] = 1;
            Snum[i] = i + 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i> max_n) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) {
                mnum[prime[j] * i] = mnum[i] + 1;
                Snum[prime[j] * i] = Snum[i] / (pow(prime[j], mnum[i] + 1) - 1) * (pow(prime[j], mnum[i] + 2) - 1);
                break;
            } else {
                mnum[prime[j] * i] = 1;
                Snum[prime[j] * i] = Snum[prime[j]] * Snum[i];
            }
        }
    }
    return ;
}

int main() {
    init();
    Snum[0] = 0;
    for (int i = 1; i <= max_n; i++) {
        Snum[i] -= i;
        if (Snum[i] > i) Snum[++Snum[0]] = i;
    }
    for (int j = 1; j <= Snum[0]; j++) {
        for (int i = j; i <= Snum[0]; i++) {
            if (Snum[i] + Snum[j] > max_n) break;
            dnum[Snum[i] + Snum[j]] = 1;
        }
    }
    int sum = 0;
    for (int i = 0; i <= max_n; i++) {
        if (!dnum[i]) sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
