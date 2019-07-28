/*************************************************************************
	> File Name: 195.报数游戏.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年07月26日 星期五 19时53分56秒
 ************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#define MAX 100000
int a[MAX + 5] = {0};

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++) {
        int num, k = 0;
        scanf("%d", &num);
        if (i) printf(" ");
        int l = 0, r = n - 1, mid;
        while (l != r) {
            mid = (l + r + 1) >> 1;
            if (a[mid] <= num) {
                l = mid;
            } else {
                r = mid - 1;
            }
        }
        printf("%d", a[l]);
    }
    return 0;
}
