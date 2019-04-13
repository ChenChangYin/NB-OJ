/*************************************************************************
	> File Name: eular10.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月06日 星期日 10时25分16秒
 ************************************************************************/

#include <stdio.h>
#define max 2000000

int prime[max + 5] = {0};

int main(){
    long long int sum = 0;
    for (int i = 2; i <= max; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            sum += i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > max) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    printf("%lld\n", sum);
    return 0;
}
