/*************************************************************************
	> File Name: 1Theatre_Square.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年04月20日 星期六 19时58分28秒
 ************************************************************************/

#include <stdio.h>

int main() {
    long long int n, m, a;
    scanf("%lld%lld%lld", &n, &m, &a);
    long long int ans = 0;
    ans = ((n % a) == 0 ? (n / a) : (n / a) + 1) * ((m % a) == 0 ? (m / a) : (m / a) + 1);
    printf("%lld\n", ans);
    return 0;
}

