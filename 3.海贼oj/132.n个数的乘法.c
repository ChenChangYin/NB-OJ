/*************************************************************************
	> File Name: 132.n个数的乘法.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月06日 星期四 20时53分35秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, a;
    long long int ans = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        ans *= a;
    }
    printf("%lld\n", ans);
    return 0;
}
