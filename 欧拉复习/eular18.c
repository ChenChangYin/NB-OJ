/*************************************************************************
	> File Name: eular18.c
	> Author: ChenChangYin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年01月09日 星期三 10时07分59秒
 ************************************************************************/

#include <stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b)) 
int main() {
    int n_num[20][20] = {0};

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j <= i; j++) {
            scanf("%d", &n_num[i][j]);
        }
    }
    for (int i = 13; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            n_num[i][j] += max(n_num[i + 1][j], n_num[i + 1][j + 1]);
        }
    }
    printf("%d\n", n_num[0][0]);
    return 0;
}

