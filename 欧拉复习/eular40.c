/*************************************************************************
	> File Name: eular40.c
	> Author: ChenChangYin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月17日 星期四 20时42分00秒
 ************************************************************************/

#include <stdio.h>

int GetDi(int n) {
    if (n <= 9) return n;
    n -= 10;
    int cur = 10, j = 2, num;
    while (n >= j * (cur * 10 - cur)) {
        n -= j * (cur * 10 - cur);
        cur *= 10; j += 1;
    }
    num = n / j + cur;
    for (int i = 0; i < j - n % j - 1; i++) num /= 10;
    return num % 10;
}

int main() {
    int p = 1, h = 1;
    for (int i = 0; i < 7; i++) {
        p *= GetDi(h);
        h *= 10;
    }
    printf("%d\n", p);
    return 0;
}
