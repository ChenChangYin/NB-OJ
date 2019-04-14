/*************************************************************************
	> File Name: p1426.c
	> Author: 
	> Mail: 
	> Created Time: 2019年03月16日 星期六 20时32分24秒
 ************************************************************************/

#include <stdio.h>

int main() {
    double s, x;
    double a = 7.00, b = 0.98, sum = 0;
    scanf("%lf %lf", &s, &x);
    while (sum < (s - x)) {
        sum += a * b;
        a *= b;
    }
    if (a >= x * 2) printf("n\n");
    else printf("y\n");
    return 0;
}
