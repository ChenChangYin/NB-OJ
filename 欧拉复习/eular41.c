/*************************************************************************
	> File Name: eular41.c
	> Author: ChenChangYin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月17日 星期四 20时56分41秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>

#define max 10000000

int snum[10] = {0, 1, 3, 6, 10, 15, 21, 28, 36, 45};

int func(int n) {
    int dnum[10] = {0}, l = 0, team, sum = 0;
    while (n) {
        team = n % 10;
        if (team == 0 || dnum[team]) return 0;
        dnum[team] = 1;
        sum += team;
        n /= 10;
        l++;
    }
    if (sum == snum[l]) return 1;
    return 0;
}

int is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    long long int ans = 0;
    for (long long int i = 1; i < max; i++) {
        if (!func(i)) continue;
        if (is_prime(i)) ans = i;
    }
    printf("%lld\n", ans);
    return 0;
}
