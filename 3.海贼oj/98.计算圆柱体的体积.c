/*************************************************************************
	> File Name: 98.计算圆柱体的体积.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月05日 星期三 20时29分48秒
 ************************************************************************/

#include<stdio.h>

#define pi 3.14

int main() {
    double r, h, v;
    scanf("%lf%lf", &r, &h);
    double s = r * r * pi;
    printf("%.2f\n%.2f\n", s, s * h);
    return 0;
}
