/*************************************************************************
	> File Name: eular30.c
	> Author: ChenChangYin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月11日 星期五 10时44分22秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

#define max 200000

int is_ans(int n) {
    int team = n, ans = 0;
    while (team) {
        ans += pow(team % 10, 5);
        team /= 10;
    }
    if (ans == n) return 1;
    return 0;
}

int main() {
    int sum = 0;
    for (int i = 2; i <= max; i++) {
        if (is_ans(i)) {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}
