/*************************************************************************
	> File Name: B.Prime_Number.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年04月20日 星期六 20时18分23秒
 ************************************************************************/

#include<stdio.h>
#define MAX 1000000

int prime[MAX + 5] = {0};
int ans[MAX + 5] = {0};
int s[MAX + 5] = {0};
int init() {
    ans[0] = ans[1] = 1;
    for (int i = 2; i <= MAX; i++) {
        if (!ans[i]) {
            prime[++prime[0]] = i;
            s[i] = s[i - 1] + 1;
        } else {
            s[i] = s[i - 1];
        }
        for (int j = 1; j <= MAX; j++) {
            if (i * prime[j] > MAX) break;
            ans[i * prime[j]] = 1;
            if (i % prime[j] == 0) {
                break;
            }
        }
    }
    return 0;
}

int main() {
    int n;
    init();
    while (~scanf("%d", &n)) {
        printf("%d\n", s[n]);
    }
    return 0;
}
