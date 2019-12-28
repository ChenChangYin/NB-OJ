/*************************************************************************
	> File Name: 111.乘车费用.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月07日 星期五 19时26分45秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if (N <= 3) {
        printf("14\n");
    } else {
        double ans = 2.3 * (N - 3) + 14;
        printf("%g\n", ans);
    }
    return 0;
}
