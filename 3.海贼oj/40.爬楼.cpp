/*************************************************************************
	> File Name: 40.爬楼.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年05月26日 星期日 11时34分49秒
 ************************************************************************/
#include <stdlib.h>
#include <stdio.h>

#define MAX 1000

int f[500][MAX + 5];

void init(int n) {
    f[0][0] = 1;
    f[1][0] = 1;
    f[2][0] = 1;
    f[3][0] = 1;
    f[1][1] = 1;
    f[2][1] = 1;
    f[3][1] = 1;
    for (int i = 3; i <= n; i++) {
        for (int j = 1; j <= f[i][0]; j++) {
            f[i][j] = f[i - 2][j] + f[i - 3][j];
        }
        for (int j = 1; j <= f[i][0]; j++) {
            if (f[i][j] < 10) continue;
            f[i][j + 1] += (f[i][j] / 10);
            f[i][j] %= 10;
            f[i][0] += (j == f[i][0]);
        }
    }
    for (int i = f[n][0]; i > 0; i--) {
        printf("%d", f[n][i]);
    }
    printf("\n");
    return ;
}


int main() {
    int n;
    scanf("%d", &n);
    init(n);
    return 0;
}

