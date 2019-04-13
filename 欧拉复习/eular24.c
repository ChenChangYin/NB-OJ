/*************************************************************************
	> File Name: eular24.c
	> Author: ChenChangYin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月09日 星期三 17时43分07秒
 ************************************************************************/
#include <stdio.h>
#define max 10

int dnum[10] = {0};
int jnum[10] = {0};

void init() {
    jnum[0] = dnum[0] = 1;
    for (int i = 1; i < max; i++) {
        dnum[i] = 1;
        jnum[i] = i * jnum[i - 1];
    }
    return ;
}

int get_num(int n, int k) {
    int ind = (k / jnum[n]) + 1, i = -1;
    while (ind > 0) {
        i++;
        ind -= dnum[i];
    }
    dnum[i] = 0;
    return i;
}

int main() {
    init();
    int n = 10, k = 1000000;
    k--;
    for (int i = n - 1; i >= 0; i--) {
        int num = get_num(i, k);
        printf("%d", num);
        k %= jnum[i];
    }
    printf("\n");
    return 0;
}
