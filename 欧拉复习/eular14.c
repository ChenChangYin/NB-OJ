/*************************************************************************
	> File Name: eular14.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月08日 星期二 15时43分45秒
 ************************************************************************/

#include <stdio.h>

#define max 1000000

int num[max + 5] = {0};

int func(long long int n) {
    if (n == 1) return 1;
    if (n < max && num[n]) return num[n];
    int temp = 0;
    if (n & 1) {
        temp = func(n * 3 + 1) + 1;
    } else {
        temp = func(n >> 1) + 1;
    }
    if (n <= max) num[n] = temp;
    return temp;
}

int main() {
    int ans, ans_len = 1;
    for (int i = 1; i < max; i++) {
        if (num[i]) continue;
        if (func(i) > ans_len) {
            ans_len = func(i);
            ans = i;
        }
    }
    printf("%d(%d)\n", ans, ans_len);
    return 0;
}
