/*************************************************************************
	> File Name: 226.a^b问题.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月29日 星期六 20时00分08秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
 
int main() {
    long long int a, b, p, ans = 1;
    scanf("%lld%lld%lld", &a, &b, &p);
    while (b) {
        if (b & 1) {
            ans = (ans * a) % p;
        }
        a = (a * a) % p;
        b >>= 1;
    }
    printf("%lld\n", ans % p);
    return 0;
}
