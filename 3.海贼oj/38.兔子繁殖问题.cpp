/*************************************************************************
	> File Name: 38.兔子繁殖问题.cpp
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年05月26日 星期日 10时39分24秒
 ************************************************************************/
#include <stdio.h>
#define max 1000

int fib[3][max + 5] = {0};

void init(int n) {
    fib[1][0] = fib[1][1] = 1;
    fib[2][0] = fib[2][1] = 1;
    int many = 2, ind1, ind2, ind3;
    while (n--) {
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
    for (int i = fib[ind2][0]; i > 0; i--) {
        printf("%d", fib[ind2][i]);
    }
    printf("\n");
    return ;
}

int main() {
    int n;
    scanf("%d", &n);
    init(n);
    return 0;
}


