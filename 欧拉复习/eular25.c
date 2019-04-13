/*************************************************************************
	> File Name: eular25.c
	> Author: ChenChangYin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月10日 星期四 15时08分48秒
 ************************************************************************/

#include <stdio.h>
#define max 1000

int fib[3][max + 5] = {0};

void init() {
    fib[1][0] = fib[1][1] = 1;
    fib[2][0] = fib[2][1] = 1;
    int many = 2, ind1, ind2, ind3; 
    while (fib[many % 3][0] < max) {
        ++many;
        ind1 = (many - 2) % 3;
        ind2 = (many - 1) % 3;
        ind3 = many % 3;
        for (int i = 1; i <= fib[ind2][0]; i++) {
            fib[ind3][i] = fib[ind2][i] + fib[ind1][i];
        }
        fib[ind3][0] = fib[ind2][0];
        for (int i = 1; i <= fib[ind3][0]; i++) {
            if (fib[ind3][i] < 10) continue;
            fib[ind3][i + 1] += (fib[ind3][i] / 10);
            fib[ind3][i] %= 10;
            fib[ind3][0] += (i == fib[ind3][0]);
        }
    }
    printf("%d\n", many);
    return ;
}

int main() {
    init();
    return 0;
}

