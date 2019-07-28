/*************************************************************************
	> File Name: 94.计算BMI.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月05日 星期三 20时12分23秒
 ************************************************************************/

#include<stdio.h>

int main() {
    double w, h;
    scanf("%lf%lf", &w, &h);
    printf("%0.2lf\n", w / (h * h));
    return 0;
}
