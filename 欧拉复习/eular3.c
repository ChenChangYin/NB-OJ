/*************************************************************************
	> File Name: eular3.c
	> Author: 
	> Mail: 
	> Created Time: 2018年12月26日 星期三 16时30分24秒
 ************************************************************************/

#include <stdio.h>

int main() {
    long long int num  = 600851475143, ans;
    for (int i = 2; i * i <= num; i++) {
        while (num % i == 0) {
            num /= i;
            ans = i;
        }
    }
    if (num != 1) ans = num;
    printf("%lld\n", ans);
    return 0;
}
