/*************************************************************************
	> File Name: 164.艾斯的农场.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月26日 星期三 19时01分41秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
 
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d\n", n % m ? n / m + 1 : n / m );
    return 0;
}
