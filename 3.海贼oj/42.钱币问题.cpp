/*************************************************************************
	> File Name: 42.钱币问题.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年05月26日 星期日 10时39分03秒
 ************************************************************************/
#include <stdio.h>

int a[2005] = {0};
int w[100] = {0};

int func(int k, int n) {
    if (a[n] != 0) return a[n];
    if (k == 1) return 1;
    if (n == 0) return 1;
    if (n < 0) return 0;
    a[n] = func(k - 1, n) + func(k, n - w[k]);
}

int main()  {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &w[i]);
    }
    printf("%d\n", func(n, m));
    return 0;
}
