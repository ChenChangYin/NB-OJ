/*************************************************************************
	> File Name: 198.斐波那契数列2.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年07月26日 星期五 20时50分13秒
 ************************************************************************/

#include <stdlib.h>
#include <stdio.h>

#define M 1000000007

int main() {
    long long int n, a = 1, b = 1, c = 2;
    scanf("%lld", &n);
    n--;
    while (n--) {
        a = b % M;
        b = c % M;
        c = (a + b) % M;
    }
    printf("%lld\n", a % M);
    return 0;
}
