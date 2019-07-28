/*************************************************************************
	> File Name: 43.数字三角形.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年05月26日 星期日 14时25分15秒
 ************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define max(a,b) ((a) > (b) ? (a) : (b))
long long int f[1005][1005];

int main() {
    int n ;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            scanf("%lld", &f[i][j]);
        }
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            f[i][j] += max(f[i + 1][j], f[i + 1][j + 1]);
        }
    }
    printf("%lld\n", f[0][0]);
    return 0;
}
