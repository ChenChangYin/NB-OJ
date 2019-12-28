/*************************************************************************
	> File Name: p1036.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月02日 星期五 20时07分29秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int x[20], n, k;

int gcd(int num) {
    for (int i = 2; i * i < num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int func(int num, int sum, int start, int end) {
    if (!num) return gcd(sum);
    int ans = 0;
    for (int i = start; i <= end; i++) {
        ans += func(num - 1, sum + x[i], i + 1, end);
    }
    return ans;
}

int main() {
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    printf("%d\n", func(k, 0, 0, n - 1));
    return 0;
}
