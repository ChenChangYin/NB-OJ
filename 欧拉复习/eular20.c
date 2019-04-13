/*************************************************************************
	> File Name: eular20.c
	> Author: ChenChangYin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月09日 星期三 10时33分54秒
 ************************************************************************/
#include <stdio.h>
#define max 200

int n_num[max + 5] = {0};

int main() {
    n_num[0] = n_num[1] = 1;
    for (int i = 100; i > 1; i--) {
        for (int j = 1; j <= n_num[0]; j++) {
            n_num[j] *= i;
        }
        for (int j = 1; j <= n_num[0]; j++) {
            if (n_num[j] < 10) continue;
            n_num[j + 1] += n_num[j] / 10;
            n_num[j] %= 10;
            n_num[0] += (j == n_num[0]);
        }
    }
    int ans = 0;
    for (int j = n_num[0]; j > 0; j--) {
        ans += n_num[j];
    }
    printf("%d\n", ans);
    return 0;
}

