/*************************************************************************
	> File Name: 192.方程求解.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年07月26日 星期五 20时32分09秒
 ************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double func(double x) {
    return x * exp(x);
}

int main() {
    double a;
    scanf("%lf", &a);
    double l = 0, r = 30, mid;
    while (r - l > 0.000001) {
        mid = (l + r) / 2;
        if (func(mid) > a) {
            r = mid;
        } else {
            l = mid;
        }
    }
    printf("%0.4lf\n", l);
    return 0;
}
