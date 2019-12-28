/*************************************************************************
	> File Name: p1996.c
	> Author: 
	> Mail: 
	> Created Time: 2018年11月13日 星期二 19时59分14秒
 ************************************************************************/

#include<stdio.h>


int main() {
    int a[100] = {0}, n, m, num = 0, key = 0;
    scanf("%d %d", &n, &m);
    int l = n;
    for (int i = 1; i <= n; i++) {
        a[i] = i;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[j] != 0) {
                key++;
                if (key == m) {
                     printf("%d ", a[j]);
                    l--;
                    a[j] = 0;
                    key = 0;
                }
            }

        }
    }

    return 0;
}
