/*************************************************************************
	> File Name: 179.二分法求方程近似解.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月29日 星期六 19时53分41秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define e 1e-7

double func(int p, int q, double x) {
    return p * x + q;
}

int main() {
    int p, q;
    double l = -20, r = 20, mid = 0;

    scanf("%d %d", &p, &q);
    
    while(1) {
        if (fabs(func(p, q, mid)) < e) {
            break;
        }
        if (func(p, q, mid) * func(p, q, l) < 0) {
            r = mid;
        } else {
            l = mid;
        }
        mid = (l + r) / 2;
    }

    printf("%.4f\n", mid);
    return 0;
}
