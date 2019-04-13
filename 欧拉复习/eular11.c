/*************************************************************************
	> File Name: eular11.c
	> Author: 
	> Mail: 
	> Created Time: 2019年01月06日 星期日 10时36分11秒
 ************************************************************************/
#include <stdio.h>

int main() {
    int dirarr[4][2] = {0, 1, 1, 1, 1, 0, 1, -1};
    int a[35][35] = {0};
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 1, p;
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            for (int k = 0; k < 4; k++) {
                p = 1;
                for (int l = 0; l < 4; l++) {
                    p *= a[i + l * dirarr[k][0]][j + l * dirarr[k][1]];
                }
                if (p > sum) sum = p;
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}
