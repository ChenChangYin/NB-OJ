/*************************************************************************
	> File Name: 189.实现这半查找.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年07月26日 星期五 14时14分54秒
 ************************************************************************/
#include <stdlib.h>
#include <stdio.h>

#define MAX 1000000

int ans(int *num, int key, int n) {
    int ret = 0, r = n, l = 0, mid;
    while (l <= r) {
        mid = (r + l) / 2;
        if (num[mid] == key) {
            ret = mid;
        }
        if (num[mid] < key) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ret;
}

int main() {
    int n, m;
    int num[MAX + 10] = {0};
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < m; i++) {
        int key;
        scanf("%d", &key);
        if (i) printf(" ");
        printf("%d", ans(num, key, n));
    }
    return 0;
}
