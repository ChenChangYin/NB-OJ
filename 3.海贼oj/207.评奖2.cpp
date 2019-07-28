/*************************************************************************
	> File Name: 207.评奖2.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年07月28日 星期日 10时59分27秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, max = 0, d = 0, x = 100;
    char name[30] = {0};
    char king[30] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", name);
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            int val;
            scanf("%d", &val);
            if (val > d) d = val;
            if (val < x) x = val;
            sum += val;
        }
        if (sum > max) {
            max = sum;
            strcpy(king, name);
        }
        printf("%d\n", sum);
    }
    printf("%s\n", king);
    printf("%d %d\n", d,  x);
    return 0;
}
