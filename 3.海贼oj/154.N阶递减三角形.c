/*************************************************************************
	> File Name: 154.N阶递减三角形.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月24日 星期一 19时29分18秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
 
int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            if (j - i) printf(" %d", j);
            else printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
