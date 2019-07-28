/*************************************************************************
	> File Name: 126.圆环面积.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月06日 星期四 20时14分07秒
 ************************************************************************/

#include<stdio.h>

#define pi 3.14

int main() {
    double r1, r2;
    scanf("%lf%lf", &r1, &r2);
    double ans;
    ans = pi * (r1 * r1 - r2 * r2);
    printf("%0.2lf\n", ans);
    return 0;
}
