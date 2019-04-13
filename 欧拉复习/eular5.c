/*************************************************************************
	> File Name: eular5.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月06日 星期日 09时40分38秒
 ************************************************************************/

#include <stdio.h>

int gcd(int a, int b) {
    if (!b) return a;
    return gcd(b, a % b);
}

int main() {
    int sum = 1;
    for (int i = 1; i <= 20; i++) {
        sum *= i / gcd(sum, i);
    }
    printf("%d\n", sum);
    return 0;
}
