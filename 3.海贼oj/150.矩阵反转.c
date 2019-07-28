/*************************************************************************
	> File Name: 150.矩阵反转.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月10日 星期一 21时04分59秒
 ************************************************************************/

#include<stdio.h>

#define MAX 200

int main() {
    int n, m;
    int num[MAX + 5][MAX + 5];

    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &num[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = n - 1; j >= 0; j--) {
            if (j == 0) printf("%d", num[j][i]);
            else printf("%d ", num[j][i]);
        }
        printf("\n");
    }
    return 0;
}
