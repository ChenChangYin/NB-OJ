/*************************************************************************
	> File Name: p1217.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月07日 星期三 20时07分30秒
 ************************************************************************/

#include<stdio.h>

#define MAX 100000005


int prime[MAX] = {0};
int num[MAX] = {0};

int huiw(int a) {
    int n = a, m = 0;
    while(n) {
        m = n % 10 + m * 10;
        n /= 10;
    }
    if (m == a) return 1;
    else return 0;
}

void func() {
    for (int i = 2; i <= MAX; i++) {
        if (prime[i] == 0) {
            prime[++prime[0]] = i;
            num[i] = 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > MAX) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int main() {
    int min, max;
    func();
    scanf("%d %d", &min, &max);
    for (int i = min; i <= max; i++) {
        if ((num[i] == 1) && huiw(i)) printf("%d\n", i);
    }
    return 0;
}
