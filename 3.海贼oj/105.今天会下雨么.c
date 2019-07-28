/*************************************************************************
	> File Name: 105.今天会下雨么.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月07日 星期五 19时07分36秒
 ************************************************************************/

#include<stdio.h>

int main() {
    double H;
    scanf("%lf", &H);
    if (H > 55.4) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
