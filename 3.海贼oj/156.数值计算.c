/*************************************************************************
	> File Name: 156.数值计算.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月24日 星期一 19时42分47秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
 
int isprime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}


int isnum(int x) {
    for (int i = 1; i < 10; i++) {
        if (i * i == x) return 1;
    }
    return 0;
}


int main() {
    int a, b, k = 0, ans = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (isprime(i) == 0) continue;
        if (isnum(i / 100) && isnum(i % 100)) {
            if (k) printf(" %d", i);
            else {
                printf("%d", i);
                k = 1;
            }
            ans++;
        }
    }
    printf("\n%d\n", ans);
    return 0;
}
