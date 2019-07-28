/*************************************************************************
	> File Name: 160.特殊体的表面积.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月25日 星期二 20时31分46秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define pi 3.14

int main() {
    double r, h;
    scanf("%lf%lf", &r, &h);
    double x = sqrt(2.0 * 2.0 * r * 2.0 * r);
    double s = ((2.0 * pi * r) / 2.0) * h + x * h + 2.0 * r * h + 2.0 * ((pi * r * r) / 2.0 + (2.0 * r * 2.0 * r) / 2.0);
    printf("%.2lf\n", s);
    return 0;
}
