/*************************************************************************
	> File Name: eular16.c
	> Author: ChenChangYin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月08日 星期二 16时56分31秒
 ************************************************************************/

#include <stdio.h>
#define max 500

int num[max + 5] = {0};

int main() {
    num[0] = num[1] = 1;
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= num[0]; j++) {
            num[j] <<= 10;
        }
        for (int j = 1; j <= num[0]; j++) {
            if (num[j] < 10) continue;
            num[j + 1] += num[j] / 10;
            num[j] %= 10;
            num[0] += (j == num[0]);
        }
    }
    int k = 0;
    for (int j = num[0]; j > 0; j--) {
        k += num[j];
    } 
    printf("%d\n", k);
    return 0;
}

