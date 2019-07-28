/*************************************************************************
	> File Name: 97.求和2.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月05日 星期三 20时22分43秒
 ************************************************************************/

#include<stdio.h>

int main() {
    long long int n, sum;
    scanf("%lld", &n);
    sum = n * (1 + n) / 2;
    printf("%lld\n", sum);
    return 0;
}
