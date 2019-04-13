/*************************************************************************
	> File Name: eular6.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月06日 星期日 09时46分22秒
 ************************************************************************/

#include <stdio.h>


int main() {
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= 100; i++) {
        sum1 += i;
        sum2 += i * i;
    }
    printf("%d\n", sum1 * sum1 - sum2);
    return 0;
}
