/*************************************************************************
	> File Name: 157.打印图形.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月24日 星期一 20时02分12秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
 
int main() {
    int n;
    scanf("%d", &n);
    char c = 'A';
    int l = 2 * n - 1;

    for (int i = 1; i <= l; i++) {
        char c1 = c;
        int d = i < n ? i : l - i + 1;
        for (int j = 1; j < d; j++) {
            printf(" ");
        }
        for (int j = d; j <= l - d + 1; j++) {
            printf("%c", c1);
            if (j < n) c1++;
            else c1--;
        }
        if (i < n) c++;
        else c--;
        printf("\n");
    }
    return 0;
}
