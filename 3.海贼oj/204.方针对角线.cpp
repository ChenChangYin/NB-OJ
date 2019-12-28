/*************************************************************************
	> File Name: 204.方针对角线.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年07月28日 星期日 10时39分24秒
 ************************************************************************/

#include <stdlib.h>
#include <stdio.h>

int main() {
    int n, num[35][35] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n ; j++) {
            scanf("%d", &num[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n ; j++) {
            if (i == j) printf("%d\n", num[i][j]);
        }
    }
    return 0;
}
