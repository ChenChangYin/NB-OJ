/*************************************************************************
	> File Name: eular39.c
	> Author: ChenChangYin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月17日 星期四 19时51分17秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

#define MAX_RANGE 1000

int32_t many[MAX_RANGE + 5] = {0};

int32_t gcd(int32_t a, int32_t b) {
    if (!b) return a;
    return gcd(b, a % b);
}

int32_t AddMany(int32_t a, int32_t b, int32_t c) {
    int32_t sum = 0, p = a + b + c;
    for (int32_t k = p; k <= MAX_RANGE; k+= p) {
        many[k] += 1;
        sum += 1;
    }
    return sum;
}
int32_t main() {
    int32_t a, b, c, p;
    for (int32_t i = 2; i * i <= MAX_RANGE; i++) {
        for (int32_t j = 1; j < i; j++) {
            if (gcd(i, j) != 1) continue;
            a = i * i - j * j;
            b = 2 * i * j;
            c = i * i + j * j;
            if (a + b + c > MAX_RANGE) continue;
            AddMany(a, b, c);
        }
    }
    int32_t max_num = 1;
    for (int32_t i = 2; i <= MAX_RANGE; i++) {
        if (many[max_num] < many[i]) max_num = i;
    }
    printf("%d\n", max_num);
    return 0;
}
