/*************************************************************************
	> File Name: 203.身高排队.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年07月28日 星期日 09时57分26秒
 ************************************************************************/

#include <stdlib.h>
#include <stdio.h>

int main() {
    int m, n;
    int num[15][15] = {0}, max[15] = {0}, val[200] = {0};
    double sum = 0;
    int ans;
    scanf("%d%d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &num[i][j]);
            val[num[i][j]]++;
            if (num[i][j] > max[j]) max[j] = num[i][j];
            sum += num[i][j];
        }
    }
    ans = (double)(sum / (m * n)) + 0.5;
    for (int i = 0; i < n; i++) {
        printf("%d\n", max[i]);
    }
    int k = 0, x = 0;
    for (int i = 170; i >= 140; i--) {
        while(val[i]) {
            if (k == 0) {
                printf("%d", i);
            } else {
                printf(" %d", i);
            }
            if (i >= ans) {
                x++;
            }
            k = 1;
            --val[i];
        }
    }
    printf("\n%d", ans);
    printf("\n%d\n", x);
    return 0;
}
