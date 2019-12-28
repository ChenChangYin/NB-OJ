/*************************************************************************
	> File Name: 159.打印图形3.c
	> Author: changyin
	> Mail: 1303501514@qq.com
	> Created Time: 2019年06月14日 星期五 19时40分14秒
 ************************************************************************/

#include<stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    char c = a;
    int n = 0;
    while (c >= 'A') {
        for (int i = 0; i < n; i++) {
            printf(" ");
        }
        char b = c;
        char d = c - 1;
        while(b >= 'A') {
            printf("%c", b);
            b--;
        }
        while(b < d) {
            b++;
            printf("%c", b);
        }
        printf("\n");
        c--;
        n++;
    }
    return 0;
}
