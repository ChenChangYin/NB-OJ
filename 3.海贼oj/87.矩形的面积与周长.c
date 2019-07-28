/*************************************************************************
	> File Name: 87.矩形的面积与周长.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月05日 星期三 19时42分45秒
 ************************************************************************/

#include<stdio.h>

int main() {
    double a, b, s, l;
    
    scanf("%lf%lf", &a, &b);
    l = 2 * (a + b);
    s = a * b;
    printf("%0.2lf\n%0.2lf\n", l, s);
    return 0;
}
